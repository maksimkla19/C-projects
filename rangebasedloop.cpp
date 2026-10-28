#include <iostream>
int main() {
    using namespace std;
    int arr[] = {1,2,3,4,5};
    // for(int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }
    // for (auto & x : arr) {
    //     x = 3;
    //     cout << x << " ";
    // }
    // for(auto x : {1,2,3,4,5}) {
    //     cout << x;
    // }

    for (auto x : arr) {
        cout << x << " ";
    }


    // int *beg = std::begin(arr) ;
    // int *end = std::end(arr) ;
    
    auto &&range = arr;
    auto begin = std::begin(arr);
    auto end = std::end(arr);

    for(;begin != end; ++begin) {
        auto v = *begin ;
    }

    // while(beg != end) {
    //     std::cout << *beg << " ";
    //     ++beg;
    // }    
    
    return 0;
}

/*
For
index based
requires end condition
index variable needs to be incremented or decremented
more control over iter
use for finer control


Range-based for
Does not use index to iterate
end condition is provided by the range
no need to increment or decrement
lesser chances of errors
no control over iteration
use with ranges

*/