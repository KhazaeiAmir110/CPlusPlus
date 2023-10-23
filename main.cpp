#include <iostream>
using namespace std;
int main(){
    cout << "Please enter your Salary: ";
    int salary,income=0,tax=0;
    cin >> salary;
    if (salary <= 1000){
        income = salary* (10.0/100);
        tax = salary-income;
        cout << "Your income is: " << income << endl;
        cout << "Your tax is: " << tax << endl;
    } else if (salary > 1000 && salary <= 2000){
        income = salary* (15.0/100);
        tax = salary-income;
        cout << "Your income is: " << income << endl;
        cout << "Your tax is: " << tax << endl;
    } else if (salary > 2000 && salary < 5000){
        income = salary* (20.0/100);
        tax = salary-income;
        cout << "Your income is: " << income << endl;
        cout << "Your tax is: " << tax << endl;
    } else if (salary == 5000){
        income = salary* (25.0/100);
        tax = salary-income;
        cout << "Your income is: " << income << endl;
        cout << "Your tax is: " << tax << endl;
    }
}