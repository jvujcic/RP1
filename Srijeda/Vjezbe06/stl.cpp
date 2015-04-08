#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> S;
    S.insert(5);
    S.insert(3);
    S.insert(5);
    S.insert(7);
    cout << S.count(5) << endl; // 1
    cout << S.count(2) << endl; // 0
    S.erase(5);
    cout << S.count(5) << endl; // 0

    int polje[] = { 10, 9, 3, 8, 1 };
    S.insert(polje, polje + 5);
    cout << S.count(1) << endl;

    set<int>::iterator it;
    for(it = S.begin(); it != S.end(); ++it)
        cout << *it << " ";

    cout << endl;
    // S.erase(9);
    it = S.find(9);
    if( it == S.end())
        cout << "Ne postoji" << endl;
    else
        S.erase(it);

    cout << S.count(9) << endl;
    return 0;
}