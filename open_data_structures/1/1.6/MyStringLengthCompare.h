#include <cstddef>
#include <string>
#ifndef MY_STR_LEN_COMP_H
#define MY_STR_LEN_COMP_H

namespace MyComapreFunctions {

class MyStringLengthCompare {
public:
  bool operator()(const std::string &lhs, const std::string &rhs) const;
};

} // namespace MyComapreFunctions
#endif
