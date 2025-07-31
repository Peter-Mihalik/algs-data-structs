#include <deque>
#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream source{"../data/data.txt"};
  if (!source.is_open()) {
    std::cerr << "Error opening the file\n";
    return 1;
  }
  std::string line{};
  int count{0};
  int lineNumber{0};
  std::deque<std::string> dq;
  while (std::getline(source, line)) {
    dq.push_back(line);
    count++;
    lineNumber++;
    std::cout << "***Pushing to deque. Count: ***" << lineNumber << std::endl;
    // Deque is filled - reached limit from the assigment (43)
    if (count == 43) {
      if (line.size() == 0) {
        std::cout << "***Line is empty***\n";
        std::cout << "***Outputing 42nd line prior***\n";
        std::cout << dq.front() << std::endl;
      }
      // To mantain max limit of stored elements
      dq.pop_front();
      count--;
    }
  }
  return 0;
}
