#include<iostream>

using namespace std;


int main(){
    int num,last = 0,total = 0;
    cin >> num;
    total = num;
    do{
        total = total + (num/3);
        last = (num/3) + (num%3);
        num = last;
    }while(last/3 != 0);
    cout << total << "\n";
}