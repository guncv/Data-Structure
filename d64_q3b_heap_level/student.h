#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  size_t idx = 0;
  for (int i = 0 ; i < k ; i++){
    if ((idx*2)+1 >= mSize) return r;
    idx = idx*2+1;
  } for (int i = idx ; i < idx*2+1 ; i++){
    if (i >= mSize) break;
    r.push_back(mData[i]);
  } sort(r.begin(),r.end(),mLess);
  reverse(r.begin(),r.end());
  return r;
}

#endif

