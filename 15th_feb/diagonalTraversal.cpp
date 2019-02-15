#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int arr[4][4] = {
        {11, 12, 13, 14},
        {15, 16, 17, 18},
        {19, 20, 21, 22},
        {23, 24, 25, 26}
    };

    int rmax = sizeof(arr)/sizeof(arr[0]);
    int cmax = sizeof(arr[0])/sizeof(int);
    int r = 0;
    while(r < rmax) {
        for (int i=0;i<rmax && r<rmax;i++) {
            
            cout<<arr[i][i+r]<<"\t";
        }
        r++;
    }
    cout<<endl;


    return 0;
}