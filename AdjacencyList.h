#include <map>
#include "Node.h"
struct AdjacencyList
{
private:
    std::map<std::string, std::pair<Node*, std::vector<Node*>>> graph;
    Node* sourceNode;
    std::set<std::string> publishers;
    std::set<std::string> ratings;
    std::set<std::string> genres;
    std::set<std::string> platforms;
    std::set<std::string> suggestions;
    std::set<std::string> ESRB;
    std::set<std::string> timeSinceRelease;
public:
    AdjacencyList();
    //insert functions
    void insertGame(Game* g);
    void addOldEdge(std::string from, std::string to); // to exists in graph already
    void addNewEdge(std::string from, std::string to); // to doesn't exist

    bool hasEdge(std::string from, std::string to);
    Node* getNode(std::string name);
    std::vector<Node*> getNodeNeighbors(std::string from);

    //getting string outputs
    std::vector<std::string> getPublishers();
    std::vector<std::string> getGenres();
    std::vector<std::string> getPlatforms();
    std::vector<std::string> getNeighbors(std::string from); // gets neighbors in string form
};
std::vector<std::string> AdjacencyList::getPublishers() 
{

    std::vector<std::string> ret;
    for (std::set<std::string>::iterator it = publishers.begin(); it != publishers.end(); it++) 
    {
        ret.push_back(*it);
    }
    return ret;
}
std::vector<std::string> AdjacencyList::getGenres() 
{
    std::vector<std::string> ret;
    for (std::set<std::string>::iterator it = genres.begin(); it != genres.end(); it++) 
    {
        ret.push_back(*it);
    }
    return ret;
}
std::vector<std::string> AdjacencyList::getPlatforms() 
{
    std::vector<std::string> ret;
    for (std::set<std::string>::iterator it = platforms.begin(); it != platforms.end(); it++) 
    {
        ret.push_back(*it);
    }
    return ret;
}

