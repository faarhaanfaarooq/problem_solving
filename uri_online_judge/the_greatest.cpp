#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cin >>x>>y>>z;
    if(x>y && x>z){
        cout << x << " eh o maior" << endl;
    }
    else if(y>x && y>z){
        cout << y << " eh o maior" << endl;
    }
    else{
        cout <<z << " eh o maior" << endl;
    }
    return 0;
}