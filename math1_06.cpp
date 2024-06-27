#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int input;
    double ans;
    cin >> input;
    ans = input * 1.6;
    cout << fixed << setprecision(1) << ans << "\n";
}