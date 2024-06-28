#include<iostream>

using namespace std;

int main(){
    int num,j = 0;
    int list[100][100],size[100];
    do{
        int count,i = 0;
        cin >> num;
        count = num;
        if(num != 0){
            while(count != 0){
                list[j][i] = count % 10;
                count = count / 10;
                i++;
            }
            size[j] = i;
            j++;
        }
    }while(num != 0);
    for(int f = 0;f < j;f++){
        for(int g = size[f] - 1;g > 0;g--){
            cout << list[f][g] << " ";
        }
        cout << list[f][0] << " ";
        cout << "\n";
    }
}