#include<iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i = 0;i < num;i++){
        int a,b,c;
        long long int total = 0;
        cin >> a >> b >> c;
        for(int j = 0; j < b;j++){
            total = total + (a - b + 1 + j);
            //cout << total << " ";
        }
        if(total > c){
            cout << 'T';
        }
        else{
            cout << 'F';
        }
        cout << "\n" << total << "\n";
    }
}