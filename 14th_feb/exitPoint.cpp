#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    int arr[4][4] = {
        {0, 0, 0, 1},
        {1, 0, 0, 0},
        {0, 0, 0, 0},
        {1, 0, 1, 0}
    };

    int row_max = sizeof(arr)/sizeof(arr[0]);
    int col_max = sizeof(arr[0])/sizeof(int);
    int row_min = 0;
    int col_min = 0;
    int col = col_max;
    int row = row_max;
    bool flag = true;
    char direction = 'e';

    while(flag) {
       if (direction == 'e') {
           for (int i=col_min;i<col;i++) {
               if (arr[row_min][i] == 1) {
                    col = i;
                    direction = 's';
                    break;
                }
                if (i == col) {
                    cout<<"i, j : "<<row_min<<i<<endl;
                    flag = false;
                }
           }
       }
    //    if (direction == 's') {
    //        for (int i=row_min;i<row_max;i++) {
    //            if (arr[i][col] == 1) {

    //            }
    //        }
    //    }
    }


    return 0;
}