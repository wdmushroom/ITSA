#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int num,size = 0,count = 0;
    int list[1000];
    for(int i = 2;i <= 100000;i++){
        int check = 0;
        for(int j = 2;j <= sqrt(i);j++){
            if((i % j) == 0){
                check = 1;
                break;
            }
        }
        if(check == 0){
            list[size] = i;
            size++;
        }
        if(size == 501){
            break;
        }
    }
    cin >> num;
    for(int i = 0;i < num;i++){
        cout << list[i] << ",";
        count = count + list[i];
    }
    cout << "\n" << count << "\n";
}