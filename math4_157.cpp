#include<iostream>

using namespace std;

int main(){
    int num;
    long long int out[1000] = {0};
    cin >> num;
    out[0] = 0;
    out[1] = 1;
    for(int i = 2; i <= num; i++){
        out[i] = out[i-1]+out[i-2];
    }
    for(int i = 0; i <= num; i++){
        if(i != num) cout << out[i] << ",";
    }
    cout << out[num] << "\n";
}