#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T> > data) {
  //write your code
  T* arr = new T[mSize+data.size()];
  sort(data.begin(),data.end());
  int data_index = 0; int x = 0;
  for (size_t i = 0 ; i<mSize+data.size() ; i++){
    if (x == data[data_index].first) {
      arr[i] = data[data_index].second;
      data_index++;
      continue;
    } arr[i] = mData[x];
    x++;
   } delete [] mData;
   mData = arr;
   mSize = mSize+data.size();
   mCap = mSize+data.size();
}

#endif
