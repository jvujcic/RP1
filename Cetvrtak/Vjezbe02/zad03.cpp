#include <iostream>

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
    tocka A, B(2, 3);
    tocka C = B.simetricna();
}