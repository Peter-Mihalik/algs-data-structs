#include <fstream>
#include <iostream>
#include <stack>
#include <string>

void flush(std::stack<std::string> &stack, int &count) {
  while (!stack.empty()) {
    std::cout << stack.top() << std::endl;
    stack.pop();
  }
  count = 0;
}

int main() {
  std::ifstream source{"../data/data.txt"};
  if (!source.is_open()) {
    std::cerr << "Error opening source file\n";
  }
  std::string line{};
  std::stack<std::string> stack;
  int count{0};
  while (std::getline(source, line)) {
    if (count == 50) {
      flush(stack, count);
    }
    stack.push(line);
    count++;
  }
  flush(stack, count);
  return 0;
}
