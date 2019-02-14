#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int arr[4][5] = {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45}
    };

    int r1 = sizeof(arr)/sizeof(arr[0]);
    int c1 = sizeof(arr[0])/sizeof(int);

    int count = 0;
    int tne = r1 * c1;

    int row_min = 0;
    int row_max = 3;
    int col_min = 0;
    int col_max = 4;

    while (count<tne) {
        for (int d=0;d<row_max;d++) {
            cout<<arr[d][col_min]<<" ";
            count++;
        }

        for (int r=0;r<col_max;r++) {
            cout<<arr[row_max][r]<<" ";
            count++;
        }

        for (int u=row_max-1;u>row_min;u--) {
            cout<<arr[u][col_max]<<" ";
            count++;
        }

        for (int l=col_max-1;l>col_min;l++) {
            cout<<arr[row_max][l]<<" ";
            count++;
        }
        col_min++;
        col_max--;
        row_max--;
        row_min++;
    }

    return 0;
}