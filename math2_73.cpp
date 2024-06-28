#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int day,num;
    cin >> day >> num;
    for(int i = 0;i < day;i++){
        num = num + 1;
        num = num * 2;
    }
    cout << num << "\n";
}