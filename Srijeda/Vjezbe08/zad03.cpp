#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Lik {
protected:
	int brojStranica;

public:
	virtual float opseg() = 0; 
	virtual float povrsina() = 0;
	
	Lik() {
		cout << "Kreiran je lik" << endl;
	}
	virtual ~Lik() {
		cout << "Unisten je lik" << endl;
	}
};

class Krug : public Lik {
private:
	float polumjer;
public:
	Krug(float r) : polumjer(r) {
		brojStranica = -1;
		cout << "Kreiran je krug" << endl;
	}
	~Krug() {
		cout << "Unisten je krug" << endl;
	}
	
	float opseg() { return 2 * polumjer * 3.14; }
	float povrsina() { return polumjer * polumjer * 3.14; }
};

class Cetverokut : public Lik {
protected:
	float a, b, c, d;

public:

	Cetverokut(float a, float b, float c, float d) : a(a), b(b), c(c), d(d) {
		brojStranica = 4;
		cout << "Kreiran je cetverokut: " << a << " " << b << " " << c << " " << d << endl;
	}
	
	virtual ~Cetverokut() {
		cout << "Unisten je je cetverokut: " << a << " " << b << " " << c << " " << d << endl;
	}
	
	float opseg() { return a + b + c + d; }
	
	virtual float povrsina() { return -1; }
};

class Pravokutnik : public Cetverokut {
public:
	Pravokutnik(float a, float b) : Cetverokut(a, b, a, b) {
		cout << "Kreiran je pravokutnik: " << a << " " << b << endl;
	}
	
	~Pravokutnik() {
		cout << "Unisten je pravokutnik: " << a << " " << b << endl;
	}
	
	float povrsina() { return a * b; }
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

class Paralelogram : public Cetverokut {
private:	
	float kut;
public:
	Paralelogram(float a, float b, float k) : Cetverokut(a, b, a, b), kut(k) {
		cout << "Kreiran je paralelogram" << endl;
	}
	~Paralelogram() {
		cout << "Unisten je paralelogram" << endl;
	}
	
	float povrsina() { 
		return a * b * sin(kut);
	}
};

int main() {
	// Lik L;  // error

	vector<Lik *> nizLikova(5);
	
	nizLikova[0] = new Kvadrat(5);
	nizLikova[1] = new Paralelogram(1, 2, 1.2);
	nizLikova[2] = new Krug(1);
	nizLikova[3] = new Pravokutnik(1, 2);
	nizLikova[4] = new Cetverokut(1, 3, 1, 2);
	
	for(int i = 0; i < 5; i++)
		cout << nizLikova[i]->povrsina() << endl;
	
	for(int i = 0; i < 5; i++)
		delete nizLikova[i];
		
	return 0;
}
