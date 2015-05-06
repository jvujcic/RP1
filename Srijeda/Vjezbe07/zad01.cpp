#include <iostream>
using namespace std;

template <class Type>
struct list
{
    Type podaci[100];
    int duljina;
    
    list () { duljina = 0; }
    void push_back (Type x) { podaci[duljina++] = x; }
    
    struct iterator
    {
        Type *gdje;
        
        iterator (Type *ptr) { gdje = ptr; }

        Type data() { return *gdje; }
        //next
        //isEqual
    };
    
    iterator begin() { iterator rez(&podaci[0]); return rez; }
    //end
};

int main ( void )
{
    // list<int> L;
    // L.push_back(5); L.push_back(7);

    // list<int>::iterator li = L.begin();
    // while (!li.isEqual(L.end()))
    // {
    //     cout << li.data() << " ";
    //     li = li.next();
    // }

    return 0;
} 