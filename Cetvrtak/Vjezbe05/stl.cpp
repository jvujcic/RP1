#include <vector>
#include <iostream>
#include <list>

using namespace std;

int main() {
    vector<int> B;  // prazan vector(polje)
    B.push_back(1);
    B.push_back(2);
    B.push_back(5);

    // for(int i = 0; i < B.size(); i++)
    //     cout << B[i] << endl;

    vector<int> C(3);
    C[0] = 1; C[1] = 2; C[2] = 5;

    if(B == C) cout << "Isti";
    else cout << "Razliciti";

    vector<int> D;
    D = C;

    for(int i = 0; i < D.size(); i++)
        cout << D[i] << endl;

    list<string> L;
    L.push_back("rp1");
    L.push_back("pmf");
    L.push_back("la");

    list<string>::iterator it;

    for(it = L.begin(); it != L.end(); ++it)
        cout << *it << endl;

    for(it = L.begin(); it != L.end(); ++it)
        if(*it == "la") {
            L.insert(it, "ma");
            break;
        }

    for(it = L.begin(); it != L.end(); ++it)
        cout << *it << endl;

    for(it = L.begin(); it != L.end(); ) {
        if(*it == "pmf") {
            // list<string>::iterator temp;
            // temp = it;
            // ++temp;
            it = L.erase(it);
            // it = temp;
        }
        else ++it;
    }

    for(it = L.begin(); it != L.end(); ++it)
        cout << *it << endl;
}