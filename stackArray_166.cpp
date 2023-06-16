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

	}

};