/*
 * myClientTest3.h
 *
 *  Created on: 2015年11月2日
 *      Author: user
 */

#include "stack.h";
#include "bag.h";

#ifndef MYCLIENTTEST2_H_
#define MYCLIENTTEST2_H_

class Client
{
private:
	Stack s;
	Bag b;
public:
	Client();
	virtual ~Client();
	void empty();
	void take();
	void put(int x);
};

#endif /* MYCLIENTTEST2_H_ */
