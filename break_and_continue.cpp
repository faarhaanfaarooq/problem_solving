#include<iostream>
using namespace std;
int main()
{
    int pocket_money = 3000;
    for(int date = 1; date <= 30; date++){
        if(date%2==0){
            continue;
        }
        if(pocket_money==0){
            break;
        }
        cout << "Go out today : " << date << endl;
        pocket_money = pocket_money - 300;
        cout << pocket_money << endl;
    }
    return 0;
}