#include <iostream>

#include "OddEvenLines.h"
#include "myDataStruct.h"

namespace MyFileManipulator {

// Read file and output lines according to assigment (even first odd second)
// I feel like that this implementation makes a good use of Encapusalion
OddEvenLines::OddEvenLines(const std::string &fileName) : m_fStream(fileName) {
  readLines();
  outputEven();
  outputOdd();
}

// Even lines are pushed at the front and odd at the back of the dequeu
// Divider is pushed first (To divide evens from odds)
void OddEvenLines::readLines() {
  std::string line{};
  std::cout << "***Reaing file***\n";
  int count{0};
  // Push Divider
  while (std::getline(m_fStream.getSrc(), line)) {
    // Even
    if ((count % 2) == 0) {
      std::cout << line << std::endl;
      m_even.push(line);
    } else {
      std::cout << line << std::endl;
      m_odd.push(line);
    }
    count++;
  }
}

void OddEvenLines::outputEven() {
  std::cout << "***Outputing even lines***\n";
  myDataStructs::outQueue(m_even);
}

void OddEvenLines::outputOdd() {
  std::cout << "***Outputing odd lines***\n";
  myDataStructs::outQueue(m_odd);
}

} // namespace MyFileManipulator
