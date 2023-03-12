#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  for (size_t i = 0 ; i < other.mSize ; i++){
    if (i == mSize) return true;
    if (other.mData[i] > mData[i]) return true;
    if (mData[i] > other.mData[i]) return false;
  } return false;
}

#endif
