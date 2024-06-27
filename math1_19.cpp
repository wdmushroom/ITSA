#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int min;
    double cost = 0.9,bonus = 1,total;
    cin >> min;
    if(min < 1500 && min > 800){
        bonus = 0.9;
    }
    else if(min >= 1500){
        bonus = 0.79;
    }
    total = min * cost * bonus;
    cout << fixed << setprecision(1) << total << "\n";
}