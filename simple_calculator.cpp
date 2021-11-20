#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout << "Enter Two Numbers: ";
    cin >> a>>b;
    char op;
    cout << "Select your way of calculation: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "result: " << a+b << endl;
        break;
    case '-':
        cout << "result: " << a-b << endl;
        break;
    case '*':
        cout << "result: " << a*b << endl;
        break;
    case '/':
        cout << "result: " << a/b << endl;
        break;
    
    default:
        cout << "Invalid Input" << endl;
        break;
    }
    return 0;
}