#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  auto it = lower_bound(aux.begin(),aux.end(),idx);
  if (it == aux.begin()) return mData[0][idx];
  return mData[it-aux.begin()][idx-*(--it)];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
  aux.push_back(mCap-1);  
}

#endif
