#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here 
  int newSize = mSize - pos.size();
  T* arr = new T[newSize];
  int x = 0,y = 0;
  for (size_t i = 0 ; i<mSize ; i++){
    if (x < pos.size()){
      if (i == pos[x]) {
        x++; 
        continue;
      }
    }
    arr[y++] = mData[i];
  } delete [] mData;
  mData = arr;
  mSize = newSize;
  mCap = newSize;
}

#endif
