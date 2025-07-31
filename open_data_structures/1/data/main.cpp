#include <fstream>

int main() {
  std::ofstream file{"data.txt"};
  int count{1};
  while (count <= 250) {
    file << count << std::endl;
    count++;
  }
  return 0;
}
