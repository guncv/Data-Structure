#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <math.h>

template <typename T>
std::vector<std::vector<T> > CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T> > v;
  int m = mSize/k; int x = mSize; int y = k; int ind = mSize-1;
  if (mSize%k != 0) m+=1; 
  for (size_t i = 0 ; i < k ; i++){
    std::vector<T> v_in;
    if (x%y == 0) m = x/y;
    for (size_t j = 0 ; j < m; j++){
      v_in.push_back(mData[ind--]);
      x--;
    } v.push_back(v_in);
    y--;
  } return v;
}
#endif
