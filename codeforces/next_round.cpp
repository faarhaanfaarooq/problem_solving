#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]>=arr[x-1] && arr[i]>0){
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}