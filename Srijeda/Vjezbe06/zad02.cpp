#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string> S;
    string str;
    while(1) {
        cin >> str;
        S.insert(str);
        if (str == "kraj") break;
    }

    cout << "Uneseno je " << S.size() << " razlictih stringova" << endl;

    set<string>::iterator it, tmp;

    for(it = S.begin(); it != S.end(); ++it)
        cout << *it << " ";
    cout << endl;

    for(it = S.begin(); it != S.end();) {
        if(it->size() % 2 == 0) {
            tmp = it;
            tmp++;
            S.erase(it);
            it = tmp;
            //S.erase(it++);
        }
        else ++it;
    }

    for(it = S.begin(); it != S.end(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}