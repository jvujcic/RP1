#include <iostream>

using namespace std;

struct tocka {
    int x, y;

    tocka() {       //prazan konstruktor, postavite u ishodiste
    }

    tocka(int a, int b) {
    }

    ~tocka() {      // destruktor ispisuje tocku
    }

    tocka simetricna() {
    }
};

int main() {
    Tocka A, B(2, 3);
    Tocka C = B.simetricna();
}