#ifndef READ_SORT_FILE_H
#define READ_SORT_FILE_H

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace MyFileManipulator {

class ReadSortFile {
  std::ifstream m_src;
  std::vector<std::string> m_lines{};

public:
  ReadSortFile(const std::string &srcFile);

  void read_file();

  template <typename Compare> void sort(Compare comp) {
    std::sort(m_lines.begin(), m_lines.end(), comp);
  }

  void output();
};

} // namespace MyFileManipulator

#endif
