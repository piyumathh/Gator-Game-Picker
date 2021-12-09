#include "AdjacencyList.h"
//#include "EdgeList.h"

struct recommendationEngine
{
    //add graph here
    //NOTE: Change the graph implementation here by changing the comments. Felt needless to copy code just for one line change.
    AdjacencyList* list = new AdjacencyList();
    //EdgeList* list = new EdgeList();
    std::vector<Game*> games;
    std::string address;
    //add more funcions to read graphs
public:
    recommendationEngine() 
    {
        //address = "C:\\Users\\tamhu\\source\\repos\\GatorGamePickerGUI\\GatorGamePickerGUI\\game_info.csv";
        address = "game_info.csv";
        readFile(address);
    }
    recommendationEngine(std::string address) 
    {
        this->address = address;
        readFile(address);
    }
    void readFile(std::string address);
    std::vector<std::string> getGenres(); // these functions return as a vector of string for GUI
    std::vector<std::string> getPlatforms();
    std::vector<std::string> getPublishers();
    double getScore(double userInput[], std::string publisher, std::string genre, std::string platform, std::string gameName); // used to calculate compatibility
    std::vector<std::string> getRecommendations(double userInput[], std::string publisher, std::string genre, std::string platform);
    /* NOTE ---- GUI Inputs
     * 0 - FGS         slider range is between 1.0 to 2.0
     * 1 - UpdateS
     * 2 - SuggestionS
     * 3 - PlatformS
     * 4 - GenreS
     * 5 - PublisherS
     * 6 - RatingS
     * rating range is between 1.1 to 1.8
     * 7 - FGR
     * 8 - UpdateR
     * 9 - SuggestionR
     * 10 - PlatformR
     * 11 - GenreR
     * 12 - PublisherR
     * 13 - RatingR
     */
};

void recommendationEngine::readFile(std::string address) 
{
    std::ifstream inFile(address);
    std::string iterate;

    getline(inFile, iterate); //getting rid of labels


    int i = 0;
    int counter = 0;
    while (counter < 150000) 
    { // change number depending on how many inputs we want
        getline(inFile, iterate);
        std::istringstream wholeLine(iterate);
        if (iterate.find('"') != std::string::npos) 
        { // some lines aren't readable
            i++;
            continue;
        }
        std::string name;
        std::string releaseDate;
        std::string updated;
        std::string website;
        std::string rating;
        std::string suggestions;
        std::string platforms;
        std::string developers;
        std::string genre;
        std::string publisher;
        std::string esrbRating;

        std::string temp; // used to filter out unneeded information
        getline(wholeLine, temp, ',');
        getline(wholeLine, temp, ',');
        getline(wholeLine, name, ',');
        getline(wholeLine, temp, ',');
        getline(wholeLine, releaseDate, ',');
        getline(wholeLine, temp, ',');
        getline(wholeLine, updated, ',');
        getline(wholeLine, website, ',');
        getline(wholeLine, rating, ',');
        getline(wholeLine, temp, ',');
        getline(wholeLine, temp, ',');
        getline(wholeLine, temp, ',');
        getline(wholeLine, temp, ',');
        getline(wholeLine, suggestions, ',');
        getline(wholeLine, temp, ',');
        getline(wholeLine, temp, ',');
        getline(wholeLine, platforms, ',');
        getline(wholeLine, developers, ',');
        getline(wholeLine, genre, ',');
        getline(wholeLine, publisher, ',');
        getline(wholeLine, esrbRating, ',');

        std::string arr[11]; // inputted into an array for clean game constructor
        arr[0] = name;
        arr[1] = releaseDate;
        arr[2] = updated;
        arr[3] = website;
        arr[4] = rating;
        arr[5] = suggestions;
        arr[6] = platforms;
        arr[7] = developers;
        arr[8] = genre;
        arr[9] = publisher;
        arr[10] = esrbRating;

        Game* newGame = new Game(arr);
        list->insertGame(newGame); // where the game is inserted into the graph
        this->games.push_back(newGame); // pushing it onto games

        counter++;
    }
}

