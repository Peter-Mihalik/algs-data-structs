#include <fstream>
#include <iostream>
#include <set>

#include "MyStringLengthCompare.h"

void fill_set(
    std::set<std::string, MyComapreFunctions::MyStringLengthCompare> &set,
    std::ifstream &src) {

  std::string line{};
  while (std::getline(src, line)) {
    set.insert(line);
  }
}

void output_set(
    const std::set<std::string, MyComapreFunctions::MyStringLengthCompare>
        set) {

  std::cout << "Outputing\n";
  for (auto item : set) {
    std::cout << item << std::endl;
  }
}

bool is_unique(
    const std::set<std::string, MyComapreFunctions::MyStringLengthCompare> &set,
    const std::string &line) {

  const auto it = set.find(line);
  // It is unique when found
  if (it == set.end())
    return true;
  return false;
}

int main() {
  std::ifstream source{"../data/data.txt"};
  if (!source.is_open()) {
    std::cout << "Error opening the file\n";
    return 1;
  }

  std::set<std::string, MyComapreFunctions::MyStringLengthCompare> uniqueLines;
  fill_set(uniqueLines, source);
  output_set(uniqueLines);
}
