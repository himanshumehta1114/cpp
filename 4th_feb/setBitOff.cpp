#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int num;
    int k;

    cin>>num>>k;
    int bitMask = 1<<k;
    if ((num & bitMask) == 0) {
        cout<<"Bit is off"<<endl;
    } else {
        cout<<"Bit is on \nLet's turn this off \nNow value is : ";
        int res = bitMask^num;
        cout<<res<<endl;
    }


    return 0;
}