#include<iostream>

using namespace std;

int main(){
    int num,n1,n2,n3;
    cin >> num;
    n1 = num / 100;
    n2 = (num - (n1 * 100)) / 10;
    n3 = num % 10;
    n1 = n1 * n1 * n1;
    n2 = n2 * n2 * n2;
    n3 = n3 * n3 * n3;
    if((n1 + n2 + n3) == num){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}