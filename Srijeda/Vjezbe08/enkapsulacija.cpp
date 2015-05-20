#include <iostream>

using namespace std;

class Stack {
private:
	int podaci[100];
	int br;
	
public:
	Stack() { br = -1; }
	
	Stack& push(int x) {
		br++;
		podaci[br] = x;
		return *this;
	}
	int top() { return podaci[br]; }
	// top, pop, empty, ...
};

int main() {
	Stack S;
	S.push(2).push(3);
	//S.br = 10;					// zelimo zabraniti
	cout << S.top() << endl;
	return 0;
}
