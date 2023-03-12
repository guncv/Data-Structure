#include <iostream>
#include <list>
#include <vector>

void bomb(std::list<int> &l , std::list<int>::iterator it , int number , bool b){
    int count_left = 0,count_right = 0;
    if (b) count_right = 1;
    bool left = true,right = true;
    auto it_right = it,it_left = it;
    std::vector<std::list<int>::iterator> v;
    it_left--;

    while(left || right){
        if (it_left == l.end()) left = false;
        if (it_right == l.end()) right = false;
        if (left && *it_left == number) {
            count_left++;
            v.push_back(it_left);
            it_left--;
        }
        else {left = false;}
        if (right && *it_right == number) {
            count_right++;
            v.push_back(it_right);
            it_right++;
        }
        else {right = false;}
    }

    if (count_right + count_left >= 3){
        if ((!b && count_left != 0 && count_right != 0) || b){
            for (auto x : v) {
                l.erase(x);
            } bomb(l,it_right,*it_right,false);
        }
    } else {
        if (b) l.insert(it,number);
    }
}

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
    std::list<int> l;
    int N,K,V,tmp;
    std::cin >> N >> K >> V;
    while(N--) {
        std::cin >> tmp;
        l.push_back(tmp);
    } auto it = l.begin();
    for (int i = 0 ; i < K ; i++) it++;
    bomb(l,it,V,true);
    for (auto it = l.begin() ; it != l.end() ; it++) std::cout << *it << " "; 
    std::cout << "\n";
}