#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>
#include <vector>

template <typename T>
std::vector<std::vector<T> >  CP::stack<T>::split_stack(int k) const {
  std::vector<std::vector<T> > v(k);
  int x = 0;
  for (int i = mSize-1 ; i >= 0 ; i--){
    v[x].insert(v[x].begin(),mData[i]);
    if (++x == k) x = 0;
  } return v;
}

#endif

