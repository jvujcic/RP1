#include <iostream>

using namespace std;

struct tocka {
    int x, y;

    tocka() {   //postavlja u ishodiste
    }

    tocka(int a, int b) {
    }

    tocka simetricna() {
    } 

    ~tocka() {  //ispisuje koordinate tocke
    }   
};

int main() {
    tocka A, B(2, 3);
    tocka C = B.simetricna();
}