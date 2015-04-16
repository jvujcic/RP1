#include <iostream>
#include <vector>

using namespace std;

template<class T>
struct Vozilo {
    int x, y;
    T v;
    vector<pair<string, int> > pomaci;
    int ukupni_put;
    double ukupno_vrijeme;

    Vozilo(T brzina) {
        x = y = 0;
        v = brzina;
        ukupni_put = 0;
        ukupno_vrijeme = 0;
    }

    void promijeniBrzinu(T brzina) {
        v = brzina;
    }

    void pomak(string p) {
        if (p == "lijevo") x--;
        else if (p == "desno") x++;
        else if (p == "gore") y++;
        else if (p == "dolje") y--;

        if(!pomaci.empty() && pomaci.back().first == p)
            pomaci.back().second++;
        else
            pomaci.push_back(make_pair(p, 1));

        ukupni_put++;
        ukupno_vrijeme += 1. / v;
    }

    void ispisiNaEkran() {
        cout << x << " " << y << endl;
        for(int i = 0; i < pomaci.size(); i++)
            cout << pomaci[i].second << " " << pomaci[i].first << " ";

        cout << endl;
    }

    double prosjecnaBrzina() {
        return ukupni_put / ukupno_vrijeme;
    }

    void izbjegniSudar(Vozilo *V) {
        if (x == V->x && y == V->y) {
            pomak("gore");
            V->pomak("desno");
        }
    }

    ~Vozilo() {
        cout << "unisteno vozilo " << x << " " << y << endl;
    }
};

int main() {
    Vozilo<int> A(2);
    A.promijeniBrzinu(5);
    A.pomak("gore");
    A.pomak("gore");
    A.pomak("desno");
    A.pomak("lijevo");
    A.pomak("lijevo");
    A.promijeniBrzinu(2);
    A.pomak("lijevo");
    A.pomak("dolje");
    A.pomak("gore");
    A.ispisiNaEkran();
    cout << A.prosjecnaBrzina() << endl;

    Vozilo<int> B(2);
    B.pomak("lijevo");
    B.pomak("lijevo");
    B.pomak("gore");
    B.pomak("gore");
    B.ispisiNaEkran();
    A.izbjegniSudar(&B);
    return 0;
}