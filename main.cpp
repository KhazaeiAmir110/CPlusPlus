#include <iostream>
using namespace std;
int array[] = {1,2,3,4,5,6,7,8,9,10};

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
//        spase
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    printArray(array,sizeof(array) / sizeof(int));
// size array
    cout <<"size array : " <<  sizeof(array) / sizeof(int) << endl;
}