#include <iostream>
#include <set>
#include <map>

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int N,K;
    std::string person;
    std::map<int,std::set<std::string>> scoreReverse;
    std::map<std::string,int> score;

    std::cin >> N >> K;
    while (N--){
        std::cin >> person;
        if(score.find(person) != score.end()){
            score[person] += 1;
            scoreReverse[score[person]].insert(person);
            scoreReverse[score[person]-1].erase(person);
            if (scoreReverse[score[person]-1].empty()){
                auto x = scoreReverse.find(score[person]-1);
                scoreReverse.erase(x);
            }
        } else {
            scoreReverse[1].insert(person);
            score[person] = 1;
        }
    }

    int sum = 0;
    bool b = true;
    for(auto it = scoreReverse.end() ; it != scoreReverse.begin() ; it--){
        if(it == scoreReverse.end()){
            continue;
        }
        sum += it->second.size();
        if (sum >= K){
            std::cout << it->first << "\n";
            b = false;
            break;
        }
    }

    if(b){
        std::cout << scoreReverse.begin()->first << "\n";
    }
}