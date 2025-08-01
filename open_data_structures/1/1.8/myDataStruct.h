#include <iostream>
#include <queue>
#include <string>

namespace myDataStructs {

/* Used for outputing queues
 * To perserve queue state:
 *  I use temporary queue that i push dequeued elements into
 *  At the end of the function I swap temporary queue with the original
 * */
template <typename T> void outQueue(std::queue<T> &q) {
  if (q.size() == 0) {
    std::cout << "Empty dequeu (Fill it up first)\n";
    return;
  }
  std::queue<T> tempQ;
  int count{0};
  while (!q.empty()) {
    T &frontElem{q.front()};
    std::cout << count << ": " << q.front() << std::endl;
    tempQ.push(frontElem);
    q.pop();
    count++;
  }
  q.swap(tempQ);
}

} // namespace myDataStructs
