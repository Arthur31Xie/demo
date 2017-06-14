/*
 * myClientTest3.cpp
 *
 *  Created on: 2015年11月2日
 *      Author: user
 */

#include "stack.h"
#include<iostream>
#include<stdio.h>

#include "myClientTest3.h"
using namespace std;

Client::Client()
{}

Client::~Client()
{}

void Client::empty()
{
	if (s.empty())
		{cout << "the stack is empty." << endl;}
	else
		{cout << "the stack is not empty." << endl;}

	if (b.empty())
		{cout << "the bag is empty." << endl;}
	else
		{cout << "the bag is not empty." << endl;}
}

void Client::take()
{
	int ans1,ans2;

	ans1=s.take();
	if (ans1==-1)
		{cout << "the stack is empty, nothing can be took." << endl;}
	else
		{cout << "we took the item " << ans1 << " from the stack." << endl;}

	ans2=b.take();
	if (ans2==-1)
		{cout << "the bag is empty, nothing can be took." << endl;}
	else
		{cout << "we took the item " << ans2 << " from the bag." << endl;}
}

void Client::put(int x)
{
	s.put(x);
	cout << "stack: done." << endl;

	b.put(x);
	cout << "bag: done." << endl;
}

