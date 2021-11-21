#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    while(n--){
        int x,y,z,r;
        cin>>x>>y>>z;
        r=x+y+z;
        if(r>=2){
            sum=sum+1;
        }
    }
    cout<<sum<<endl;
    return 0;
}