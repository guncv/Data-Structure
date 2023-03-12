#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <stack>

template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  for (int i = 0 ; i<K ; i++){
    if (empty()) break;
    pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  if (K >= mSize) K = mSize;
    T*arr = new T[K];
  for (size_t i = 0 ; i < K ; i++){
    arr[i] = top(); pop();
  }
  std::stack<T> s;
  for (int i = K-1 ; i >= 0 ; i--){
    s.push(arr[i]);
  } return s;
}

#endif
