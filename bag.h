/*
 * bag.h
 *
 *  Created on: 2015年11月2日
 *      Author: user
 */

#ifndef BAG_H_
#define BAG_H_

#define MAX 100

class Bag
{
private:
	int bags[MAX];
	int size;
public:
	Bag();
	virtual ~Bag();
	bool empty();
	int take();
	void put(int x);
};

#endif /* BAG_H_ */
