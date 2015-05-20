#include <iostream>

using namespace std;

int main() {
    const int a = 5;
    int b = 3, c = 4;
    int *p;

    p = &b;
    *p = 7;  // b = 7;
    p = &c;
    *p = 8;  // c = 8;

    const int *p1 = &b;
    //*p1 = 9;  //greska
    p1 = &c;    // u redu

    int * const p2 = &b;
    *p2 = 5;  // u redu
    //p2 = &c;  // greska

    const int * const p3 = &b;
    //*p3 = 4;  // greska
    //p3 = &c;   // greska

    return 0;
}