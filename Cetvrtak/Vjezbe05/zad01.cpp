#include <iostream>

using namespace std;

// za d.z. ubaciti provjere u funkcijama
template<class T>
struct stack {
    T podaci[100];
    int vrh;

    stack() { vrh = -1; }
    void push(T x) {
        vrh++;
        podaci[vrh] = x;
    }
    T top() { return podaci[vrh]; }
    void pop() { vrh--; }
};

int main() {
    stack<string> S;
    S.push("rp1");
    S.push("pmf");
    cout << S.top() << endl; //pmf
    S.pop();
    cout << S.top() << endl; //rp1
    return 0;
}