#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a = 3.14159, r, x;
    cin >> r;
    x = a*r*r;
    cout << "A=" << fixed << setprecision(4) << x << endl;
    return 0;
}