#include<iostream>

using namespace std;

int main(){
    int num,find;
    int list[9];
    cin >> num;
    for(int i = 0;i < num;i++){
        cin >> list[i];
    }
    for(int i = num - 1;i > 0;i--){
        for(int j = 0;j <= i-1;j++){
            if(list[j] > list[j+1]){
                int a;
                a = list[j+1];
                list[j+1] = list[j];
                list[j] = a;
            }
        }
    }
    for(int i = 0;i < num;i++){
        //cout << list[i] << " ";
    }
    find = num/2;
    cout << list[find] << "\n";
}