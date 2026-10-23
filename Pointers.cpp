#include <iostream>

int main(){
    using namespace std;
    int x = 10;
    int *ptr = &x;
    *ptr = 5;
    cout << x << "\n";
    int y = *ptr;
    cout << y << "\n";
    return 0;
}

//nullptr is null variable for pointers that should be defined with void but if u define it with int or float code may crash as access violation