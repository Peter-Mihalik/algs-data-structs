#include <fstream>
#include <iostream>
#include <stack>
#include <string>

int main() {
  std::fstream source{"../data/data.txt", std::ios::in};
  if (!source.is_open()) {
    std::cerr << "Error opening a file";
    return 1;
  }
  std::fstream destination{"data.out", std::ios::out};
  if (!destination.is_open()) {
    std::cerr << "Error opening a file";
    return 1;
  }
  std::stack<std::string> stack;
  std::string line{};
  while (std::getline(source, line)) {
    stack.push(line);
  }
  while (!stack.empty()) {
    destination << stack.top() << std::endl;
    stack.pop();
  }

  return 0;
}
