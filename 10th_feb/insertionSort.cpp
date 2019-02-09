#include<iostream>
using namespace std;

void swap(int arr[], int first, int second);

int main(int argc, char** argv) {
    int arr[] = {2, 4, 3, 1, 8, 7, 5, 6};
    int n = sizeof(arr) / sizeof(n);

    for(int jc=1;jc<=n-1;jc++) {
        for (int i=jc;i>0;i--) {
            if (arr[i-1] > arr[i]) {
                swap(arr, i, i-1);
            } else {
                break;
            }
        }
    }

    for (int k=0;k<n;k++) {
        cout<<arr[k]<<endl;
    }

    return 0;
}

void swap(int arr[], int first, int second) {
    int temp = 0;
    temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}