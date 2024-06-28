#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int num, i = 1,total = 0,count = 0;
    cin >> num;
    while((total + i) <= num){
        total = total + i;
        i++;
        count++;
    }
    cout << count << "\n";
}