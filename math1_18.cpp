#include<iostream>

using namespace std;

int mul(int x,int y){
    int total = 1;
    while(y>=1){
        total = total * x;
        y--;
    }
    return total;
}

int main(){
    int input,check = 0;
    int out[8] = {0};
    cin >> input;
    if(input < 0){
        for(int i = 0;i < 8;i++){
            out[i] = 1;
        }
        input = 0 - input;
    }
    for(int i = 7; i >= 0;i--){
        int sub = mul(2,i);
        if((input/sub) != 0){
            out[7-i] = 1;
            input = input%sub;
            check = 1;
        }
        else if(check == 1){
            out[7-i] = 0;
        }
    }
    for(int i = 0;i <= 7;i++){
        cout << out[i];
    }
    cout << "\n";
}