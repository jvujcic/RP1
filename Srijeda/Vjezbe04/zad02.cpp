#include <iostream>

using namespace std;

template<class T>
void swap(T *x, T *y) {
    T temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 7;
    ::swap(&a, &b);
    cout << a << " " << b << endl;
    
    string s1("ABC");
    string s2("DEF");
    ::swap(&s1, &s2);
    cout << s1 << " " << s2 << endl;
    return 0;
}