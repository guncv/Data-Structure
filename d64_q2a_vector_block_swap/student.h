#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  int int_a = a-begin(), int_b = b-begin();
  int t1 = int_a+m, t2 = int_b+m;
  if (m <= 0) return false;
  if (int_a < 0 || int_b < 0) return false;
  if (t1 > mSize || t2 > mSize) return false;
  if (int_b > int_a && t1 > int_b) return false;
  if (int_a > int_b && t2 > int_a) return false;
  if (int_b == int_a) return false;
  for (size_t i = 0 ; i < m ; i++){
    std::swap(mData[int_a++],mData[int_b++]);
  } return true;
}

#endif
