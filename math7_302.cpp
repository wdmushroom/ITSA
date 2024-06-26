#include<iostream>
#include<string.h>

using namespace std;
char input[10000000];
int main(){
    
    char list[26];
    int size,count[26] = {0},check = 0,len = 0;
    cin >> input;
    size = strlen(input);
    for(int i = 0;i < 26;i++){
        list[i] = 'a' + i;
        //cout << list[i] << "\n";
    }
    for(int i = 0;i < size;i++){
        for(int j = 0;j < 26;j++){
            if(input[i] == list[j]) count[j]++;
        }
    }
    for(int i = 0;i < 26;i++){
        if(count[i] == 1){
            count[i]--;
            len = 1;
            check = 1;
            break;
        }
    }
    if(check == 0){
        for(int i = 0;i < 26;i++){
            if(count[i]%2 == 1){
                count[i]--;
                len = 1;
                break;
            }
        }
    }
    for(int i = 0;i < 26;i++){
        if(count[i]/2 != 0){
            len = len + (count[i]/2)*2;
            count[i] = count[i]%2;
        }
    }
    cout << len << "\n";
}