#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T*arr = new T[mSize+s.size()]; int x = 0;
        for (int i = 0 ; i < s.size() ; i++){
            arr[x++] = s.mData[i];
        } for (int j = 0 ; j < mSize ; j++){
            arr[x++] = mData[j];
        } delete [] mData;
        mData = arr; mSize+=s.size(); 
        mCap = mSize;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        T* arr = new T[q.size()+mSize]; int x = 0;
        for (int i = q.mSize-1 ; i >=0 ; i--){
            arr[x++] = q.mData[(q.mFront+i)%q.mCap];
        } for (int j = 0 ; j <mSize ; j++){
            arr[x++] = mData[j];
        } delete [] mData;
        mData = arr; mSize+=q.size() ; mCap = mSize;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        for (int i = s.size()-1 ; i >= 0 ; i--){
            push(s.mData[i]);
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        for (int i = 0 ; i < q.size() ; i++){
            push(q.mData[(q.mFront+i)%q.mCap]);
        }
    }
}
