#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int org_n = n;
    while(n>0){
        int last_digit = n%10;
        sum+=round(pow(last_digit,3));
        n=n/10;
    }
    if(sum==org_n){
        cout << "armstrong" << endl;
    }
    else{
        cout << "not-armstrong" << endl;
    }
    return 0;
}