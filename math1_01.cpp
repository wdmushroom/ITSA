#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double up,down,tall;
    double ans;
    cin >> up >> down >> tall;
    ans = (up + down) * tall / 2;
    cout << "Trapezoid area:" << fixed << setprecision(1) << ans << "\n";
}