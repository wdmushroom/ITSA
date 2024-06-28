#include<iostream>

using namespace std;

int main(){
    int num,cost,i = 0,total = 0;
    int list[6][2];
    cin >> num >> cost;
    for(int i = 0;i < 6;i++){
        cin >> list[i][1];
    }
    list[0][0] = 500;
    list[1][0] = 100;
    list[2][0] = 50;
    list[3][0] = 10;
    list[4][0] = 5;
    list[5][0] = 1;
    cost = 1000 - (cost * num);
    while(i != 5){
        if(cost < list[i][0] || list[i][1] == 0){
            i++;
        }
        if(cost > (list[i][0] * list[i][1])){
            cost = cost - (list[i][0] * list[i][1]);\
            total = total + list[i][1];
            list[i][1] = 0;
        }
        else{
            list[i][1] = list[i][1] - (cost / list[i][0]);
            total = total + (cost / list[i][0]);
            cost = cost % list[i][0];
        }
    }
    cout << total << "\n";
}