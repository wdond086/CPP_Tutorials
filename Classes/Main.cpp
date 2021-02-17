// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Enum.h"

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


class Log {
public:
    enum Level {
        LevelError = 0, LevelWarning, LevelInfo
    };

private:
    Level m_LogLevel = LevelInfo;

public:
    void setLevel(Level level) {
        m_LogLevel = level;
    }

    void warn(const char* message) {
        if (m_LogLevel >= LevelWarning) {
            std::cout << "[WARNING]: " << message << std::endl;
        }
    }

    void info(const char* message) {
        if (m_LogLevel >= LevelInfo) {
            std::cout << "[INFO]: " << message << std::endl;
        }
    }

    void error(const char* message) {
        if (m_LogLevel >= LevelError) {
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }
};

// This works because the 's_Variable' in Static.cpp is static. Hence, in only exists in Static.cpp
int s_Variable = 10;

// int externExample = 25; This line will cause a linking error because the same variable exists in Static.cpp and it is not static.
// To solve this problem we can simple refer to the instance in Static.cpp by reffering to it using the 'extern' keyword.
extern int externExample;

// The static works the same way with functions. As can be demonstrated by the 'staticFunction' example which is declared in both translation 
// units, but we do not get a linking error because the one in the 'Static.cpp' is declared as static.
void staticFunction() {

}

struct Entity {
    int x, y;
    static int a, b;

    void Print() {
        std::cout << x << ", " << y << ", " << a << ", " << b << std::endl;
    }
    
    static void staticPrint() {
        // This line will cause a problem because we will be trying to make a static method access non-static variables
        // std::cout << x << ", " << y << std::endl;
        std::cout << a << ", " << b << std::endl;
    }
};

// This is necessary because since they are static, they do not exit out of the definition of the class, so we need to declare them in this translation unit
int Entity::a;
int Entity::b;

// Every non static method gets an instance of the class as a parameter. Hence, non static varables cannot be accessed by a static class since it d oes not get
// a class instance to be able to access them.

class EntityClass {
public:
    float X, Y;

    // Parameter less constructor
    EntityClass() {
        X = 0.0f;
        Y = 0.0f;
        std::cout << "Created the Entity!" << std::endl;
    }

    // Constructor with parameters
    EntityClass(float x, float y) {
        X = x;
        Y = y;
    }

    // Destructor
    ~EntityClass() {
        std::cout << "Destroyed the Entity!" << std::endl;
    }

    void Print() {
        std::cout << X << ", " << Y << std::endl;
    }

    void Move(float xa, float ya) {
        X += xa;
        Y += ya;
    }
    
    // The virtual keyword allows this method to be overriden in the subclass
    virtual std::string getName() {
        return "Entity";
    }
};

// Making PlayerEntity inherits from Entityclass. 
// If you want a subclass' method to be able to override a method in the parent class, you need to use the keyword 'virtual' when creating the method in the parent class.
class PlayerEntity : public EntityClass {
public:
    std::string name;

    void printName() {
        std::cout << "The player name is " << name << std::endl;
    }

    // This will override the 'getName' method in the parent class. Adding the override annotation makes the code easier to read
    std::string getName() override {
        return name;
    }
};


class CustomLog {
public:
    CustomLog() = delete; // Do this when you don't want to implement a constructor, but you don't want to allow the use of the default constructor.

    static void Write(EntityClass* entity) {
        entity->Print();
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

    Log log;
    log.setLevel(Log::LevelWarning);
    log.warn("Hello!");

    Entity e;
    e.x = 2;
    e.y = 3;
    e.a = 4;
    // Another option will be do Entity::a = 4;
    e.b = 6;

    Entity e1;
    e1.x = 5;
    e1.y = 8;
    e1.a = 10;
    e1.b = 16;
    e.Print();
    e1.Print();
    Entity::staticPrint();


    Example value = B;
    std::cout << value << std::endl;

    EntityClass en_1; // Calling the parameter-less constructor this way will do a stack allocation
    EntityClass* en_2 = new EntityClass(5.0f, 10.0f); // Calling the constructor this way will do a heap allocation, so the delete method has to be called after all is done
    CustomLog::Write(en_2);  // Just demonstrating the use of static methods in another class.
    en_1.Print();
    delete en_2;
}
