//
//  main.cpp
//  Ex00e02_Max_Min
//
//  Created by ชนกันต์ วิริยสถาพรพงศ์ on 10/8/2565 BE.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int rows,columns;
    int R;
    int r1,c1,r2,c2;
    
    cin >> rows >> columns;
    cin >> R;
    int matrix[rows][columns];
    
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<columns ; j++){
            cin >> matrix[i][j];
        }
    }

    for(int j=0 ; j<R ; j++){
        cin >> r1 >> c1 >> r2 >> c2;
        r1 -= 1;
        c1 -= 1;
        r2 -= 1;
        c2 -= 1;
        int max_number = 0;
        if (r1>r2 || c1>c2) {
            cout << "INVALID" << endl;
        } else if (r1>rows-1 || c1>columns-1) {
            cout << "OUTSIDE" << endl;
        } else {
            for (int i=r1 ; i <= r2 ; i++){
                for(int j=c1 ; j <= c2 ; j++){
                    if (i == r1 && j == c1){
                        max_number = matrix[r1][c1];
                    } else if (i>rows-1 || j>columns-1) {
                        break;
                    } else if (matrix[i][j] > max_number){
                        max_number = matrix[i][j];
                    }
                }
            }
            cout << max_number << endl;
        }
    }
}

