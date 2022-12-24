#include <iostream>
using namespace std;
int fact(int n){
    int factorial = 1;
    if (n<0){
        cout << "Error factorial not exist";
    }
    else{
        for (int i = 1; i <= n; i++) {
            factorial *= i;

        }
    }
    return factorial;
}
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int b = fact(a);
    cout<<b;


}
