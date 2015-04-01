#include <iostream>

using namespace std;



int main() {
    int polje[3] = {2, 1, 3};
    ::sort(polje, 3);
    for(int i = 0; i < 3; i++)
        cout << polje[i] << endl;
}