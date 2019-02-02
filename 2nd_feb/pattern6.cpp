// seen
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Rows ?";
    cin>>n;

    int spaces = 1;
    int stars = n/2+1;

    for(int i=0;i<n;i++) {
        for (int i=0;i<stars;i++) {
            cout<<"*";
        }
        for (int j=0;j<spaces;j++) {
            cout<<" ";
        }
        for (int i=0;i<stars;i++) {
            cout<<"*";
        }
        cout<<endl;
        if (i<(n/2)) {
            spaces+=2;
            stars--;
        } else {
            spaces-=2;
            stars++;
        }
    }

    return 0;
}