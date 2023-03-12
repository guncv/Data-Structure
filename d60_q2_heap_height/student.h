#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if (mSize == 0 || mSize == 1) return mSize-1;
  int x = mSize-1; int cont = 0;
  while(x != 0){
    x = (x-1)/2;
    cont++;
  } return cont;
}

#endif

