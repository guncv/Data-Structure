#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
  auto it = begin(), it1 = ++begin();
  for (size_t i = 1 ; i < mSize ; i++){
    std::swap(*it,*it1);
    it++; it1++;
  }
}

#endif
