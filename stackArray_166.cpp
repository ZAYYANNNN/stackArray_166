#include  <iostream>
#include <string>

using namespace std;

class stack {
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

};