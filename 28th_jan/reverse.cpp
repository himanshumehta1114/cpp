// Reverse a number to given rotations

#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int number, r;
    cout<<"Enter number and rotations :  ";
    cin>>number>>r;
    // Find length
    int num = number;
    int len = 0;
    while (num%10 != 0) {
        num = num/10;
        len++;
    }

    // Find rotations
    r = r%len;
    if (r < 0) r = r + len;
    
    int times = 1;
    while (r--) {
        times = 10 * times;
    }

    // Print value
    cout<<number%times<<number/times;
    return 0;
}