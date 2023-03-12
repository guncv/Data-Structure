#include <iostream>
#include <vector>
#include <set>

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
    int n,m;
    int year,month;
    std::set<std::pair<int,int> > year_month;

    std::cin >> n >> m;
    while(n--){
        std::cin >> year >> month;
        year_month.insert(std::make_pair(year,month));
    }

    while(m--){
        std::cin >> year >> month;
        if (year_month.find(std::make_pair(year,month)) != year_month.end()){
            std::cout << "0 " << "0 ";
            continue;
        } 
        if (year < year_month.begin()->first && month < year_month.begin()->second){
            std::cout << "-1 " << "-1 ";
            continue;
        }
        std::set<std::pair<int,int> >::iterator it = year_month.upper_bound(std::make_pair(year,month));
        it--;
        std::cout << it->first << " " << it->second << " " ;
    }
}