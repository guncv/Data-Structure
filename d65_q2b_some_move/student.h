#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  std::vector<T> v1,v2;
  int idx = upper_bound(aux.begin(),aux.end(),index) - aux.begin();
  if (idx > 0) index -= aux[idx-1];
  if (idx == mData.size()){
    mData.push_back(value); aux.push_back(aux[aux.size()-1]+value.size());
  } else {
    if (index == 0){
      mData.insert(mData.begin()+idx,value);
      if (idx == 0) aux.insert(aux.begin(),value.size());
      else aux.insert(aux.begin()+idx,aux[idx-1]+value.size());
      for (int i = idx+1 ; i < aux.size() ; i++){
        aux[i] += value.size();
      }
    } else {
      for (int i = 0 ; i < index ; i++){
        v1.push_back(mData[idx][i]);
      } for (int j = index ; j < mData[idx].size(); j++){
        v2.push_back(mData[idx][j]);
      } mData[idx] = v2;
      mData.insert(mData.begin()+idx,value); 
      mData[idx].insert(mData.begin()+idx,v1);
      if (idx == 0){
        aux[idx] = v2.size()+value.size();
        aux.insert(aux.begin(),value.size()+v1.size());
        aux.insert(aux.begin(),v1.size());
      } else {
        aux[idx] = v2.size()+aux[idx-1]+value.size()+v1.size();
        aux.insert(aux.begin()+idx,value.size()+v1.size()+aux[idx-1]);
        aux.insert(aux.begin()+idx,v1.size()+aux[idx-1]);
      } for (int i = idx+3 ; i < aux.size() ; i++) aux[i] += value.size();
    } 
  } mSize += value.size(); mCap += value.size();   
}

#endif