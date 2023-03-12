#include <iostream>
#include "student.h"
using namespace std;

void test1(vector<int> v1 , vector<int> v2) {
    vector<int> v = Union(v1, v2);
    for (auto& x:v) {
        cout<<x<<" ";
    }
    cout<<endl;
}

void test2(vector<int> v1,vector<int> v2) {
    vector<int> v = Intersect(v1, v2);
    for (auto& x:v) {
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{   
    vector<int> v1,v2;
    int n; cin >> n;
    int x,y;
    cin >> x >> y;
    while(x--){
        cin >> n;
        v1.push_back(n);
    } while(y--){
        cin >> n;
        v2.push_back(n);
    }
    test1(v1,v2);
    test2(v1,v2);
    return 0;
}
