#include "ReadSortFile.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace MyFileManipulator {

ReadSortFile::ReadSortFile(const std::string &srcFile) : m_src(srcFile) {
  if (!m_src.is_open()) {
    throw std::runtime_error("Error opening the source file\n");
  }
}

void ReadSortFile::read_file() {
  std::cout << "Reading lines \n";
  std::string line{};
  while (std::getline(m_src, line)) {
    m_lines.push_back(line);
  }
}

void ReadSortFile::output() {
  if (m_lines.size() == 0) {
    std::cout << "File is empty (Try read_file first)\n";
    return;
  }
  for (auto line : m_lines) {
    std::cout << line << std::endl;
  }
}

} // namespace MyFileManipulator
