#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double r,pi=3.14159,res;
    cin>>r;
    res=(4.0/3)*pi*(r*r*r);
    cout << "VOLUME = "<<fixed<<setprecision(3)<<res<<endl;
    return 0;
}