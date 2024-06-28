#include<iostream>

using namespace std;

int main(){
    int num;
    int list[10000][3];
    char check[10000];
    cin >> num;
    for(int i = 0;i < num;i++){
        int check_60 = 0,check_80 = 0,check_220 = 0;
        for(int j = 0;j < 3;j++){
            cin >> list[i][j];
            if(list[i][j] < 60)
                check_60++;
            else if(list[i][j] >= 80){
                check_80 = 1;
            }
            check_220 = check_220 + list[i][j];
        }
        if(check_220 >= 220)
            check_220 = 1;
        else
            check_220 = 0;
        if(check_60 == 0){
            check[i] = 'P';
        }
        else if(check_60 < 2){
            if(check_220)
                check[i] = 'P';
            else
                check[i] = 'M';
        }
        else if(check_60 > 1){
            if(check_80)
                check[i] = 'M';
            else
                check[i] = 'F';
        }
        else{
            check[i] = 'F';
        }
    }
    for(int i = 0;i < num;i++){
        cout << check[i] << "\n";
    }

}