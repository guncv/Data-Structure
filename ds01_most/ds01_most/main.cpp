#include <iostream>
#include <map>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string x;
    std::map<std::string,int> m;
    std::map<std::string,int>::iterator it;
    int n;
    int max = 0;
    std::cin >> n;
    
    for (size_t i=0 ; i<n ; i++){
        scanf("%d",&x);
        if ((it = m.find(x)) != m.end()){
            m[x]++;
        } else {
            m[x] = 1;
        }
        
        if (m[x] > max) max=m[x];
    }
    
    for (auto it=m.end() ; it!=m.begin() ; it--){
        if(it->second == max){
            std::cout << it->first << " " << it->second << std::endl;
        }
    }
}
