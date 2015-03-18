#include <iostream>
#include <cstring>

using namespace std;

struct MyString {
	char str[100];
	
	MyString() {
		str[0] = '\0';
	}
	
	MyString(char const *s) {
		strcpy(str, s);
	}
	
	MyString(int n, char c) {	// zad
	}
	
	int size() {	//zad
	}
	
	void append(MyString S) {	//zad
	}
	
	void printToStdout() {	//zad
		cout << str << endl;
	}
	
	bool isEquel(MyString S) {	//zad
	}
};

int main() {
	MyString A, B("abc"), C("def";
	A.printToStdout();
	B.printToStdout();
	C.append(B);
}
