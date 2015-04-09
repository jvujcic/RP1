#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> M;
    M[5] = "pmf";
    M[1] = "rp1";

    map<string, int> M1;
    M1["pmf"] = 11;
    M1["rp"] = 2;
    M1["rp"] = 3;
    M1["a"] = 11;
    M1["abc"];   // postavi na nulu

    cout << M[5] << endl;
    cout << M[2] << endl; // prazan string
    cout << M1["b"] << endl;

    map<string, int>::iterator it;

    it = M1.find("def");
    if(it == M1.end())
        cout << "Nema kljuca def" << endl;
    else
        cout << M1["def"] << endl;

    it = M1.find("pmf");
    if(it == M1.end())
        cout << "Nema pmf" << endl;
    else
        cout << M1["pmf"] << endl;

    //ispisati sve u mapi
    // it je tipa pair<string, int>
    for(it = M1.begin(); it != M1.end(); ++it)
        cout << it->first << " " << it->second << endl;

    // zelimo izbrisati sve kljuceve parne duljine
    for(it = M1.begin(); it != M1.end();) {
        if(it->first.size() % 2 == 0)
            M1.erase(it++);
        else
            ++it;
    }

    for(it = M1.begin(); it != M1.end(); ++it)
        cout << it->first << " " << it->second << endl;
    return 0;
}