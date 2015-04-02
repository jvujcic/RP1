#include <iostream>

using namespace std;

template<class T1, class T2>
struct Par {
    T1 x;
    T2 y;

    Par(T1 a, T2 b) {
        x = a;
        y = b;
    }

    T1 prvi() { return x; }
    T2 drugi() { return y; }
};

int main() {
    Par<int, string> tmp(5, "rp1");
    cout << tmp.prvi() << endl;
    cout << tmp.drugi() << endl;
    return 0;
}