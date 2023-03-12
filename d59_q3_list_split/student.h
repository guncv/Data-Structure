#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if (it == end()) return result;
  result.mHeader->prev = mHeader->prev;
  result.mHeader->next = it.ptr;
  mHeader->prev->next = result.mHeader;
  mHeader->prev = it.ptr->prev;
  it.ptr->prev->next = mHeader;
  it.ptr->prev = result.mHeader;
  result.mSize += mSize - pos;
  mSize = pos;
  return result;
}

#endif
