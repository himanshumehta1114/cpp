#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int arr[2][3] = {
        {1, 1, 1},
        {1, 1, 1}
    };

    int arr2[3][4] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}
    };

    int r1 = sizeof(arr) / sizeof(arr[0]);
    int c1 = sizeof(arr[0]) / sizeof(int);

    int r2 = sizeof(arr2) / sizeof(arr2[0]);
    int c2 = sizeof(arr2[0]) / sizeof(int);

    int res[r1][c2];
    int sum = 0;
    
    for (int i=0;i<r1;i++) {
        for (int j=0;j<c2;j++) {
            sum = 0;
            for (int k=0;k<c1;k++) {
                sum += arr[i][k] * arr2[k][j];
            }
            res[i][j] = sum;
        }
    }

    for (int i=0;i<r1;i++) {
        for (int j=0;j<c2;j++) {
            cout<<res[i][j]<<'\t';
        }
        cout<<endl;
    }

    return 0;
}