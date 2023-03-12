#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  int x = first-begin(); int y = last-begin(); 
  T* arr = new T[k];
  for (size_t i = 0 ; i < k ; i++){
    arr[i] = mData[x++];
  } int i = first-begin();
  for (size_t j = 0 ; j < y-x ; j++){
    mData[i] = mData[x+j];
    i++;
  } if (k != 0){
    for (size_t m = 0 ; m < k ; m++){
      mData[y-k+m] = arr[m];
    } delete [] arr;
  }
}

#endif
