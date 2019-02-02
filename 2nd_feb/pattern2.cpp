// seen
#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int n;
    cout<<"Rows ?";
    cin>>n;

    int first = 0;
    int second = 1;
    int temp = 0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<i;j++) {
            cout<<first<<" ";
            temp = first + second;
            first = second;
            second = temp;
        }
        cout<<endl;
    }

    return 0;   
}