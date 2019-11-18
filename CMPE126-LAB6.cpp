//============================================================================
// Name        : arrayStackExample.cpp
// Author      : Brian Eappen
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "arrayStack.h"

using namespace std;

int main() {

	push(2);
	push(3);

	cout << "the output is: \n";

	displayStack();

	pop();




	show_top();

	empty();

	cout << "the output is: \n";

	displayStack();






	return 0;
}
