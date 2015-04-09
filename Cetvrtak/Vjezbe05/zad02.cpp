#include <iostream>
#include <list>

using namespace std;

int main() {
    list<string> L;
    string str;

    while(1) {
        cin >> str;
        if(str == "kraj") break;
        L.push_back(str);
    }

    list<string>::iterator it;
    
    //test
    for(it = L.begin(); it != L.end(); ++it)
        cout << *it << " ";
    cout << endl;

    for(it = L.begin(); it != L.end(); ++it) {
        string rijec(*it);
        for(int i = 0; i < rijec.size(); ++i) {
            string slovo(1, rijec[i]);
            L.insert(it, slovo); //moze i pomocu substr
        }
    }

    for(it = L.begin(); it != L.end(); ++it)
        cout << *it << " ";
    cout << endl;
    
    return 0;
}