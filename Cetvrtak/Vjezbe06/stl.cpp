#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    vector<list<int> > V(2);
    V[0].push_back(1);
    V[1].push_back(5);
    V[1].push_back(3);

    list<int>::iterator it;

    for(it = V[1].begin(); it != V[1].end(); ++it)
        cout << *it << endl;

    return 0;
}