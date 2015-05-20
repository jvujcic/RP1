#include <iostream>

using namespace std;

void promijeni(int &ref) {
    ref = 0;
}

int &vratiref(int &ref) {
    // int x = 2;
    // return x;        // ovo ne
    return ref;
}

int main() {
    int a = 5;
    int &ref = a;
    ref = 3;
    cout << a << endl;

    int b = 1;
    ref = b;

    cout << a << endl;

    promijeni(b);
    cout << b << endl;

    const int &ref1 = b;
    //ref1 = 1; //greska

    vratiref(b) = 10;
    cout << b << endl;

}