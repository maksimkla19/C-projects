#include <iostream>

int main(){
    using namespace std;
    int x = 10;
    int &ref = x;
    int y = 20;
    ref = y;
    cout << "x:" << x << endl;
    cout << "ref:" << ref << endl;
}

/*
Reference
Always need an initializer
Initializer should be I-value
cannot be nullptr
bound to its referent
no storage required as it has the same address as that of referent
dereference not required
*/

/*
pointer
initializer is optimal
initializer needs to be |value
can be nullptr
can point to other variables 
has its own storage so will have a dif adres
requires dereference operator to access the value
*/

