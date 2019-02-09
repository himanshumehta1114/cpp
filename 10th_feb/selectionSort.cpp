#include<iostream>
using namespace std;

void swap(int arr[], int first, int second);

int main(int argc, char** argv) {
    int arr[] = {11, 55, 44, 33, 22};
    int n = sizeof(arr) / sizeof(int);

    for (int i=0;i<n-1;i++) {
        for (int j=i;j<=n;j++) {
            if (arr[i]>arr[j]) {
                swap(arr, i, j);
            }
        }
    }

    for (int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }

    return 0;
}

void swap(int arr[], int first, int second) {
    int temp = 0;
    temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}