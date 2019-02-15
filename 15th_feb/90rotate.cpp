#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int arr[4][4] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };

    int r = sizeof(arr)/sizeof(arr[0]);
    int c = sizeof(arr[0])/sizeof(int);

    for (int i=0;i<r;i++) {
        for (int j=i;j<c;j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int j=0;j<c/2;j++) {
        for (int i=0;i<r;i++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][c-j-1];
            arr[i][c-j-1] = temp;
        }
    }

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }

    return 0;
}