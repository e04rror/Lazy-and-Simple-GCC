#include "functions.cpp"
#include <string>
#include <filesystem>

int main(int argc, char *argv[]) {
  const std::string secondArg = argv[1];
  
  std::filesystem::path fPath(secondArg);
  if(std::filesystem::exists(fPath)) {
  
  creatingAndExecution(argc, secondArg);

  }else {
    std::cout<<"ERROR: The file does not exist!"<<std::endl;
    return 2;
  }
  return 0;
}
