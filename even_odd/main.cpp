#include <iostream>
using namespace std;

bool evenodd(int n) {
    if (n%2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
int main() {

    int a;
    cout << "Enter a number ";
    cin >> a;
    bool ans = evenodd(a);
    if (ans) {
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
}
