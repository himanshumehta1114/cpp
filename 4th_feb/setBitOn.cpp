#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int num;
    int k;

    cin>>num>>k;

    int bitMask = 1<<k;
    if ((num & bitMask) == 0) {
        cout<<"Bit is Off"<<endl<<"Let's turn this on ...."<<endl<<"Now the value is : ";
        int res = num | bitMask;
        cout<<res<<endl;
    } else {
        cout<<"Bit is on"<<endl;
    }

    return 0;
}