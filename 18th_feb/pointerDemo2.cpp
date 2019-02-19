#include<iostream>
using namespace std;

int* fun();

int main(int argc, char** argv) {
    int *p = fun();
    cout<<"p : "<<p<<endl;
    cout<<"*p : "<<*p<<endl;

    return 0;
}

int* fun() {
    int x = 10; // bad practice because it will return its address and after its lifecycle it gets removed from memory stack, hence no value will exist at that address, therefore either take static or global variable
    return &x;
}

