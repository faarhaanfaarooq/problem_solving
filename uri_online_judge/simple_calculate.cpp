#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a,b,c,x,y,z,r;
    cin >> a>>b>>c;
    cin >> x>> y>> z;
    r=(b*c)+(y*z);
    cout << "VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<r<<endl;
    return 0;
}