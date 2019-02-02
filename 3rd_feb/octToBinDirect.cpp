#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int oct;
    cin>>oct;
    int bin = 0;
    int power = 1;
    int x = 0;
    while (oct!=0) {
        int iso = oct%10;
        oct = oct/10;

        switch (iso)
        {
            case 0: {
                x = 0;
                break;
            }
            case 1: {
                x = 1;
                break;
            }
            case 2: {
                x = 10;
                break;
            }
            case 3: {
                x = 11;
                break;
            }
            case 4: {
                x = 100;
                break;
            }
            case 5: {
                x = 101;
                break;
            }
            case 6: {
                x = 110;
                break;
            }
            case 7: {
                x = 111;
                break;
            }   
            default:
                break;
        }
        bin = bin + x*power;
        power = power*1000;
        cout<<"x : "<<x<<endl;
    }
    cout<<bin<<endl;
    return 0;
}