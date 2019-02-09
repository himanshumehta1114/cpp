#include<iostream>
using namespace std;

// Kadan's algorithm
// find subset having max sum and print that subset start and end point

int main(int argc, char** argv) {
    int arr[] = {2, 3, 7, -9, 6, 7, -20, 1, 2, 3, 11};
    int n = sizeof(arr) / sizeof(int);

    int g_sum = 0, g_start=0, g_end, l_sum=0, l_start=0, l_end=0;

    g_sum = l_sum;
    for (int i=0;i<n;i++){ 
        l_sum += arr[i];
        l_end++;
        if (l_sum < 0) {
            l_sum = 0;
            l_start = i+1;
            l_end = i;
        }
        else if (g_sum < l_sum) {
            g_sum = l_sum;
            g_start = l_start;
            g_end = l_end;
        }
    }

    cout<<"g_Sum : "<<g_sum<<endl;
    for (int i=g_start;i<=g_end;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}