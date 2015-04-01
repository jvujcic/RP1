#include <iostream>

using namespace std;

// int min(int a, int b) {
//     if (a < b) return a;
//     return b;
// }

// string min(string a, string b) {
//     if(a < b) return a;
//     return b;
// }

// double min(double a, double b) {
//     if(a < b) return a;
//     return b;
// }

template<class Type>
Type min(Type a, Type b) {
    if(a < b) return a;
    return b;
}

int main() {
    cout << ::min(5, 2) << endl;
    cout << ::min(string("ABC"), string("DEF")) << endl;
    //cout << ::min(1.0, 2) << endl;
    return 0;
}