Node* AdjacencyList::getNode(std::string name) 
{
    return graph[name].first;
}
std::vector<Node*> AdjacencyList::getNodeNeighbors(std::string from) 
{
    return graph[from].second;
}
bool AdjacencyList::hasEdge(std::string from, std::string to)
{ // function does not modify anything
    for (int i = 0; i < graph[from].second.size(); i++) 
    {
        std::string nodeName = graph[from].second.at(i)->getName();
        if (to == nodeName) { // found within its vector of nodes
            return true;
        }
    }
    return false;
}
std::vector<std::string> AdjacencyList::getNeighbors(std::string from) 
{
    std::vector<std::string> ret;
    for(int i = 0; i < graph[from].second.size(); i++) 
    {
        ret.push_back(graph[from].second.at(i)->getName());
    }
    return ret;
}
AdjacencyList::AdjacencyList()
{
    sourceNode = new Node("source");
    graph["source"];//source node
    graph["source"].first = sourceNode;
}
void AdjacencyList::addOldEdge(std::string from, std::string to)
{ // function used to create edge to a node that already exists
    Node* toNode = graph[to].first; // gets node
    graph[from].second.push_back(toNode);
}
void AdjacencyList::addNewEdge(std::string from, std::string to)
{ // creates a new edge to a new vertice
    Node* newNode = new Node(to); // creating new node
    graph[to].first = newNode; // putting it in graph
    graph[from].second.push_back(newNode); // pushing onto map
}
void AdjacencyList::insertGame(Game *g)
{
    Node* n = new Node(g->name, g);
    graph["source"].second.push_back(n); // adding it to the graph
    graph[g->name];
    graph[g->name].first = n;
    //genre connection
    for (int i = 0; i < g->genreList.size(); i++) //adding genres
    {
        //Changes made by Tam
        std::string currGen = g->genreList.at(i);
        if (genres.find(currGen) == genres.end()) 
        { // not in graph yet
            addNewEdge(g->name, currGen); // adding new Edge
            genres.insert(currGen); // inserting into set
        }
        else 
        { // already exist
            addOldEdge(g->name, currGen);
        }
    }
    //platform connection
    for (int i = 0; i < g->plats.size(); i++) //adding genres
    {
        std::string currPlat = g->plats.at(i);
        //Changes made by Tam
        if (platforms.find(currPlat) == platforms.end()) 
        { // not in graph yet
            addNewEdge(g->name, currPlat);
            platforms.insert(currPlat);
        }
        else 
        { // already exist
            addOldEdge(g->name, currPlat);
        }
    }
    //publishers connection
    for (int i = 0; i < g->pubs.size(); i++) //adding genres
    {
        //Changes made by Tam
        std::string currPub = g->pubs.at(i);
        if (publishers.find(currPub) == publishers.end()) 
        { // not in graph yet
            addNewEdge(g->name, currPub);
            publishers.insert(currPub);
        }
        else 
        { // already exist
            addOldEdge(g->name, currPub);
        }
    }
    //ratings connection
    std::string rating;
    if (stod(g->rating) < 0.5)
        rating = "0 - 0.5";
    else if (stod(g->rating) >= 0.5 && stod(g->rating) < 1)
        rating = "0.5 - 1";
    else if (stod(g->rating) >= 1 && stod(g->rating) < 1.5)
        rating = "1 - 1.5";
    else if (stod(g->rating) >= 1.5 && stod(g->rating) < 2)
        rating = "1.5 - 2";
    else if (stod(g->rating) >= 2 && stod(g->rating) < 2.5)
        rating = "2 - 2.5";
    else if (stod(g->rating) >= 2.5 && stod(g->rating) < 3)
        rating = "2.5 - 3";
    else if (stod(g->rating) >= 3 && stod(g->rating) < 3.5)
        rating = "3 - 3.5";
    else if (stod(g->rating) >= 3.5 && stod(g->rating) < 4)
        rating = "3.5 - 4";
    else if (stod(g->rating) >= 4 && stod(g->rating) < 4.5)
        rating = "4 - 4.5";
    else if (stod(g->rating) >= 4.5 && stod(g->rating) <= 5)
        rating = "4.5 - 5";

    if (ratings.find(rating) == ratings.end()) 
    { // not found in the graph yet
        addNewEdge(g->name, rating);
        ratings.insert(rating);
    }
    else 
    { // already in graph
        addOldEdge(g->name, rating);
    }

    //suggestions
    std::string suggs;
    if (stod(g->suggestions) < 51)
        suggs = "0 - 50";
    else if (stod(g->suggestions) < 101 && stod(g->suggestions) > 50)
        suggs = "51 - 100";
    else if (stod(g->suggestions) < 151 && stod(g->suggestions) > 100)
        suggs = "101 - 150";
    else if (stod(g->suggestions) < 201 && stod(g->suggestions) > 150)
        suggs = "150 - 200";
    else if (stod(g->suggestions) < 251 && stod(g->suggestions) > 200)
        suggs = "201 - 250";
    else if (stod(g->suggestions) < 301 && stod(g->suggestions) > 250)
        suggs = "251 - 300";
    else if (stod(g->suggestions) < 351 && stod(g->suggestions) > 300)
        suggs = "301 - 350";
    else if (stod(g->suggestions) < 401 && stod(g->suggestions) > 350)
        suggs = "351 - 400";
    else if (stod(g->suggestions) < 451 && stod(g->suggestions) > 400)
        suggs = "401 - 450";
    else if (stod(g->suggestions) < 501 && stod(g->suggestions) > 450)
        suggs = "451 - 500";
    else
        suggs = "500+";

    if (suggestions.find(suggs) == suggestions.end())
    { // not found in the graph yet
        addNewEdge(g->name, suggs);
        suggestions.insert(suggs);
    }
    else
    { // already in graph
        addOldEdge(g->name, suggs);
    }

    //ESRB
    if (ESRB.find(g->esrbRating) == ESRB.end())
    { // not in graph yet
        addNewEdge(g->name, g->esrbRating);
        ESRB.insert(g->esrbRating);
    }
    else
    { // already in graph
        addOldEdge(g->name, g->esrbRating);
    }

}
