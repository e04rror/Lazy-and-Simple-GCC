// First create with g++

#include "functions.hpp"
#include <cstdlib>
#include <string>
#include <utility>

std::string checkFileExtension(const std::string& argv, const std::pair<std::string, std::string> extension){
  std::string keyExtension = extension.first;
  
  bool isSizeNamefileBiggerThanKey = argv.length() >= keyExtension.length();
  bool findExtension = (argv.rfind(keyExtension) == argv.length() - keyExtension.length());

  if(isSizeNamefileBiggerThanKey && findExtension){
    return extension.second;
  }

  return {};
}

std::string makeCommandFunction(int argc, char* argv){
  // At first, I want my program take only two arguments(I mean kind like test)

  // Then it must be check what is the file extension(c or c++)

  //
  

}
