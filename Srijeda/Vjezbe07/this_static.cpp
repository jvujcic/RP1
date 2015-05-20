#include <iostream>
#include <list>

using namespace std;

struct MyStruct {
	int x;
	static int br;
	static list<MyStruct *> listaObjekata;
	
	MyStruct() { 
		br++; 
		listaObjekata.push_back(this);
	}
	
	~MyStruct() {
		br--;
		list<MyStruct *>::iterator it;
		for(it = listaObjekata.begin(); it != listaObjekata.end(); ++it) {
			if(this == *it) {
				listaObjekata.erase(it);
				break;
			}
		}
	}
	
	void setX(int x) {
		this->x = x;
	}
	
	void static ispisiBrojKreiranihObjekata() {
		cout << br << endl;
	}
	
};

int MyStruct::br = 0;
list<MyStruct *> MyStruct::listaObjekata;

void ispisiBrojKreiranihObjekata() {
	cout << MyStruct::br << endl;
}

int main() {
	MyStruct A, B, C;
	A.setX(2);   // implicitno proslijedimo pointer na A,  - this -
	B.setX(3);
	C.setX(4);
	
	cout << A.br << endl;
	
	ispisiBrojKreiranihObjekata();
	
	MyStruct::ispisiBrojKreiranihObjekata();
	
	list<MyStruct *>::iterator it;
	
	for(it = MyStruct::listaObjekata.begin(); it != MyStruct::listaObjekata.end(); ++it) {
		cout << (*it)->x << " ";
	}
	
	return 0;
}
