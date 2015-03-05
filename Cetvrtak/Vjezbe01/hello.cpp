#include <iostream>

using namespace std;

int main() {
    // printf("Hello World!\n"); -> C-ovski nacin
    cout << "Hello World!" << endl;

    int x;
    // scanf("%d", &x); -> C-ovski nacin
    float f;
    char hello[10] = "Hello: ";
    cin >> x >> f;
    cout << hello << endl << x + 1 << ", " << f - 1 << endl;
    return 0;
}