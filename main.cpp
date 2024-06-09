#include <iostream>  
#include <string>
#include "functions.cpp"
#include "functions.hpp"


int main(int argc, char* argv[]) {
  const std::string secondArg = argv[1];
  // First test
  std::string whatTypeIs = checkFileExtension(secondArg, C_EXTENSION);
  if(whatTypeIs.empty()){
    whatTypeIs = checkFileExtension(secondArg, CPP_EXTENSION);
  }

  std::cout<<"Extension of the file: "<<whatTypeIs<<std::endl;
  return 0;
}
