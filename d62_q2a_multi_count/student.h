#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>
#include <vector>

template <typename T>
std::vector<std::pair<T,size_t> > CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T,size_t> m;
    std::vector<std::pair<T,size_t> > v;
    for (size_t i = 0 ; i < mSize ; i++){
        T x = mData[(mFront+i)%mCap];
        if (m.find(x) != m.end()){
            m[x]++; 
            continue;
        } m[x] = 1;
    }
    for (auto it = k.begin() ; it != k.end() ; it++){
        if (m.find(*it) == m.end()) v.push_back(std::make_pair(*it,0));
        else{
            v.push_back(std::make_pair(*it,m[*it]));
        }
    } return v;
}

#endif
