#include<iostream>
using namespace std;

// inverse the index and value of array i.e make value as index and index as value;
int main(int argc, char** argv) {
    int arr[] = {4, 2, 0, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    int index;
    int arr1[5];
    for (int i=0;i<n;i++) {
        index = arr[i];
        arr1[index] = i;
    }

    for (int i=0;i<n;i++) {
        cout<<arr1[i]; // 2, 3, 4, 1, 0
    }

    return 0;
}