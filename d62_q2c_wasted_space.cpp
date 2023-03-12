#include <iostream>
#include <cmath>

int main(){
    int temp; int x = 0;
    std::cin >> temp;
    while(true){
        int p = pow(2,x);
        if (p >= temp){
            std::cout << p-temp << "\n";
            break;
        } x++;
    }
}