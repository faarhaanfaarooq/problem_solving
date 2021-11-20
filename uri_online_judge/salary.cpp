#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double x,y,z,sal;
    cin>> x>> y>> z;
    sal = y*z;
    cout << "NUMBER = " <<x<<endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << sal << endl;
    return 0;
}