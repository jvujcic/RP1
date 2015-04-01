#include <iostream>
using namespace std;

// int min(int a, int b) {
//     if(a < b) return a;
//     return b;
// }

// double min(double a, double b) {
//     if(a < b) return a;
//     return b;
// }

// string min(string a, string b) {
//     if(a < b) return a;
//     return b;
// }


template<class Type>
Type min(Type a, Type b) {
    if(a < b) return a;
    return b;
}

int main() {
    int a = 5, b = 3;
    cout << ::min(a, b) << endl;

    cout << ::min(string("abc"), string("def")) << endl;
    //::min(1, 1.2);
    return 0;
}


