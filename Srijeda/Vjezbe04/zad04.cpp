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
    Par<int, string> par(3, "rp1");
    cout << par.prvi() << endl;
    cout << par.drugi() << endl;
    return 0;
}