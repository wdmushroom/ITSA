#include<iostream>
#include<math.h>

using namespace std;

int main(){
    long long int num,max;
    cin >> num;
    max = sqrt(num);
    for(int i = 2;i <= max;i++){
        if((num % i) == 0){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}