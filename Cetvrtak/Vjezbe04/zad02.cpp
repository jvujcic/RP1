#include <iostream>

using namespace std;

template<class T>
void swap(T *x, T *y) {
    T tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    int a = 5, b = 7;
    ::swap(&a, &b);
    cout << a << " " << b << endl;

    string s1("pmf"), s2("rp1");
    ::swap(&s1, &s2);
    cout << s1 << " " << s2 << endl;
    return 0;
}