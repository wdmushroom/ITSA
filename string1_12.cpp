#include<iostream>

using namespace std;

int main(){
    int start,end;
    cin >> start >> end;
    if(start < end){
        for(int i = start;i <= end;i++){
            for(int j = 0;j < i;j++){
                cout << '*';
            }
            cout << "\n";
        }
    }
    else{
        for(int i = start;i >= end;i--){
            for(int j = 0;j < i;j++){
                cout << '*';
            }
            cout << "\n";
        }
    }
}