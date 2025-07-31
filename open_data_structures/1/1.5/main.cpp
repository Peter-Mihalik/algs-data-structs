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
  std::unordered_set<std::string> first_accurences;
  std::string line{};
  int lineNumber{0};
  int outputtedLines{0};
  while (std::getline(source, line)) {
    // Omit first accurances
    auto it_find_first_accurance{first_accurences.find(line)};
    if (it_find_first_accurance != first_accurences.end())
      std::cout << line << std::endl;
    first_accurences.insert(line);
  }
  return 0;
}
