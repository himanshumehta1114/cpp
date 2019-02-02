#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int n;
    cout<<"Rows ?";
    cin>>n;

    int num = 1;
    int spaces = n*2-3;
    for (int i=1;i<=n;i++) {
        if (i!=n) {
            num = i;
            for (int j=1;j<=num;j++) {
                cout<<j;
            }
            for (int k=0;k<spaces;k++) {
                cout<<" ";
            }
            for (int k=num;k>0;k--) {
                cout<<k;
            }
            spaces = spaces-2;
            cout<<endl;
        } else {
            for (int i=1;i<n;i++) {
                cout<<i;
            }
            cout<<n;
            for (int k=num;k>0;k--) {
                cout<<k;
            }
            cout<<endl;
        }
    }
}