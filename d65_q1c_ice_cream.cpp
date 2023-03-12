#include <iostream>
#include <vector>

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    std::vector<std::pair<int,int> > price;
    int n,m,start;
    int tmp1,tmp2,sum,date;
    std::cin >> n >> m >> start;
    price.push_back(std::make_pair(0,start));

    while(n--){
        std::cin >> tmp1 >> tmp2;
        price.push_back(std::make_pair(tmp1,tmp2));
    }

    while(m--){
        sum = 0; date = 0;
        std::cin >> tmp1 >> tmp2;
        for (int i = 0 ; i < price.size() ; i++){
            if ((price[i+1].first - price[i].first)*price[i].second > tmp1){
                if (tmp2 >= price[i].first && tmp2 < price[i].first){
                } sum+= (price[i+1].first-price[i].first)*price[i].second;
                  date = price[i+1].first;
            }
            if (i == price.size()-1) {

            }
        }
    }
}