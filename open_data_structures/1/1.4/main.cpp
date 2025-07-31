#include <fstream>
#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  std::ifstream source{"../data/data.txt"};
  if (!source.is_open()) {
    std::cout << "Error opening source file\n";
    return 1;
  }
  std::unordered_set<std::string> uSet;
  std::string line{};
  int lineNumber{0};
  int outputtedLines{0};
  while (std::getline(source, line)) {
    lineNumber++;
    // Find out whether the line is unique
    auto it{uSet.find(line)};
    if (it == uSet.end()) {
      uSet.insert(line);
      std::cout << line << std::endl;
      outputtedLines++;
    }
  }
  std::cout << "--------------\n";
  std::cout << "Number of read lines: " << lineNumber << std::endl;
  std::cout << "Number of outputed lines: " << outputtedLines << std::endl;
  return 0;
}
