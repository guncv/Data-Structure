#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here  
  auto tmp = a;
  size_t count = 0;
  for (auto it = a ; it != b ; it++) count++;
  count /= 2; b--;
  for (size_t i = 0 ; i < count ; i++){
    std::swap(*a,*b);
    a++; b--;
  } return tmp;
}

#endif
