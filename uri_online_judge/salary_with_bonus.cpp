#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    char x[1000];
    cin>>x;
    double y,z,r;
    cin>>y>>z;
    r= y+ (z*15)/100;
    cout << "TOTAL = R$ "<<fixed<<setprecision(2)<<r<<endl;
    return 0;
}