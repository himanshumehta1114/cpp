#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int arr[] = {2, 3, 4, 2, 6, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    int unique = 0;
    for (int i=0;i<n;i++) {
        unique = unique ^ arr[i];
    }

    cout<<unique<<endl;

    return 0;
}