#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double input;
    double ans;
    cin >> input;
    ans = (input * 9 / 5) + 32;
    cout << fixed << setprecision(1) << ans << "\n";
}