#include <iostream>
#include <string>
void Swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Swap(int &x , int &y) {
    int temp = x;
    x = y;
    y = temp;
}
void Print( int *ptr) {
    using namespace std;
    if ptr != nullptr;
        cout << *ptr << "\n";
}

int main() {
    using namespace std;
    int x = 5;
    Print(&x);
    // int a = 5, b = 10;
    // Swap(a, b);
    // cout << "a:" << a << "\n";
    // cout << "b:" << b << "\n";
    return 0;
}