#include<iostream>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    if(a==b){
        cout << 0 << endl;
        return 0;
    }
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]>b[i]){
                cout<<1<<endl;
                return 0;
            }
            if(a[i]<b[i]){
                cout <<-1<<endl;
                return 0;
            }
        }
    }
    return 0;
}