#ifndef STUDENTH
#define STUDENTH

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  ensureCapacity(mSize * 2);
  for (int i = 0; i < mSize; i++) {
    mData[mSize + i] = mData[mSize - i - 1];
  }
  mSize*=2;
}

#endif