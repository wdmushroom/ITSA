#include<iostream>


using namespace std;

int main(){
    int a,b,c,size = 0,i = 0;
    char dot;
    int ans[100][2];
    cin >> a >> dot >> b >> dot >> c;
    while((a*i) <= c){
        int cost;
        cost = c - a*i;
        if((cost % b ) == 0){
            ans[size][0] = i;
            ans[size][1] = cost/b;
            size++;
        }
        i++;
    }
    for(int j = 0;j < size;j++){
        cout << ans[j][0] << "," << ans[j][1] << "\n";
    }
    
}