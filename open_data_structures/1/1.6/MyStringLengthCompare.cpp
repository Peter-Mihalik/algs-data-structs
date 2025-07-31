#include "MyStringLengthCompare.h"

namespace MyComapreFunctions {

bool MyStringLengthCompare::operator()(const std::string &lhs,
                                       const std::string &rhs) const {
  const std::size_t lhsLen = lhs.length();
  const std::size_t rhsLen = rhs.length();
  if (lhsLen == rhsLen) {
    // Same length have default ordering
    return (lhs < rhs);
  }

  return (lhsLen < rhsLen);
}

} // namespace MyComapreFunctions
