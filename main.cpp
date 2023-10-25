#include <iostream>
using namespace std;
int main(){
    int myArray[21] = {0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
    int * pointerarray;
     pointerarray = myArray;

     cout <<  "The value of myArray is " << myArray << endl;
     cout <<  "The value of pointerarray is " << *pointerarray << endl;
     cout <<  "The value of myArray[0] is " << myArray[0] << endl;
     cout <<  "The value of pointerarray[0] is " << pointerarray[0] << endl;

    for (int i = 0; i < 21; ++i) {
        cout << "myArray[" << i << "] : " << myArray[i] << endl;
    }

//     ================================================================

     int * pointerarray2;
     pointerarray2 = myArray;
     *pointerarray2 = 1000;
     pointerarray2++;
     *pointerarray2 = 2000;
     pointerarray2++;
     *pointerarray2 = 3000;
    for (int i = 0; i < 21; ++i) {
            cout << "myArray[" << i << "] : " << myArray[i] << endl;
    }


};