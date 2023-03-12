#include <iostream>

int main(){
    int n,m,a,b;
    std::cin >> n >> m;
    while(m--){
        bool relate = false;
        std::cin >> a >> b;
        if (a == b) std::cout << "a and b are the same node\n";
        else if  (a == 0) std::cout << "a is an ancestor of b\n";
        else if (b == 0) std::cout << "b is an ancestor of a\n";
        else {
            int x = a, y =b;
            while(!relate && x > 0){
                x = (x-1)/2;
                if (x == b) {
                    std::cout << "b is an ancestor of a\n";
                    relate = true;
                }
            } while(!relate && y > 0){
                y = (y-1)/2;
                if (y == a) {
                    std::cout << "a is an ancestor of b\n";
                    relate = true;
                }
            } if (!relate) std::cout << " a and b are not related\n";
        }
    }
}