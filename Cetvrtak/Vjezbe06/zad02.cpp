#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> S;
    string str;

    while(1) {
        cin >> str;
        S.insert(str);
        if(str == "kraj") break;
    }

    cout << "Broj stringova: " << S.size() << endl;

    set<string>::iterator it;
    for(it = S.begin(); it != S.end();) {
        if(it->size() % 2 == 0) {
            S.erase(it++);
        }
        else ++it;
    }

    for(it = S.begin(); it != S.end(); ++it)
        cout << *it << endl;
    return 0;
}