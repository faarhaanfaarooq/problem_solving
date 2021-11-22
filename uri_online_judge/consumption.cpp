#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double x,y,r;
    cin>>x>>y;
    r=x/y;
    cout<<fixed<<setprecision(3)<<r<<" km/l"<<endl;
    return 0;
}