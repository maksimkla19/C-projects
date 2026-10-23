#include <iostream>
int main(){
    using namespace std;
    float radius = 0;
    cin >> radius;
    const float pi = 3.141f;
    float area = pi * radius * radius;
    float circumference = pi * 2 * radius;
    cout << "Area is: " << area << endl;
    cout << "Circumference is: " << circumference << endl; 

    return 0;
    
}