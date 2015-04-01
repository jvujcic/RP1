template<type T>
struct Stack {
    T podaci[100];
    int vrh;

    Stack() ....
    void push(T x) ...
    T top() ...
};

main() {
    Stack<int> S;
    Stack<string> S;
}

