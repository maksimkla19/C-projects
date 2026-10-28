#include <iostream>

void print(int *ptr) {
    using namespace std;
    cout << *ptr << endl;
    *ptr = 700;
}

int main(){
    using namespace std;
    /*
    float radius = 0;
    cin >> radius;
    const float pi = 3.141f;
    float area = pi * radius * radius;
    float circumference = pi * 2 * radius;
    cout << "Area is: " << area << endl;
    cout << "Circumference is: " << circumference << endl; 
    */

    const int CHUNK_SIZE = 512;
    const int *const ptr = &CHUNK_SIZE;
    int x = 10;
    print(&x);
    cout << "main->x" << x << endl;
    return 0;

}