#include <iostream>
using namespace std;
int main(){
//    Multidimensional array
    int matrix[3][3] = {
            {1, 2, 3},
            {3, 4, 5},
            {5, 6, 7}
    };
    int sum=0;
//    print index [1][1]
    cout << "matrix[1][1] : " <<  matrix[1][1] << endl;
//  print index [x][y]
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "matrix[" << i << "][" << j << "] : " << matrix[i][j] << endl;
//            matrix[i][j] => i=j
            if (i==j){
                cout << "(i)" << i << "=" << "(j)" << j <<  endl;
                sum+=matrix[i][j];
            }
        }
    }
    cout <<  "sum : " << sum << endl;
    return 0;
}