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
		if(n >= 99) n = 99;
		for(int i = 0; i < n; i++)
			str[i] = c;
		str[n] = '\0';
	}
	
	int size() {	//zad
		return strlen(str);
	}
	
	void append(MyString S) {
		if(size() + strlen(S.str) >= 99) return;
		strcat(str, S.str);
	}
	
	void printToStdout() {	//zad
		cout << str << endl;
	}
	
	bool isEquel(MyString S) {	//zad
		return strcmp(str, S.str) == 0;
	}
};

int main() {
	MyString A, B("abc"), C(5, 'V');
	A.printToStdout();
	B.printToStdout();
	C.printToStdout();
	B.append(C);
	B.printToStdout();
	if(A.isEquel(A))
		cout << "isti" << endl;
	else
		cout << "razliciti" << endl;
}
