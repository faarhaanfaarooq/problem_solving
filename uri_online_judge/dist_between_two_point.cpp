#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    double x1,x2,y1,y2,r;
    cin>>x1>>x2>>y1>>y2;
    r=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<fixed<<setprecision(4)<<r<<endl;
    return 0;
}+