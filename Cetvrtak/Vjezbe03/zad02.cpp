#include <iostream>
#include <cstring>

using namespace std;

struct MyString {
    char str[100];

    MyString() {
        str[0] = '\0';
    }

    MyString(const char *s) {
        if(strlen(s) > 99)  return;
        strcpy(str, s);
    }

    MyString(int n, char c) {
        if(n > 99) n = 99;

        for(int i = 0; i < n; i++)
            str[i] = c;

        str[n] = '\0';
    }

    int size() {
        return strlen(str);
    }

    void append(MyString s) {
        if(size() + s.size() > 99) return;
        strcat(str, s.str);
    }

    bool isEquel(MyString s) {
        return strcmp(str, s.str) == 0;
    }

    void printToStdout() {
        cout << str << endl;
    }
};

int main() {
    MyString A, B("pmf"), C(3, 'V');
    A.printToStdout();
    B.printToStdout();
    C.printToStdout();
    C.append(B);
    C.printToStdout();
    if(!A.isEquel(B)) cout << "Razlici" << endl;
    if(C.isEquel(C)) cout << "Isti" << endl;
    return 0;
}