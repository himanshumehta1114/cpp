#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int num;
    cin>>num;
    int rsb = 0;
    int count = 0;
    while (num!=0) {
        rsb = num&(-num);
        num = num-rsb;
        count++;
    }

    cout<<count;
    return 0;
}