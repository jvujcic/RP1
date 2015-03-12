#include "stack.h"
#include <iostream>

using namespace std;

int main( void ) {
    stack S;
    makeNull( &S );
    cout << S.vrh << endl; // -1
    push( &S ,  3 ); 
    push( &S ,  5 );
    int a =  top( S );
    cout << a << endl; // 5
    pop( &S );
    a =  top( S );
    cout << a << endl; // 3
    return 0;
}