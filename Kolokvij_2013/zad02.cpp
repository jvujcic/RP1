#include <iostream>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <cstdio>

using namespace std;

int main() {
    freopen("test.txt", "r", stdin);

    map<string, pair<set<string>, int> > mapaKolegija;

    while(true) {
        string prethodnik;
        cin >> prethodnik;
        if(prethodnik == "kraj") break;
        mapaKolegija[prethodnik];

        while(true) {
            string nasljednik;
            cin >> nasljednik;
            if(nasljednik == "x") break;
            mapaKolegija[prethodnik].first.insert(nasljednik);
        }

        int br_studenata;
        cin >> br_studenata;
        mapaKolegija[prethodnik].second = br_studenata;
    }

    string kolegij;
    cin >> kolegij;
    map<string, pair<set<string>, int> >::iterator mit;
    set<string>::iterator sit;

    int br_studenata = 0;
    int br_kolegija = 0;

    for(mit = mapaKolegija.begin(); mit != mapaKolegija.end(); ++mit) {
        if(mit->second.first.count(kolegij) != 0) {
            cout << mit->first << " ";
            br_kolegija++;
            br_studenata += mit->second.second;
        }
    }
    cout << endl;
    if(br_kolegija != 0)
        cout << double(br_studenata) / br_kolegija;
    return 0;
}