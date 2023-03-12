#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <map>

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::map<T,int> m;
  int newSize = 0; 
  T* arr = new T[mSize];
  for (size_t i = 0 ; i < mSize ; i++){
    if (m.find(mData[i]) == m.end()){
      m[mData[i]] = 0;
      arr[newSize++] = mData[i];
    }
  } delete [] mData;
  mData = arr;
  mSize = newSize; 
  mCap = newSize;
}

#endif
