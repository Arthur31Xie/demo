/*
 * main.cpp
 *
 *  Created on: 2015年11月2日
 *      Author: user
 */

#include<iostream>
#include<string>

#include "myClientTest3.h"
using namespace std;

int main()
{
	std::string commend;
	int x;
	Client client;

	cout << "Please type the commend (empty, take, put or exit): " << endl;
	cin >> commend;
	while (commend!="exit")
	{
		if (commend=="empty")
			{client.empty();}
		if (commend=="take")
			{client.take();}
		if (commend=="put")
		{
			cout << "Please input the number that you want put:" << endl;
			cin >> x;
			client.put(x);
		}
		cout << "Please type the commend (empty, take, put or exit): " << endl;
		cin >> commend;
	}

	return 0;
}
