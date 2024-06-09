#include <iostream>  
#include <string>
#include "functions.cpp"
#include "functions.hpp"


int main(int argc, char* argv[]) {
  const std::string secondArg = argv[1];
  // First test
  std::string whatTypeIs = checkFileExtension(secondArg, C_EXTENSION);
  std::string executionNameFile = createExecutionFile(secondArg, C_EXTENSION.first);
  if(whatTypeIs.empty()){
    whatTypeIs = checkFileExtension(secondArg, CPP_EXTENSION);
    executionNameFile = createExecutionFile(secondArg, CPP_EXTENSION.first);
  }

  std::cout<<"Extension of the file: "<<whatTypeIs<<std::endl;
  std::cout<<"Executional file: "<<executionNameFile<<std::endl;
  return 0;
}
