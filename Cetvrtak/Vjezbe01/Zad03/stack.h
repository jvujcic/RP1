struct stack {
    int podaci[100];
    int vrh;
};

void makeNull(stack *S);
void push(stack *S, int x);
int top(stack S);
void pop(stack *S);