#include <iostream>

using namespace std;

struct stack {
    int podaci[100];
    int vrh;

    stack() {       // konstruktor, poziva se kod deklaracije
        cout << "Pozvan je konstruktor" << endl;
        vrh = -1;
    }

    ~stack() {
        cout << "Pozvan je destruktor" << endl;
    }

    // void makeNull() {    // ne treba ako imamo konstruktor
    //     vrh = -1;
    // }

    void push(int x) {
        if(vrh == 99) return;
        vrh++;
        podaci[vrh] = x;
    }

    int top() {
        if(vrh == -1) return -12345;
        return podaci[vrh];
    }
    void pop();
    // void pop() {
    //     if(vrh == -1) return;
    //     vrh--;
    // }
};

void stack::pop() {
    if(vrh == -1) return;
    vrh--;
}

int main( void ) {
    stack S1, S2;
    // makeNull( &S );
    // S1.makeNull();       // ovo ne zelimo
    // S2.makeNull();
    cout << S1.vrh << endl; // -1
    S1.push(3);
    S1.push(5);
    int a = S1.top();
    cout << a << endl; // 5
    S1.pop();
    a =  S1.top();
    cout << a << endl; // 3
    return 0;
}