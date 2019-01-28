// find gcd using longest division method

#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int n1, n2;

    cout<<"Enter n1 and n2 : ";
    cin>>n1>>n2;

    int rem = n1;
    int number = n2;
    int result = 1;

    while(rem != 0) {
        result = number%rem;
        number = rem;
        rem = result;
    }

    cout<<"GCD : "<<number<<endl;

    return 0;
}