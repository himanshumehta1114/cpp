#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int dec = 0;
    int bin = 0;

    cin>>dec;

    int rem = 0;
    int power = 1;
    while(dec!=0) {
        rem = dec%2;
        dec = dec/2;
        
        bin = bin + rem*power;
        power = power*10;
    }
    cout<<bin<<endl;

    return 0;
}