/*
 * stack.cpp
 *
 *  Created on: 2015年11月2日
 *      Author: user
 */

#include "stack.h"
#include<iostream>
#include<stdio.h>
using namespace std;

Stack::Stack()
{
	top=-1;
}

Stack::~Stack()
{}

bool Stack::empty()
{
	if (top==-1)
		{return true;}
	else
		{return false;}
}

int Stack::take()
{
	if (top==-1)
		{return -1;}
	top--;
	return stack[top+1];
}

void Stack::put(int x)
{
	top++;
	stack[top]=x;
}
