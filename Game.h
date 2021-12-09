#include <vector>
#include <queue>
#include <fstream>
#include <set>
#include <sstream>

struct Game
{

    std::string name;
    std::string releaseDate;
    std::string updated;
    std::string website;
    std::string rating;
    std::string suggestions;
    std::string platforms;
    std::string developers; // could have comma
    std::string genre;
    std::string publisher;  // could have comma
    std::string esrbRating;
    std::vector<std::string> genreList;
    std::vector<std::string> plats;
    std::vector<std::string> devs;
    std::vector<std::string> pubs;

    Game();
    Game(std::string arr[]); // put info in array to clean it up
    std::string getInfo();
};

Game::Game() 
{
    name = "";
    releaseDate = "";
    updated = "";
    website = "";
    rating = "";
    suggestions = "";
    platforms = "";
    developers = "";
    genre = "";
    publisher = "";
    esrbRating = "";
}
Game::Game(std::string arr[]) 
{
    name = arr[0];
    releaseDate = arr[1];
    updated = arr[2];
    website = arr[3];
    rating = arr[4];
    suggestions = arr[5];
    platforms = arr[6];
    developers = arr[7];
    genre = arr[8];
    publisher = arr[9];
    esrbRating = arr[10];

    //genres
    std::queue<char> stringIterator;
    for (int i = 0; i < genre.length(); i++)
    {
        stringIterator.push(genre.at(i));
    }

    std::string temp = "";
    while (!stringIterator.empty())
    {
        if (stringIterator.front() != '|')
        {
            temp += stringIterator.front();
        }
        else
        {
            genreList.push_back(temp);
            stringIterator.pop();
            temp = "";
        }
        stringIterator.pop();
    }


    if (temp != "")
    {
        genreList.push_back(temp);
    }
    //plats
    for (int i = 0; i < platforms.length(); i++)
    {
        stringIterator.push(platforms.at(i));
    }

    temp = "";
    while (!stringIterator.empty())
    {
        if (stringIterator.front() != '|')
        {
            temp += stringIterator.front();
        }
        else
        {
            plats.push_back(temp);
            stringIterator.pop();
            temp = "";
        }
        stringIterator.pop();
    }


    if (temp != "")
    {
        plats.push_back(temp);
    }
    //devs
    for (int i = 0; i < developers.length(); i++)
    {
        stringIterator.push(developers.at(i));
    }

    temp = "";
    while (!stringIterator.empty())
    {
        if (stringIterator.front() != '|')
        {
            temp += stringIterator.front();
        }
        else
        {
            devs.push_back(temp);
            stringIterator.pop();
            temp = "";
        }
        stringIterator.pop();
    }


    if (temp != "")
    {
        devs.push_back(temp);
    }
    //pubs
    for (int i = 0; i < publisher.length(); i++)
    {
        stringIterator.push(publisher.at(i));
    }

    temp = "";
    while (!stringIterator.empty())
    {
        if (stringIterator.front() != '|')
        {
            temp += stringIterator.front();
        }
        else
        {
            pubs.push_back(temp);
            stringIterator.pop();
            temp = "";
        }
        stringIterator.pop();
    }

    if (temp != "")
    {
        pubs.push_back(temp);
    }
}
std::string Game::getInfo() 
{

    std::string temp = "";

    temp += name + "/";
    temp += platforms + "/";
    temp += genre;
    return temp;
}
