#include <iostream>
#include <vector>
using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
  if (it-v.begin()-k < 0 && it-v.begin()+k > v.size()-1){
    v.erase(v.begin(),v.end());
  } else if (it-v.begin()-k < 0) v.erase(v.begin(),it+k+1);
  else if (it-v.begin()+k > v.size()-1) v.erase(it-k,v.end());
  else {
    v.erase(it-k,it+k+1);
  }
  return v;
}

int main() {
  int n,j,k;
  cin >> n >> j >> k;
  vector<string> v(n);
  for (int i = 0;i < n;i++) {
cin >> v[i]; }
  cout << "Result after punch" << endl;
  vector<string> result = punch(v, v.begin() + j, k);
  for (auto &x : result) {
    cout << x << endl;
  }
}