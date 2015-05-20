#include <iostream>

using namespace std;

struct automobil {
    struct motor {
        int snaga;
        motor(int s) { snaga = s; }
    };
    motor m;
    automobil(): m(5) { }
    automobil(int x): m(x) {}
};

int main() {
    automobil A, B(2);
    automobil::motor M(1);
    cout << M.snaga << endl;
    cout << B.m.snaga << endl;

}