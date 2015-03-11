struct stack {
    int podaci[100];
    int vrh;
};

void makeNull(stack *S);
void push(stack *S, int x);
int top(stack S); // ne treba pokazivac jer nista se nije promijenilo u stacku, samo citamo iz stacka
void pop(stack *S);