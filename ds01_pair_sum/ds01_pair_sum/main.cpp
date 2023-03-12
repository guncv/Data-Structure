#include <iostream>
#include <vector>
#include <map>

int main(int argc, const char * argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::map<int,int> n;
    std::vector<int> v;
    int N,M,x ;
    
    for(int i=0 ; i<N ; i++){
        std::cin >> x;
        if (n.find(x) != n.end()){
            n[x]+=1;
        } else {
            n[x] = 1;
            v.push_back(x);
        }
    }
    
    for(int j=0 ; j<M ; j++){
        std::cin >> x;
        for (){
            
        }
    }
}
