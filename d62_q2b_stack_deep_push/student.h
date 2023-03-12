#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  T* arr = new T[mSize+1];
  size_t x = mSize-pos; int y = 0;
  for (size_t i = 0 ; i < mSize+1 ; i++){
    if (i == x){
      arr[i] = value;
      continue;
    } arr[i] = mData[y++];
  } delete [] mData;
  mData = arr;
  mSize++; 
  mCap=mSize;
}

#endif
