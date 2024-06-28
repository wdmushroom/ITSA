#include<iostream>

using namespace std;

int main(){
    int total,a1,a2,a3,one,five,fifty;
    char dot;
    cin >> total >> dot;
    cin >> a1 >> dot;
    cin >> a2 >> dot;
    cin >> a3;
    a1 = a1 * 15;
    a2 = a2 * 20;
    a3 = a3 * 30;
    if(total < (a1 + a2 + a3)){
        cout << "0\n";
    }
    else{
        total = total - a1 - a2 - a3;
        fifty = total / 50;
        total = total % 50;
        five = total / 5;
        total = total % 5;
        one = total;
        cout << one << "," << five << "," << fifty << "\n";
    }
}