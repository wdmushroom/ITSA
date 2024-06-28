#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
    double a,b,c,ans;
    cin >> a >> b >> c;
    if(c >= (a + b)){
        cout << "no answer\n";
    }
    else{
        double s = (a + b + c) / 2;
        ans = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << fixed << setprecision(6) << ans << "\n";
    }
    
}