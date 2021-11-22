#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a,b,c,e,f,g,h,i,pi=3.14159;
    cin>>a>>b>>c;
    e = (a*c)/2;
    f = pi*c*c;
    g = (((a+b)/2)*c);
    h = b*b;
    i = a*b;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<e<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<f<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<g<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<h<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<i<<endl;
    return 0;
}