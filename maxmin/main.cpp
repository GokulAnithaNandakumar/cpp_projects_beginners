#include <iostream>
using namespace std;
int max(int a,int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b){
    if (a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int c;
    cout << "First number: ";
    cin >> c;
    int d;
    cout << "Second number: ";
    cin >> d;
    int ans = max(c,d);
    cout << "Max: ";
    cout << ans << endl;
    int sol = min(c,d);
    cout << "Min: ";
    cout << ans << endl;
}