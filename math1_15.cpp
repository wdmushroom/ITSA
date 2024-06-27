#include<iostream>

using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if(x > 100 || y > 100){
        cout << "outside\n";
    }
    else if(x <= 100){
        if( y > 100){
            cout << "outside\n";
        }
        else{
            cout << "inside\n";
        }
    }
    else if(y <= 100){
        if(x > 100){
            cout << "outside\n";
        }
        else{
            cout << "inside\n";
        }
    }
}