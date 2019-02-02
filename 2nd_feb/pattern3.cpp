// seen
#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int n;
    cout<<"Rows ?";
    cin>>n;

    int nck;
    for (int i=0;i<=n;i++) {
        nck = 1;
        for (int j=0;j<=i;j++) {
            cout<<nck<<" ";
            nck = (nck*(i-j))/(j+1);
        }
        cout<<endl;
    }
}