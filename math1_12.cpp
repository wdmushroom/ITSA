#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int mine_sp = 1;
    double other_sp = 30 * 2.54 / 100;
    double time;
    int dis;
    cin >> dis;
    time = dis / (mine_sp - other_sp);
    cout << ceil(time) << "\n";
}
