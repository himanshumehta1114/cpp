#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int arr[] = {2, 3, 0, 1, 4};
    bool flag = true;

    int n = sizeof(arr)/sizeof(int);

    while(n--) {
        int val = arr[n];
        if (n != arr[val]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout<<"Mirror inverse"<<endl;
    }
    else {
        cout<<"Not"<<endl;
    }
    
    return 0;
}