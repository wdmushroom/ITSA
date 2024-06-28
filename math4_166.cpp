#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    while(!(x == 0 && y == 0)){
        cout << fixed << setprecision(2) << pow(x,y) << "\n";
        cin >> x >> y;
    }

}