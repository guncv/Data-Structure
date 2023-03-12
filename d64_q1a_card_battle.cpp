#include <iostream>
#include <map>

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m;
    int card,numberCard;
    std::map<int,int> toCard;
    int turn = 1;
    bool end = false;

    std::cin >> n >> m;
    while(n--){
        std::cin >> card;
        toCard[card] += 1;
    }

    while (m--){
        std::cin >> numberCard;
        while(numberCard--){
            std::cin >> card;
            auto it = toCard.upper_bound(card);
            if (it != toCard.end()){
                toCard[it->first] -= 1;
                if(toCard[it->first] == 0){
                    toCard.erase(it->first);
                }
                continue;
            } end = true;
        }
        if (!end){
            turn++;
        }
    }
    std::cout << turn << "\n";
}