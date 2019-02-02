#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int bin;
    cin>>bin;

    int dec = 0;
    int rem = 0;
    int count = 0;
    int power = 1;
    while(bin!=0) {
        rem = bin%10;
        bin = bin/10;
        dec = dec + rem*power;
        power = power*2;
    }
    cout<<dec<<endl;
    return 0;
}