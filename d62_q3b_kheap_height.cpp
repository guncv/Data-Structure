#include <iostream>

int main(){
    long long n, k;
    std::cin >> n >> k;
    long long height = 0, x = 1, j = 1;
    if (k == 1) height = n-1;
    else {
        while(true){
            if (x >= n) break;
            height++;
            j*=k;
            x += j;
        }
    } std::cout << height << "\n";
}