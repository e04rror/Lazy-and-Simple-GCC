#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <iostream> // For std
#include <utility>

const unsigned int MAX_AMOUNT_OF_ARGUMENTS = 2; // for the first time, the program only takes two arguments

const std::pair<std::string, std::string> C_EXTENSION = {".c", "gcc"} , CPP_EXTENSION = {".cpp", "g++"};


// Function that defines is file .c or .cpp
std::string createExecutionFile(const std::string& argv,  const std::string& keyExtension);

// Execution filename will be inheritance from the cpp/c file 
// For example, if you have main.cpp execution file will be main, if test.c - test and so on
std::string checkFileExtension(const std::string& argv,  const std::pair<std::string, std::string> extension);


// This is the main process it will create line like this "gcc test.c -o test" from the one argument(the second one from argv array)
std::string makeCommandFunction(int argc, char* argv);

#endif 


