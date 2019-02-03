#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int num;
    cin>>num;
    int rsb = num&(-num);

    cout<<rsb;

    return 0;
}