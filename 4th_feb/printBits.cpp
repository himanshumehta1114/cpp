#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int num;
    cin>>num;
    int k=31;
    while(k>=0) {
        int bm = 1<<k;
        if ((num & bm) == 0) {
            cout<<0;
        } else {
            cout<<1;
        }
        k--;
    }

    return 0;
}