#include <iostream>

int main() {
    using namespace std;
    int x, y;
    cin >> x >> y;
    int result;
    result = Add(x,y);

}

int Add(int x, int y) {
    using namespace std;
    int sum = x + y;
    cout << "Sum is " << sum << endl;
    return sum;
}