#include <iostream>
using namespace std;
int main(){
    std::cout <<"Hello C++" << endl;
    cout << "using namespace std";
    cout << endl;

//    data type
    int age_user_1 = 19;
    int age_user_2(20);
    auto age = 21;
    string name = "amir";
    cout << "age_user_1 : " << age_user_1 << endl << "age_user_2 : " << age_user_2 << endl << "age : " << age << endl << "name : " << name << endl;

//    plus
    int number_1=1, number_2=2, number_3=3;
    number_1 = number_2--;
    cout << "number_1 : " << number_1 << endl << "number_2 : " << number_2 << endl;

    number_3 = number_2++;
    cout << "number_2 : " << number_2 << endl << "number_3 : " << number_3 << endl;

//    const
    float pi_1 = 2.34;
    const float pi = 3.14;
//    pi = 3.5;  error
    pi_1 = 3.14;


//    Input
    int Age;
    cout << "please enter your age : ";
    cin >> Age;
//    ====================================

    string name_one;
    getline(cin,name_one);
}