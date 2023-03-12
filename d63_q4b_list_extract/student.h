#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  for (auto it = a ; it != b ; it++){
    if (*it == value){
      auto x = --it;
      it++;
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;

      it.ptr->prev = output.mHeader;
      it.ptr->next = output.mHeader->next;

      output.mHeader->next = it.ptr;
      it.ptr->next->prev = it.ptr;
      
      mSize--;
      output.mSize++;
      it = x;
    }
  }
}

#endif
