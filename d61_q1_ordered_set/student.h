#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    for(auto it = A.begin() ; it != A.end() ; it++){
        v.push_back(*it);
    } vector<T> v1(v);
    sort(v1.begin(),v1.end());
    for (auto it1 = B.begin() ; it1 != B.end() ; it1++){
        auto it = lower_bound(v1.begin(),v1.end(),*it1);
        if (it == v1.end() || *it != *it1){
            v.push_back(*it1);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    vector<T> v1(B);
    sort(v1.begin(),v1.end());
    for (size_t i = 0 ; i < A.size() ; i++){
        auto it = lower_bound(v1.begin(),v1.end(),A[i]);
        if (it != B.end() && *it == A[i]){
            v.push_back(A[i]);
        }
    }
    return v;
}
