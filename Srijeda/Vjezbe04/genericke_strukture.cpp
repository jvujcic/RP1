template<class T>
struct Stack {
    T podaci[100];
    int vrh;

    void push(T x) ....
    T top() ....
    void pop() ....
};

int main() {
    Stack<int> S;
    Stack<string> S;
}