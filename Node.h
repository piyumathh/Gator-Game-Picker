#include "Game.h"

class Node
{
private:
    std::string name;
    Game* gameP = nullptr;
public:
    Node();
    Node(std::string name);
    Node(std::string name, Game* game);
    std::string getName();
    Game* getGame();
    bool isGame();
};

std::string Node::getName()
{
    return name;
}
Node::Node()
{
    name = "";
    gameP = nullptr;
}
Node::Node(std::string name)
{
    this->name = name;
    gameP = nullptr;
}
Game* Node::getGame() {
    return gameP;
}
Node::Node(std::string name, Game* game)
{
    this->name = name;
    this->gameP = game;
}
bool Node::isGame()
{
    if (gameP != nullptr)
        return true;
    return false;
}
