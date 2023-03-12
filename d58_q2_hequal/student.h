#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  if (size() != other.size()) return false;
  CP::priority_queue<T,Comp> x = *this;
  CP::priority_queue<T,Comp> y = other;
  while(!x.empty()){
    if (x.top() != y.top()) return false;
    x.pop();
    y.pop();
  } return true;
}

#endif
