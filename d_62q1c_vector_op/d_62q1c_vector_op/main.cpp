#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::ios::sync_with_stdio(false);
    std::vector<int> v;
    int turn,y;
    std::string x;
    
    std::cin >> turn;
    for (size_t i=0 ; i<turn ; i++){
        std::cin >> x;
        if(x == "pb"){
            std::cin >> y;
            v.push_back(y);
        } else if (x == "sa"){
            sort(v.begin(),v.end());
        } else if (x == "sd"){
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());
        } else if (x == "r"){
            reverse(v.begin(),v.end());
        } else if (x == "d"){
            std::cin >> y;
            v.erase(v.begin()+y);
        }
    }
    
    for (int x1 : v){
        std::cout << x1 << " ";
    }
    std::cout << "\n";
}

