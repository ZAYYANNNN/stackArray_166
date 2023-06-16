#include  <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	StackArray() { //construktor
		top = -1;

	}

	int push(int element) {
		if (top == 4) {
			cout << "Number of data exceeds the limit." << endl;
			return 0;

		}
		top++;
		stack_array[top] = element;	//step 3
		cout << endl;
		cout << element << "ditambahkan" << endl;

		return element;
	}

	void pop() {
		if (empty()) {//step 1
			cout << "\nStack is empty. cannot pop." << endl;	//1.a
			return;	//1b

		}

		cout << "\nThe popped element is: " << stack_array[top] << endl;	//step 2
		top--;	//step 3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}

};

int main() {
	StackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\n***Stack Menu***\n";
		cout << "1.Push\n";
		cout << "2.Pop\n";
		cout << "e.Display\n";
		cout << "4.Exit\n";
		cin >> ch;
	}
}

