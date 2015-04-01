#include <iostream>
#include <cstring>

using namespace std;

struct MyString {
    char *str;

    MyString() {
        str = new char[1];
        str[0] = '\0';
    }

    MyString(const char *s) {
        str = new char(strlen(s));
        strcpy(str, s);
    }

    MyString(const MyString &mystr) {
        str = new char[strlen(mystr.str)];
        strcpy(str, mystr.str);
    }

    void append(MyString S) {
        char *temp = new char[strlen(str) + strlen(S.str) + 1];
        strcpy(temp, str);
        strcat(temp, S.str);
        delete [] str;
        str = temp;
    }

    ~MyString() {
        delete [] str;
    }

    void printToStdout() {
        cout << str << endl;
    }
};

void test(MyString S) {
    if(strlen(S.str) > 0)
        S.str[0] = 'A';
}

int main() {
    MyString A("rp1"), B("pmf");
    test(B);                // S.MyString(B)
    B.printToStdout();
    A.append(B);
    A.printToStdout();
    return 0;
}