#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> S;
    S.insert(3);
    S.insert(5);
    S.insert(1);
    S.insert(5);

    cout << S.count(5) << endl;
    cout << S.count(7) << endl;

    int polje[] = {9, 11, 3, 4, 2};
    S.insert(polje + 1, polje + 5);

    set<int>::iterator it, tmp_it;

    for(it = S.begin(); it != S.end(); ++it)
        cout << *it << " ";
    cout << endl;

    S.erase(3);
    for(it = S.begin(); it != S.end(); ++it)
        cout << *it << " ";
    cout << endl;

    //brisemo sve neparne elemente
    for(it = S.begin(); it != S.end();) {
        if(*it % 2 == 1) {
            //S.erase(it++);
            tmp_it = it;
            tmp_it++;
            S.erase(it);
            it = tmp_it;
        }
        else ++it;
    }
    for(it = S.begin(); it != S.end(); ++it)
        cout << *it << " ";
    cout << endl;

    it = S.find(2);
    if(it == S.end())
        cout << "Ne postoji broj 2" << endl;
    else
        S.erase(it);

    for(it = S.begin(); it != S.end(); ++it)
        cout << *it << " ";
    cout << endl;

    it = S.find(4);
    *it = 5;
    
    return 0;
}