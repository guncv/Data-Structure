#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  stack<int> temp;
  int temp1,temp2;
  for (auto x : v){
    if(x.first == 1){
      temp.push(x.second);
      continue;
    } temp2 = temp.top();
    temp.pop();
    temp1 = temp.top();
    temp.pop();
    if (x.second == 0){
        temp.push(temp1+temp2);
    } if(x.second == 1){
        temp.push(temp1-temp2);
    } if (x.second == 2){
        temp.push(temp1*temp2);
    } if (x.second == 3){
        temp.push(temp1/temp2);
    }
  } return temp.top();
}

#endif
