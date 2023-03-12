#include <iostream>
#include <vector>
#include <map>

using namespace std;
void insert_into_sv(map<int,int> &v, int pos, int value) {
 //your code here
    vector<pair<int,int> > v1;
    auto it_lower = v.lower_bound(pos);
    if (it_lower == v.end()){
        v[pos] = value;
        return;
    }
    for (auto it = it_lower ; it != v.end() ; it++){
        v1.push_back(*it);
    } v.erase(it_lower,v.end());
    int m = v1.size();
    for (auto it = v1.begin() ; it != v1.end() ; it++){
        v.insert(v.end(),make_pair(it->first+1,it->second));
    } v[pos] = value;
}

int main() {
 ios_base::sync_with_stdio(false);cin.tie(0);
 int n;
 map<int,int> v;
 cin >> n;
 for (int i = 0;i < n;i++) {
 int a,b;
 cin >> a >> b;
 insert_into_sv(v,a,b);
 }
 cout << v.size() << "\n";
 for (auto &x : v) {
 cout << x.first << ": " << x.second << "\n";
 }
}