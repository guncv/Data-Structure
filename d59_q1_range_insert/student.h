#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int y = 0;
  auto it = first;
  int x = last - first; int newSize = mSize+x;
  T* arr = new T[mSize+x];
  for (size_t i = 0 ; i < newSize ; i++){
    if (y == position-begin() && it != last){
      arr[i] = *it;
      it++;
      continue;
    } arr[i] = mData[y];
    y++;
  } delete [] mData;
  mData = arr;
  mSize = newSize;
  mCap = newSize;
}

#endif
