// seen
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Rows ?";
    cin>>n;

    int stars = 1;
    int spaces = n/2;

    for(int i=0;i<n;i++) {
        for (int i=1;i<=spaces;i++) {
            cout<<" ";
        }
        for (int j=1;j<=stars;j++) {
            cout<<"*";
        }
        cout<<endl;
        if (i<(n/2)) {
            stars+=2;
            spaces--;
        } else {
            stars-=2;
            spaces++;
        }
    }

    return 0;
}