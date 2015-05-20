#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Cetverokut {
protected:
	float a, b, c, d;

public:

	Cetverokut(float a, float b, float c, float d) : a(a), b(b), c(c), d(d) {
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
/*	Cetverokut A(1, 2, 2, 3);
	//Pravokutnik P(1, 2);
	//cout << A-1
.opseg() << endl;
	//Kvadrat K(5);
	cout << K.opseg() << endl;
	Paralelogram par(1,2,30);
	
	Cetverokut C1 = K;
	//Cetverokut C2 = par;
	Cetverokut &C2 = K;
	Cetverokut *C3 = &K;
	
	cout << C1.povrsinCetverokuta() << endl; // ne radi virtualna funkcija
	cout << C2.povrsina() << endl; //radi virtualna
	cout << C3->povrsina() << endl; //radi virtualna
	
	// Kvadrat K1 = A;  -> ovo ne
*/	
	vector<Cetverokut *> nizCetverokuta(5);
	
	nizCetverokuta[0] = new Kvadrat(5);
	nizCetverokuta[1] = new Paralelogram(1, 2, 1.2);
	nizCetverokuta[2] = new Cetverokut(1, 2, 3, 1);
	nizCetverokuta[3] = new Pravokutnik(1, 2);
	nizCetverokuta[4] = new Cetverokut(1, 3, 1, 2);
	
	for(int i = 0; i < 5; i++)
		cout << nizCetverokuta[i]->povrsina() << endl;
	
	for(int i = 0; i < 5; i++)
		delete nizCetverokuta[i];
		
	return 0;
}
