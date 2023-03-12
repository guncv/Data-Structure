#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  T x = NULL;
  for (int i = 0 ; i < pos.size() ; i++){
    if (pos[i] >= mSize) continue;
    if (x == NULL) {
      x = mData[pos[i]];
      continue;
    } if (comp(mData[pos[i]],x)) x = mData[pos[i]];
  } return x;
}

#endif
