#include<iostream>

using namespace std;

int main(){
    int num;
    int ans[100001],output[10];
    for(int i = 101;i <= 100000;i++){
        ans[i] = i - 10;
    }
    for(int i = 100;i > 0;i--){
        ans[i] = ans[ans[i + 11]];
    }
    cin >> num;
    for(int i = 0;i < num;i++){
        int input;
        cin >> input;
        output[i] = ans[input];
    }
    for(int i = 0;i < num;i++){
        cout << output[i] << "\n";
    }
}