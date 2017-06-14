/*
 * bag.cpp
 *
 *  Created on: 2015年11月2日
 *      Author: user
 */

#include "bag.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

Bag::Bag()
{
	size=-1;
}

Bag::~Bag()
{}

bool Bag::empty()
{
	if (size==-1)
		{return true;}
	else
		{return false;}
}

int Bag::take()
{
	int i,j,ans;

	if (size==-1)
		{return -1;}

	size--;
	srand(time(0));
	i=rand()%(size+1);
	ans=bags[i];

	for (j=i;j<=size;j++)
		{bags[j]=bags[j+1];}
	return ans;
}

void Bag::put(int x)
{
	size++;
	bags[size]=x;
}



