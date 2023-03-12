#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  int K = mSize-k;
  if (m > s2.size()) m = s2.size();
  if (K < 0) K = 0; 
  int turn = 0; int y = 0; int t = s2.size()-m;
  mSize+=m;
  T*arr = new T[mSize];
  for (size_t i = 0 ; i<mSize ; i++){
    if (i == K && turn<m){
      arr[i] = s2.mData[t++];
      K++; turn++;
      continue;
    } arr[i] = mData[y++];
  } 
  for (int j = 0 ; j < m ; j++){
    s2.pop();
  } delete [] mData;
  mData = arr;
  mCap = mSize;
} 
#endif
