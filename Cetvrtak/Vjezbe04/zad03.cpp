,#include <iostream>

using namespace std;

template<class T>
void mySort(T *polje, int n) {
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++) 
            if(polje[j] < polje[i]) {
                T tmp = polje[i];
                polje[i] = polje[j];
                polje[j] = tmp;
            }
}

int main() {
    int polje[4] = {3, 1, 2, 4};
    mySort(polje, 4);
    for(int i = 0; i < 4; i++) 
        cout << polje[i] << endl;
}