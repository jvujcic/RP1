#include <iostream>

using namespace std;

template<class T>
struct list {
    T podaci[100];
    int duljina;
    list() { duljina = 0; }

    struct iterator {
        T *ptr;
        iterator(T *p) { ptr = p; }
        T data() { return *ptr; }
        iterator next() { return iterator(ptr + 1); }
        bool isEqual(iterator it) {
            return ptr == it.ptr;
        }
    };

    iterator begin() {
        return iterator(&podaci[0]);
    }

    iterator end() {
        return iterator(&podaci[duljina]);
    }

    void push_back(T x) {
        podaci[duljina] = x;
        duljina++;
    }
};

int main() {
    list<int> L;
    L.push_back( 5 );
    L.push_back( 7 );

    list<int>::iterataor li = L.begin();
    
    while(!li.isEqual(L.end())) {
        cout << li.data() << " " ;
        li = li.next();
    }
    return 0;
}