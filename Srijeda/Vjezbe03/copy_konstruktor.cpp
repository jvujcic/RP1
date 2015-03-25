#include <iostream>
#include <cstring>

using namespace std;

struct MyString {
    char *str;
    
    MyString() {
        str = new char[1];
        str[0] = '\0';
    }
    
    MyString(char const *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    MyString(const MyString &MyS) {
        str = new char[strlen(MyS.str) + 1];
        strcpy(str, MyS.str);
    }

    ~MyString() {
        delete [] str;
    }
    
    int size() {
        return strlen(str);
    }

    void printToStdout() {  //zad
        cout << str << endl;
    }

    void append(MyString S) {
        char *temp = new char[size() + S.size() + 1];
        strcpy(temp, str);
        strcat(temp, S.str);
        delete [] str;
        str = temp;
    }
    
};

void promijeniPrvoSlovo(MyString S, char c)
{
    if (S.size() > 0)
        S.str[0] = c;
    cout << "Unutar funkcije: ";
    S.printToStdout();
}

int main() {
    MyString A("praktikum"), B("rp1");
    promijeniPrvoSlovo(A, 'a'); // S.MyString(A);
    A.printToStdout();
    A.append(B);
    A.printToStdout();
    return 0;
}
