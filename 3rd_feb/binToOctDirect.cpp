#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int oct;
    cin>>oct;
    int bin = 0;
    int power = 1;
    int x = 0;
    while (oct!=0) {
        int iso = oct%1000;
        oct = oct/1000;
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
            case 10: {
                x = 2;
                break;
            }
            case 11: {
                x = 3;
                break;
            }
            case 100: {
                x = 4;
                break;
            }
            case 101: {
                x = 5;
                break;
            }
            case 110: {
                x = 6;
                break;
            }
            case 111: {
                x = 7;
                break;
            }   
            default:
                break;
        }
        bin = bin + x*power;
        power = power*10;
    }
    cout<<bin<<endl;
    return 0;
}