// seen
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Rows ?";
    cin>>n;

    int stars = 1;
    int spaces = n/2;
    int temp = 0;
    for(int i=1;i<=n;i++) {
        temp = i;
        if (i > n/2+1) {
            temp = n+1-i;
        }
        for (int i=1;i<=spaces;i++) {
            cout<<" ";
        }
        for (int j=1;j<=stars;j++) {
            cout<<temp;
            if (j>stars/2) temp--;
            else temp++;
        }
        cout<<endl;
        if (i<(n/2+1)) {
            stars+=2;
            spaces--;
        } else {
            stars-=2;
            spaces++;
        }
    }

    return 0;
}