#include <iostream>
#include <map>
#include <set>

int main(int argc, const char * argv[]) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int N,M;
    long father,son;
    long son1,son2;
    std::map<long,long> m;
    std::set<long> s;
    
    for (int i=0 ; i<N ; i++){
        std::cin >> father >> son;
        m[son] = father;
        s.insert(son);
    }
    
    for (int i=0 ; i<M ; i++){
        std::cin >> son1,son2;
        if (s.find(son1) != s.end() && s.find(son2) != s.end()){
            if(m[m[son1]] == m[m[son2]]){
                std::cout << "Yes" << "\n";
            } else {
                std::cout << "No" << "\n";
            }
        } else {
            std::cout << "No" << "\n";
        }
    }
}
