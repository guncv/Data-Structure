#include <iostream>
#include <vector>

int main(){
    int n,m,ind = 0;
    std::vector<int> v;
    std::cin >> n >> m;
    v.push_back(m);
    while(v[ind]*2+1 < n){
        v.push_back(v[ind]*2+1);
        if (v[v.size()-1]+1 >= n) break; 
        v.push_back(v[ind]*2+2);
        ind++;
    } std::cout << v.size() << "\n";
    for (int i = 0 ; i < v.size() ; i++){
        std::cout << v[i] << " ";
    } std::cout << "\n";
}
