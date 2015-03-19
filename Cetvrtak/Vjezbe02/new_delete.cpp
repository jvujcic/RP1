#include <iostream>
#include <cstdlib>

using namespace std;

struct tocka {
    int x, y;

    tocka() {   //postavlja u ishodiste
       x = 0;
       y = 0; 
       cout << "Kreirana tocka " << x << ", "  << y << endl;
   }

    tocka(int a, int b) {
        x = a;
        y = b;
        cout << "Kreirana tocka " << x << ", "  << y << endl;
    }

    tocka simetricna() {
        tocka sim(-x, -y);
        // sim.x = -x;
        // sim.y = -y;
        return sim;
    } 

    ~tocka() {  //ispisuje koordinate tocke
        cout << "Unistena tocka " << x << ", "  << y << endl;
    }   
};

int main() {
    tocka *A, *B, *polje;
    A = (tocka *) malloc(10 * sizeof(tocka));
    free(A);
    A = new tocka;
    delete A;
    B = new tocka(1, 1);
    delete B;
    polje = new tocka[3];
    polje[0].x = 2;
    polje[0].y = 2;
    delete [] polje;
}