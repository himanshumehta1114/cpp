#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int o1, o2;
    cout<<"Enter oct1 and oct2 ";
    cin>>o1>>o2;

    int res = 0;
    int power = 1;
    while(o1!=0) {
        int iso1 = o1%10;
        o1 = o1/10;
        int iso2 = o2%10;
        o2 = o2/10;
        if (iso1-iso2 < 0) {
            res = res + (iso1-iso2+8)*power;
            o1--;
        } else {
            res = res + (iso1-iso2)*power;
        }
        cout<<"o1 : "<<o1<<" o2 : "<<o2<<" res : "<<res<<endl;
        power = power*10;
    }
    cout<<res<<endl;

    return 0;
}