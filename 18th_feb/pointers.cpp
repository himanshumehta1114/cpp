#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int i = 10;
    int *p = &i;
    int **q = &p;

    cout<<"&i : "<<&i<<endl;
    cout<<"p : "<<p<<endl;
    cout<<"*p : "<<*p<<endl;

    return 0;
}