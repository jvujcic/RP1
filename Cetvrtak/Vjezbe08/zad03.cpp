#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Lik {
protected:
    int brojStranica;
public:
    Lik() { cout << "Kreiran je lik" << endl; }
    virtual ~Lik() { cout << "Unisten je lik" << endl; }

    virtual float opseg() = 0;
    virtual float povrsina() = 0;
};

class Krug : public Lik {
private:
    float r;
public:
    Krug(float r) : r(r) {
        brojStranica = -1;
        cout << "Kreiran je krug" << endl;
    }
    ~Krug() {
        cout << "Unisten je krug" << endl;
    }

    float opseg() { return 2 * r * 3.14; }
    float povrsina() { return r * r * 3.14; }
};

class Cetverokut : public Lik{
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
    Paralelogram(float a, float b, float kut) : Cetverokut(a, b, a, b), kut(kut) {
        cout << "Kreiran je paralelogram" << endl;
    }
    ~Paralelogram() {
        cout << "Uniseten je pralelogram" << endl;
    }

    float povrsina() { return a * b * sin(kut); }
};


int main() {
    vector<Lik *> polje(5);

    polje[0] = new Kvadrat(3);
    polje[1] = new Cetverokut(1, 3, 2, 4);
    polje[2] = new Paralelogram(1, 2, 1.7);
    polje[3] = new Pravokutnik(3, 4);
    polje[4] = new Krug(1);

    for(int i = 0; i < 5; i++)
        cout << polje[i]->opseg() << " " << polje[i]->povrsina() << endl;

    for(int i = 0; i < 5; i++)
        delete polje[i];

	return 0;
}
