#include <iostream>

// int main() {
//     int i = 0 ;
//     using namespace std ;
//     cout << i ;
//     char ch = 'a' ;
//     bool flag = true;

//     float f = 1.283f;
//     double d = 521.342 ;

//     int arr[5];

//     int arr1[5] = {1,2,3,4,5};


// }

/*
std::basic_ostream & std::basic_istream
std::ostream & std::istream
std::cout & std::cin
std::cout for console output through operator <<
std::cin for keyboard input through >>
<iostream> header
*/

 int main() {
    using namespace std;
    // cout << "Hello world\n" << 42 << true << 1.231f << endl;
    // cout << "Tell me your age: " << endl;
    // int age;
    // cin >> age;
    // cout << "your age is :" << age << endl;
    char buff[512];
    cout << "What is your name? ";    
    cin.getline(buff, 200,  '/n');
    cout << "Your name is " << buff << endl;
    return 0;
 }