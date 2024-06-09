// First create with g++

#include "functions.hpp"
#include <cstdlib>
#include <string>
#include <utility>
#include <algorithm>

std::string checkFileExtension(const std::string& argv,  const std::pair<std::string, std::string> extension){
  std::string keyExtension = extension.first;
  
  bool isSizeNamefileBiggerThanKey = argv.length() >= keyExtension.length();
  bool findExtension = (argv.rfind(keyExtension) == argv.length() - keyExtension.length());

  if(isSizeNamefileBiggerThanKey && findExtension){
    return extension.second;
  }

  return {};
}

std::string createExecutionFile(const std::string& argv, const std::string& removeElement) {
   size_t removingPosition = argv.rfind(removeElement);
  
  //Let me explain, I decided to create a new variable that simply copies argv
  //You might ask why I don't just pass the value directly (remove the &) 
  //Well, in that case, our function would return its argument,that it gives , which is not good practice.
  std::string nameExecutionFile = argv;
   if(removingPosition!= std::string::npos){
    nameExecutionFile.erase(removingPosition, removeElement.length());  
  }
  return nameExecutionFile;
}

std::string makeCommandFunction(int argc, char* argv){
  // At first, I want my program take only two arguments(I mean kind like test)

  // Then it must be check what is the file extension(c or c++)

  //
  

}
