#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int arr[4][4] = {
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 0, 0},
        {1, 0, 1, 0}
    };

    int row_max = sizeof(arr)/sizeof(arr[0]);
    int col_max = sizeof(arr[0])/sizeof(int);
    int d = 0;
    int i=0;
    int j=0;

    while(true) {
        d = (d+arr[i][j])%4;
        if (d == 0) {
            if (j< col_max-1) {
                j++;
            } else {
                break;
            }
        } else if (d == 1) {
            if (i < row_max-1) {
                i++;
            } else {
                break;
            }
        } else if (d == 2) {
            if (j > 0) {
                j--;
            } else {
                break;
            }
        } else if (d == 3) {
            if (i > 0) {
                i--;
            } else {
                break;
            }
        }
    }

    cout<<"i, j : "<<i<<" , "<<j<<endl;

    return 0;
}