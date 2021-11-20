#include<iostream>
using namespace std;

int main(){
    char button;
    cout << "Push a button: ";
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Hola" << endl;
        break;
    case 'c':
        cout << "Salam" << endl;
        break;
    case 'd':
        cout << "Namaste" << endl;
        break;
    case 'e':
        cout << "Hi" << endl;
        break;
    
    default:
        cout << "I am learning :') " << endl;
        break;
    }
    return 0;
}