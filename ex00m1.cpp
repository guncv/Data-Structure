#include <iostream>
#include <map>
#include <queue>

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
    int n, out;
    int temp;
    std::priority_queue<int> q;
    std::map<int,std::queue<int> > m; 
    std::cin >> n >> out;
    int x = n;
    while(n--){
        std::cin >> temp;
        q.push(-temp);
        m[-temp].push(1);
    } 
    
    for(int i = 1 ; i <= out ; i++){
        if (i <= x) {
            std::cout << "0\n";
            continue;
        }
        std::cout << -q.top() << "\n";
        auto it = m.find(q.top());
        int sum = it->first/it->second.front() * (it->second.front()+1);
        m[sum].push(it->second.front()+1);
        it->second.pop();
        q.push(sum);
        q.pop();
    }
}