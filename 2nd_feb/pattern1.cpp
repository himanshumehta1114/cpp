// seen
#include<iostream>
using namespace std;

int main(int argc, char** argv) {

    int n;
    cout<<"Row ? ";
    cin>>n;
    int count = 1;
    for (int i=0;i<n;i++) {
        for (int j=0;j<i;j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}