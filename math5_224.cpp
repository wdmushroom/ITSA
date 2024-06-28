#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

int main(){
    int num;
    cin >> num;
    while(num != -1){
        int count = 0,in = num;
        double out;
        while(in < 99){
            out = sqrt(in);
            out = out * 10;
            out = round(out);
            out = out / 10;
            in = out * 10;
            count++;
        }
        cout << count << "\n";
        cin >> num;
    }
}