// #pragma once
// Commenting out the pragma preprocessor will cause a redefinition error because the struct Player will be included twice in the Log.cpp file

// Another more complicated way to define a header guard
/*
* This first checks if a symbol _LOG_H is alredy defined. If it's not defined, 
* then it goes on to include the rest of the header file
*/
#ifndef _LOG_H
#define _LOG_H

// Everything starting with a '#' is called a preprocessor hence it will be evaluated before the 
// code in this file is actually compiled

/*
* #pragma once => only include this file in any single translation unit once. This is a header guard.
* This prevents us from having duplicate function, struct and class declarations
*/

void Log(const char* message);

void InitLog();

struct Player
{

};

#endif