// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define LOG(x) std::cout << x << std::endl

// Members are private by default
// The only difference between a class and a struct is that in classes, all members are private by default.
// In structs, all members are public by default
// Use structs when the sole aim is to structure data, without much functionality neccesarily
// Never use a struct when inheritance is involved
class Player {
public: // Since this is a class, we need this public keyword to keep things public
    int x = 0;
    int y = 0;
    int speed = 3;

    void move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

struct SPlayer {
    int x, y = 0;
    int speed = 3;

    void move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};


int main()
{
    Player player;
    player.x = 5;
    LOG(player.x);
    player.move(2, 3);
    LOG(player.x);
    std::cout << "Hello World!\n";
}
