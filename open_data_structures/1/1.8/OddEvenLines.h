#include <fstream>
#include <queue>
#include <string>

#include "MyFileHandler.h"

namespace MyFileManipulator {

class OddEvenLines {
  MyFileManipulator::MyFileHandler m_fStream;
  std::queue<std::string> m_even;
  std::queue<std::string> m_odd;
  void readLines();
  void outputEven();
  void outputOdd();

public:
  OddEvenLines(const std::string &fileName);
};

} // namespace MyFileManipulator
