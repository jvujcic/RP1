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
        //zad
    }

    int size() {
        //zad
    }

    void append(MyString s) {
        //zad
    }

    bool isEquel(MyString s) {
        //zad
    }

    void printToStdout() {
        cout << str << endl;
    }
};

int main() {
    MyString A, B("pmf");
    A.printToStdout();
    B.printToStdout();
    return 0;
}