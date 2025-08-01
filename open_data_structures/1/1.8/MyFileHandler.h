#include <exception>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

namespace MyFileManipulator {

class MyFileHandler {
  std::ifstream m_src;

public:
  MyFileHandler(const std::string &fileName) : m_src(fileName) {
    if (!m_src.is_open()) {
      throw std::runtime_error("Error opening a source file\n");
    }
  }
  std::ifstream &getSrc() { return m_src; }
};

} // namespace MyFileManipulator
