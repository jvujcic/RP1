#include <iostream>
#include <list>

using namespace std;

int main() {
    string str;
    list<string> L;
    while(1) {
        cin >> str;
        if(str == "kraj") break;
        L.push_back(str);
    }

    list<string>::iterator it;
    //provjera
    for(it = L.begin(); it != L.end(); ++it)
        cout << *it << " ";

    for(it = L.begin(); it != L.end(); ++it) {
        string rijec(*it);
        for(int i = 0; i < rijec.size(); ++i) {
            string tmp(1, rijec[i]);
            L.insert(it, tmp); //moze pomocu substr
        }
    }

    for(it = L.begin(); it != L.end(); ++it)
        cout << *it << " ";
    return 0;
}