#include<iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    if((num % 100) == 0){
        if((num % 400) == 0){
            cout << "Bissextile Year\n";
        }
        else{
            cout << "Common Year\n";
        }
    }
    else if((num % 4) == 0){
        cout << "Bissextile Year\n";
    }
    else{
        cout << "Common Year\n";
    }
}