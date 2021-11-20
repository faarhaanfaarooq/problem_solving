#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    for(;i<n;i++){
        if(n%i==0){
            cout <<"Non-prime"<< endl;
            break;
        }
    }
    if(i==n){
        cout <<"Prime"<< endl;
    }
    return 0;
}