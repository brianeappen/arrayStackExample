/*
 * arrayStack.h
 *
 *  Created on: Mar 13, 2019
 *      Author: brianeappen
 */

#ifndef ARRAYSTACK_H_
#define ARRAYSTACK_H_

#include <iostream>
#include <array>

using namespace std;

#define SIZE 5


int arr[SIZE];
int top = -1;

bool isempty() //CHECKS TO SEE IF STACK IS EMPTY
{
	if(top==-1)
		return true;
	else
		return false;
}


void push (int value){ //INSERTS A VALUE
	if (top == SIZE - 1)
	{
		cout << "Stack is full \n";
	}
	else
	{
		top++;
		arr[top] = value;
	}
}



void pop() //REMOVES LAST ADDED VALUE FROM STACK
{
	if (isempty()){
		cout << "Stack is empty \n";
	}
	else
	{
		top--;
	}
}

void show_top()
{
	if(isempty())
		cout<<"Stack is empty!\n";
	else
		cout<<"Top element is: "<<arr[top]<<"\n";

}

void displayStack()
{
	if(isempty())
	{
		cout<<"Stack is empty!\n";
	}
	else
	{
		for(int i=0 ; i<=top; i++)
			cout<<arr[i]<<" ";

		cout<<"\n";

	}

}

void empty(){

	top = 0;
	arr[top] = 0;


	cout<<"Stack is now empty!\n";
}





#endif /* ARRAYSTACK_H_ */
