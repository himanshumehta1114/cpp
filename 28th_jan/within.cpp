// Given 4 x-coordinates, check if first line is within second, partial, no overlap or second line is within first

#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int x1, x2, x3, x4;
    cout<<"Enter x1, x2, x3, x4 : ";
    cin>>x1>>x2>>x3>>x4;
    if (x1 > x2) {
        int temp;
        temp = x1;
        x1 = x2;
        x2 = temp;
    }

    if (x3 > x4) {
        int temp;
        temp = x3;
        x3 = x4;
        x4 = temp;
    }

    if (x1 <= x3 && x2 >= x4) {
        cout<<"Within first line"<<endl;
    }
    else if (x2 <= x4 && x1 >= x3) {
        cout<<"Within second line"<<endl;
    }
    else if (x4 < x1 || x3 > x2) {
        cout<<"No overlap"<<endl;
    }
    else {
        cout<<"Partial";
    }

    return 0;
}