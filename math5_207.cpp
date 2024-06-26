#include<iostream>

using namespace std;

int main(){
    int input;
    int total = 0;
    for(int i = 0;i < 5;i++){
        cin >> input;
        total = total + (input%13) + 1;
    }
    cout << total << "\n";

}