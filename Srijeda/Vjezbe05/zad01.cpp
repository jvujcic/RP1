#include <iostream>

using namespace std;
// Za DZ napisite ostale funkcije i dodajte provjere u svim funkcijama
template<class T>
struct Stack {
    T podaci[100];
    int vrh;

    Stack() { vrh = -1; }
    void push(T x) { 
        vrh++;
        podaci[vrh] = x;
    }
    T top() { return podaci[vrh]; }
    void pop() { vrh--; }
};

int main() {
    Stack<string> S;
    S.push("rp1");
    S.push("pmf");
    cout << S.top() << endl;  // pmf
    S.pop();
    cout << S.top() << endl; // rp1
    return 0;
}