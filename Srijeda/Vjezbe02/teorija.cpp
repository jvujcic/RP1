#include <iostream>

using namespace std;

struct stack {
    int podaci[100];
    int vrh;

    // void makeNull() {        // inicijalizacija, ovo zelimo automatski (kostruktori)
    //     vrh = -1;
    // }

    stack() {       // konstruktor, nema povratni tip, ime strukture
        vrh = -1;
        cout << "Konstruktor je pozvan" << endl;
    }

    void push(int x) {
        if(vrh == 99) return;
        vrh++;
        podaci[vrh] = x;
    }

    int top() {
        if(vrh == -1) return -1; //vratiti vrijednost koja oznacava da je stog prazan
        return podaci[vrh];
    }

    void pop();
    // void pop() {
    //     if(vrh == -1) return;
    //     vrh--;
    // }

    ~stack() {  //destruktor
        cout << "Pozvan destruktor" << endl;
    }
};

void stack::pop() {
    if(vrh == -1) return;
    vrh--;
}



int main( void ) {
    stack S1, S2;
    //makeNull( &S ); //makeNull je globalna, to ne zelimo
    // S1.makeNull();  // ne zlimo zvati makeNull nego konstruktor
    // S2.makeNull();
    cout << S1.vrh << endl; // provjera, treba ispisati -1
    S1.push(3); 
    S1.push(5);
    S2.push(2);
    int a =  S1.top();
    cout << a << endl; // treba ispisati 5
    S1.pop();
    a =  S1.top();
    cout << a << endl; // treba ispisati 3
    return 0;
}