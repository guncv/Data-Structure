#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  // Return something
  for (size_t i = 0 ; i < mSize ; i++){
    if (i*2+1 < mSize && mLess(mData[i],mData[i*2+1])) return false;
    if (i*2+2 < mSize && mLess(mData[i],mData[i*2+2])) return false;
  } return true;
}

#endif