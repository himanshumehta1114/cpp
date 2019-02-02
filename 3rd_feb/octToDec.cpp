#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int oct;
    cin>>oct;

    int dec = 0;
    int rem = 0;
    int count = 0;
    int power = 1;
    while(oct!=0) {
        rem = oct%10;
        oct = oct/10;
        dec = dec + rem*power;
        power = power*8;
    }
    cout<<dec<<endl;
    return 0;
}