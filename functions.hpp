#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <string>
#include <utility>

const unsigned int MAX_AMOUNT_OF_ARGUMENTS =
    2; // for the first time, the program only takes two arguments

const std::pair<std::string, std::string> C_EXTENSION = {".c", "gcc"},
                                          CPP_EXTENSION = {".cpp", "g++"};

std::string createExecutionFile(const std::string &argv,
                                const std::string &keyExtension);

// Execution filename will be inheritance from the cpp/c file
// For example, if you have main.cpp execution file will be main, if test.c -
// test and so on
std::string
checkFileExtension(const std::string &argv,
                   const std::pair<std::string, std::string> extension);

std::pair<std::string, std::string>
determineAndCreateExeFileAndExtension(const std::string &argv);

// This is the main process it will create line like this "gcc test.c -o test"
// from the one argument(the second one from argv array)
std::string makeCommand(int argc, const std::string &argv);

#endif
