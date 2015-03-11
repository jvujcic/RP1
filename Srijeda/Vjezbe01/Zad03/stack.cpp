#include "stack.h"

void makeNull(stack *S) {
    S->vrh = -1;
}

void push(stack *S, int x) {
    if(S->vrh == 99) return;
    S->vrh++;
    S->podaci[S->vrh] = x;
}

int top(stack S) {
    if(S.vrh == -1) return -1; //vratiti vrijednost koja oznacava da je stog prazan
    return S.podaci[S.vrh];
}

void pop(stack *S) {
    if(S->vrh == -1) return;
    S->vrh--;
}
