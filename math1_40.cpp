#include<iostream>

using namespace std;

int main(){
    int num;
    long long int total = 0;
    cin >> num;
    for(int i = 1;i <= num;i++){
        total = total + i;
        if(i != num)
            cout << i << " + ";
        else
            cout << i << " ";
    }
    cout << "= " << total << "\n";
}