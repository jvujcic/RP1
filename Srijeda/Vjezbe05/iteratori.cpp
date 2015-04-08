#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> L(5, 1);

    // ne radi
    // for(int i = 0; i < L.size(); i++)
    //     cout << L[i] << endl;

    list<int>::iterator it = L.begin();
    for( ; it != L.end(); ++it) {
        cout << *it << endl;
    }

    int i = 0;
    for (it = L.begin(); it != L.end(); ++it) {
        *it = i;
        i++;
    }

    for(it = L.begin(); it != L.end(); ++it) {
        cout << *it << endl;
    }

    for(it = L.begin(); it != L.end(); ) {
        if(*it == 2) {
        //     list<int>::iterator it_temp;
        //     it_temp = it;
        //     it_temp++;
            it = L.erase(it);
            // it = it_temp;
        }
        else ++it;
    }

    for(it = L.begin(); it != L.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}