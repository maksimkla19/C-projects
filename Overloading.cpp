#include <iostream>
int Add(int a, int b) {
    return a + b;
}

int main() {
    using namespace std;
    int result = Add(3, 5);
    cout << result << endl;
    return 0;

}