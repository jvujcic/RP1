#include <iostream>

using namespace std;

struct Test {
    int x;
    Test(int x) {
        this->x = x;
    }

    void ispisi() const {
        cout << x << endl;
    }

    void promijeni(int x) {
        this->x = x;
    }
};

int main() {
    const Test T(5);   //this je pointer na T
    T.ispisi();
    //T.promijeni(1);
}