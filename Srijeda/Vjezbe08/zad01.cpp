#include <iostream>

using namespace std;

class Cetverokut {
protected:
	float a, b, c, d;

public:
	Cetverokut(float a, float b, float c, float d) : a(a), b(b), c(c), d(d) {
		cout << "Kreiran je cetverokut: " << a << " " << b << " " << c << " " << d << endl;
	}
	
	~Cetverokut() {
		cout << "Unisten je je cetverokut: " << a << " " << b << " " << c << " " << d << endl;
	}
	
	float opseg() { return a + b + c + d; }
};

class Pravokutnik : public Cetverokut {
public:
	Pravokutnik(float a, float b) : Cetverokut(a, b, a, b) {
		cout << "Kreiran je pravokutnik: " << a << " " << b << endl;
	}
	
	~Pravokutnik() {
		cout << "Unisten je pravokutnik: " << a << " " << b << endl;
	}
	
};

class Kvadrat : public Pravokutnik {
public:
	Kvadrat(float a) : Pravokutnik(a, a) {
		cout << "Kreiran je kvadrat: " << a << endl;
	}
	
	~Kvadrat() {
		cout << "Unisten je kvadrat: " << a << endl;
	}
};

int main() {
	//Cetverokut A(1, 2, 2, 3);
	//Pravokutnik P(1, 2);
	//cout << A.opseg() << endl;
	Kvadrat K(5);
	cout << K.opseg() << endl;
	return 0;
}
