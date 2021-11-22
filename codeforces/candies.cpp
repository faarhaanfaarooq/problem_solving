#include<iostream>
using namespace std;

int main(){
    int n,x,y,sum=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        sum+=ar[i];
    }
    cout<<sum<<endl;
    return 0;
}