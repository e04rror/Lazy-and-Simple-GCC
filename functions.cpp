#include "functions.hpp"
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>

std::string
checkFileExtension(const std::string &argv,
                   const std::pair<std::string, std::string> extension) {
  std::string keyExtension = extension.first;

  bool isSizeNamefileBiggerThanKey = argv.length() >= keyExtension.length();
  bool findExtension =
      (argv.rfind(keyExtension) == argv.length() - keyExtension.length());

  if (isSizeNamefileBiggerThanKey && findExtension) {
    return extension.second;
  }

  return {};
}

std::string createExecutionFile(const std::string &argv,
                                const std::string &removeElement) {
  size_t removingPosition = argv.rfind(removeElement);

  // Let me explain, I decided to create a new variable that simply copies argv
  // You might ask why I don't just pass the value directly (remove the &)
  // Well, in that case, our function would return its argument,that it gives ,
  // which is not good practice.
  std::string nameExecutionFile = argv;
  if (removingPosition != std::string::npos) {
    nameExecutionFile.erase(removingPosition, removeElement.length());
  }
  return nameExecutionFile;
}

std::pair<std::string, std::string>
determineAndCreateExeFileAndExtension(const std::string &argv) {
  std::string whatTypeIs = checkFileExtension(argv, C_EXTENSION);
  std::string executionNameFile;
  if (whatTypeIs.empty()) {
    whatTypeIs = checkFileExtension(argv, CPP_EXTENSION);
    executionNameFile = createExecutionFile(argv, CPP_EXTENSION.first);
  } else {
    std::string executionNameFile =
        createExecutionFile(argv, C_EXTENSION.first);
  }
  return {whatTypeIs, executionNameFile};
}

void executeFile(const std::string &filename) {
  std::string execute = "./" + filename;
  system(execute.c_str());
}

void creatingAndExecution(int argc, const std::string &filename) {
  try {
    if (argc != MAX_AMOUNT_OF_ARGUMENTS) {
      throw std::invalid_argument(
          "The number of arguments should not exceed 2");
    }
    auto extensionAndExecution =
        determineAndCreateExeFileAndExtension(filename);

    // Check if the file are not .c or .cpp
    if( extensionAndExecution.first.empty()) {
      throw std::invalid_argument("File is not C/C++ format");
    }

    std::string command = extensionAndExecution.first + " " + filename +
                          " -o " + extensionAndExecution.second;

    system(command.c_str());

    std::cout << std::endl;
    std::cout << "Execution file created!" << std::endl;

    executeFile(extensionAndExecution.second);
  } catch (const std::invalid_argument &e) {
    std::cout << e.what() << std::endl;
  } catch (...) {
    std::cout << "Caught an unknown exception" << std::endl;
  }
}