std::vector<std::string> recommendationEngine::getGenres() 
{
    return list->getGenres();
}
std::vector<std::string> recommendationEngine::getPlatforms() 
{
    return list->getPlatforms();
}
std::vector<std::string> recommendationEngine::getPublishers() 
{
    return list->getPublishers();
}
double recommendationEngine::getScore(double userInput[], std::string publisher, std::string genre, std::string platform, std::string gameName) 
{
    double FreshGameScalar = userInput[7] * userInput[0];
    double updateScalar  = userInput[8] * userInput[1];
    double suggestionScalar = userInput[9] * userInput[2];
    double platformScalar = userInput[10] * userInput[3];
    double genreScalar = userInput[11] * userInput[4];
    double publisherScalar = userInput[12] * userInput[5];
    double ratingScalar = userInput[13] * userInput[6];

    double score = 0;

    //add fresh game scalar

    std::string release = list->getNode(gameName)->getGame()->releaseDate;
    release = release.substr(0, 4);
    double FGscore = 0;
    if (release == "2020" || release == "2019")
        FGscore = 20.0;
    else if (release == "2018" || release == "2017")
        FGscore = 19.0;
    else if (release == "2016" || release == "2015")
        FGscore = 18.0;
    else if (release == "2014" || release == "2013")
        FGscore = 17.0;
    else if (release == "2012" || release == "2011")
        FGscore = 16.0;
    else if (release == "2010" || release == "2009")
        FGscore = 15.0;
    else if (release == "2008" || release == "2007")
        FGscore = 14.0;
    else if (release == "2006" || release == "2005")
        FGscore = 13.0;
    else if (release == "2004" || release == "2003")
        FGscore = 12.0;
    else if (release == "2002" || release == "2001")
        FGscore = 11.0;
    else
        FGscore = 10.0;

    score += (FGscore * FreshGameScalar);



    //add update scalar
    std::string update = list->getNode(gameName)->getGame()->updated;
    update = update.substr(0, 4);
    if (update == "2020") 
    {
        score += (10 * updateScalar);

    }
    else 
    {
        score += 10;
    }

    //add suggestion scalar
    double suggestionScore = 10;
    if (list->hasEdge(gameName, "0 - 50"))
        suggestionScore = 10;
    else if(list->hasEdge(gameName, "51-100"))
        suggestionScore = 11;
    else if(list->hasEdge(gameName, "101-150"))
        suggestionScore = 12;
    else if(list->hasEdge(gameName, "151-200"))
        suggestionScore = 13;
    else if(list->hasEdge(gameName, "201-250"))
        suggestionScore = 14;
    else if(list->hasEdge(gameName, "251-300"))
        suggestionScore = 15;
    else if(list->hasEdge(gameName, "301-350"))
        suggestionScore = 16;
    else if(list->hasEdge(gameName, "351-400"))
        suggestionScore = 17;
    else if(list->hasEdge(gameName, "401-450"))
        suggestionScore = 18;
    else if(list->hasEdge(gameName, "451-500"))
        suggestionScore = 19;
    else if(list->hasEdge(gameName, "500+"))
        suggestionScore = 20;

    score += (suggestionScore * suggestionScalar);

    //platform
    if (list->hasEdge(gameName, platform)) // game is on a user inputted plaform
        score += (20 * platformScalar);
    else
        score += 10;
    //genre
    if(list->hasEdge(gameName, genre)) // game is a user inputted genre
        score += 20 * genreScalar;
    else
        score += 10;
    //publisher
    if (list->hasEdge(gameName, publisher)) // game was made by user inputted publisher
        score += (20 * publisherScalar);
    else
        score += 10;
    //add Rating Scalar
    double ratingScore;
    if (list->hasEdge(gameName, "0 - 0.5"))
        ratingScore = 5;
    else if (list->hasEdge(gameName, "0.5 - 1"))
        ratingScore = 6;
    else if (list->hasEdge(gameName, "1 - 1.5"))
        ratingScore = 7;
    else if (list->hasEdge(gameName, "1.5 - 2"))
        ratingScore = 8;
    else if (list->hasEdge(gameName, "2 - 2.5"))
        ratingScore = 9;
    else if (list->hasEdge(gameName, "2.5 - 3"))
        ratingScore = 10;
    else if (list->hasEdge(gameName, "3 - 3.5"))
        ratingScore = 11;
    else if (list->hasEdge(gameName, "3.5 - 4"))
        ratingScore = 12;
    else if (list->hasEdge(gameName, "4 - 4.5"))
        ratingScore = 13;
    else if (list->hasEdge(gameName, "4.5 - 5"))
        ratingScore = 14;
    score += (ratingScore * ratingScalar);
    return score;

}
std::vector<std::string> recommendationEngine::getRecommendations(double userInput[], std::string publisher, std::string genre, std::string platform) 
{
    //include BFS
    //use User inputs
    std::vector<std::string> ret; // return string vector for recommendation list
    std::priority_queue<std::pair<double, std::string>, std::vector<std::pair<double, std::string>>, std::greater<std::pair<double, std::string>>> pq;
    //priority queue that keeps track of the kth largest score at top

    //Initialized pair for the pq
    std::pair<double, std::string> initial;
    initial.first = 0.0;
    initial.second = "";
    pq.push(initial);

    //BFS with recommendation engine
    
    std::set<std::string> visited;
    std::queue<std::string> q;
    q.push("source");
    while (!q.empty())
    {
        std::string curr = q.front();
        if (visited.find(curr) == visited.end()) // not visited yet
        {
            visited.insert(curr);
            std::vector<Node*> vec = list->getNodeNeighbors(curr);
            for (int i = 0; i < vec.size(); i++)
            {
                q.push(vec.at(i)->getName());
            }
        }
        
        if (list->getNode(curr)->isGame())
        {
            double score = getScore(userInput, publisher, genre, platform, curr); // calculates score
            //inserting it into priority queue
            if (score > pq.top().first) {
                std::pair<double, std::string> newPair;
                newPair.first = score;
                newPair.second = list->getNode(curr)->getName(); // CHANGE TO GET FULL INTO
                if (pq.size() >= 20) { // 20 is k in this situation (20 outputs)
                    pq.push(newPair);
                    pq.pop();
                }
                else {
                    pq.push(newPair);
                }
            }
        }
        
        q.pop();
    }

    
    while(!pq.empty()) 
    {
        std::string gameName = pq.top().second;
        Game* currGame = list->getNode(gameName)->getGame();
        ret.push_back(currGame->getInfo());
        pq.pop();
    }
   
    return ret;
}