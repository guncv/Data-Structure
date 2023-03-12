#include <iostream>
#include <vector>

using namespace std;

int relation(long long S, long long a, long long b) {
    if (a == (b-1)/S || b == (a-1)/S) return 1;
    long long a_tmp = a , b_tmp = b;
    while(a_tmp > 0){
        a_tmp = (a_tmp-1)/S;
        if (a_tmp == b) return 2;
    } while(b_tmp > 0){
        b_tmp = (b_tmp-1)/S;
        if (b_tmp == a) return 2;
    } long long ha = 0,hb = 0;
    while(a > 0){
        a = (a-1)/S;
        ha++;
    } while(b > 0){
        b = (b-1)/S;
        hb++;
    } if (ha != hb) return 3;
    return 4;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    long long S,a,b;
    cin >> n;
    while (n--) {
    cin >> S >> a >> b;
    cout << relation(S,a,b) << " ";
    }
    cout << endl;
}