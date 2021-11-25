#include <string>

class Game {
private:
    string name;
    string releaseDate;
    string website;
    string esrb_Rating;
    string genre; // possibly a vector
    string platform; // possibly a vector
    string publisher;
    string developer;
    int update;
    int numAchievements;
    int playTime;
    int numSuggestions;
    double rating;

public:
    void printInfo();
    Game();
    Game(string[] arr, int[] arr2, double rating); // put info in array to clean it up
};
//testing
