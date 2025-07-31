#include "ReadSortFile.h"
#include <fstream>
#include <iostream>

int main() {
  std::ifstream src{"../data/data.txt"};
  if (!src.is_open()) {
    std::cerr << "Error opening source file\n";
    return 1;
  }

  const std::string fileName{"../data/data.txt"};
  MyFileManipulator::ReadSortFile fileManipulator(fileName);
  fileManipulator.read_file();

  auto compareByLenghtAsc = [](const std::string &a,
                               const std::string &b) -> bool {
    std::size_t aLen{a.size()};
    std::size_t bLen{b.size()};
    if (aLen == bLen)
      return (a < b);
    return (aLen < bLen);
  };
  fileManipulator.sort(compareByLenghtAsc);

  fileManipulator.output();

  return 0;
}
