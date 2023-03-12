#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while(idx > 0){
        int c = (idx-1)/4;
        if (mLess(tmp,mData[c])) break;
        mData[idx] = mData[c];
        idx = c;
    } mData[idx] = tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    size_t c;
    while ((c = 4 * idx + 1) < mSize) {
        int x = c;
        for (int i = 1 ; i < 4 ; i++){
            if (c + i >= mSize) break;
            if (mLess(mData[x],mData[c+i])) x = c+i;
        } c = x; 
        if (mLess(mData[c],tmp)) break;
        mData[idx] = mData[c];
        idx = c;    
    } mData[idx] = tmp;
}

#endif

