#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <iostream> // For std

const unsigned int MAX_AMOUNT_OF_ARGUMENTS = 2; // for the first time, the program only takes two arguments


// Execution filename will be inheritance from the cpp/c file 
// For example, if you have main.cpp execution file will be main, if test.c - test and so on
std::string makeExecutionFilename(char* argv);

// This is the main process it will create line like this "gcc test.c -o test" from the one argument(the second one from argv array)
std::string makeCommandFunction(char* argv);

#endif 


