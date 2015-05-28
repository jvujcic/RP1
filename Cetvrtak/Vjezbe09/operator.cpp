#include <iostream>

using namespace std;

class razlomak {
private:
    int p, q;

public:
    razlomak(int brojnik = 0, int nazivnik = 1) : p(brojnik), q(nazivnik) {
        skratiMe();
    }

    razlomak operator+(const razlomak &r) const {
        razlomak ret;
        ret.p = p*r.q + q*r.p;
        ret.q = q * r.q;
        ret.skratiMe();
        return ret;
    }

    razlomak& operator+=(const razlomak &r) {
        *this = *this + r;
        return *this;
    }

    razlomak operator-() const {
        razlomak ret;
        ret.p = -p;
        ret.q = q;
        ret.skratiMe();
        return ret;
    }

    razlomak operator-(const razlomak &r) const {
        razlomak ret;
        ret = *this + (-r);
        ret.skratiMe();
        return ret;
    }

    razlomak& operator-=(const razlomak &r) {
        *this = *this - r;
        return *this;
    }

    void ispisi() {
        cout << p << "/" << q << endl;
    }
private:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    void skratiMe() {
        int d = gcd(p, q);
        p /= d;
        q /= d;
        if(q < 0) {
            p = -p;
            q = -q;
        }
    }
};

int main() {
    razlomak a(1, 2), b(3), c;
//    c = a + b; // c = +(a, b)   ;   c = a.+(b);
//    c.ispisi();
//    a += b;
//    a.ispisi();
//    c = -a;
//    c.ispisi();

    c = a - b;
    c.ispisi();
    a -= b;
    a.ispisi();
    return 0;
}
