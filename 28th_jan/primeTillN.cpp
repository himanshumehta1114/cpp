#include<iostream>

using namespace std;

int main() {
    int n;

    cout<<"Enter a number : ";
    cin>>n;

    for (int i=2;i<=n;i++) {
        bool prime = true;
        int div = 2;

        while (div*div <= i) {
            if (i % div == 0) {
                prime = false;
                break;
            }
            div++;
        }

        if (prime) {
            cout<<i<<"\t";
        }
    }

    return 0;
}