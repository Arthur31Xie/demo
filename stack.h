/*
 * stack.h
 *
 *  Created on: 2015年11月2日
 *      Author: user
 */

#ifndef STACK_H_
#define STACK_H_

#define MAX 100

class Stack
{
private:
	int stack[MAX];
	int top;
public:
	Stack();
	virtual ~Stack();
	bool empty();
	int take();
	void put(int x);
};

#endif /* STACK_H_ */
