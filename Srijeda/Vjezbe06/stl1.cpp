#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> M;
    M[13] = "pmf";
    cout << M[13] << endl;
    cout << M[12] << endl;

    map<string, int> M1;
    M1["rp1"] = 5;
    M1["aaa"] = 5;

    map<string, int>::iterator it;
    it = M1.find("pmf");
    if(it == M1.end()) 
        cout << "Ne postoji pmf" << endl;
    else
        cout << M1["pmf"] << endl;

    it = M1.find("rp1");
    if(it == M1.end()) 
        cout << "Ne postoji rp1" << endl;
    else
        //cout << M1["rp1"] << endl;
        cout << it->first << " " << it->second << endl;
    return 0;
}