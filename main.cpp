#include <iostream>
using namespace std;
int main(){
    int myArray[10] = {1,3,5,7,9,11,13,15,17,19};
//    index array
    cout <<  "myArray[0] = " << myArray[0] << endl;
    cout <<  "myArray[5] = " << myArray[5] << endl;
//    chang array
    myArray[5] = 100;
    cout << "myArray[5] , change = " << myArray[5] << endl;

//    for
    int total=0;
    for (int i = 0; i < 10; i++){
        cout << "myArray[" << i << "] = " << myArray[i] << endl;
        total+=myArray[i];
    }cout << "Total : " << total << endl;
    return 0;
}