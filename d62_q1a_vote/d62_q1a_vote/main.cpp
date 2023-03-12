#include <iostream>
#include <map>
#include <set>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int N, K;
    std::string x;
    std::map<int, std::set<std::string>> m;
    std::map<std::string, int> m1;
    int sum = 0 , n=0 , k=0;

    std::cin >> N >> K;
    for (int i = 0; i < N; i++) {
        std::cin >> x;
        if (m1.find(x) != m1.end()) {
            m[m1[x] - 1].insert(x);
            m[m1[x]].erase(x);
            m1[x] -= 1;
        }
        else {
            m[-1].insert(x);
            m1[x] = -1;
        }
    }
    
    for (auto it1 = m.begin(); it1 != m.end(); it1++) {
        sum += it1->second.size();
        if (sum == K) {
            std::cout << -(it1->first);
            k += 1;
            break;
        }
        else if (sum > K) {
            std::cout << -(it1->first);
            k += 1;
            break;
        }
        
    }

    if (k != 1) {
        std::cout << 1;
    }

}
