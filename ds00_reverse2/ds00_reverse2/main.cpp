#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v, vector<int>::iterator a, vector<int>::iterator b) {
    //write your code only in this function
    vector<int>::iterator it = v.begin();
    int y = ((b - a) + 1) / 2;
    int n = 1;
    if (y % 2 == 0) {
        y++;
    }

    for (int i = 0 ; i < y ; i++) {
        v[(a - it) + i] = v[(b - it) - n];
        v[(b - it) - n] = x;
        n++;
    }
}

int main() {
    //read input
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    //call function
    reverse(v, v.begin() + a, v.begin() + b + 1);
    //display content of the vector
    for (auto& x : v) {
        cout << x << " ";
    }
    cout << endl;
}
