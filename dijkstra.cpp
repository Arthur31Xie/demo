//============================================================================
// Name        : dijkstra.cpp
// Author      : Zhaoxin Xie
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

#define MAXN 1000
#define MAXINT 65535

int main()
{
	int a[MAXN][MAXN],ans[MAXN];
	bool b[MAXN];
	int n,i,j,k,source;
	int min,l;
	fstream f;

	f.open("input.txt",ios::in);

	f >> n;
	for (i=0;i<n;i++)
	  for (j=0;j<n;j++)
	  {
		f >> a[i][j];
		if (a[i][j]==0)
		{
			a[i][j]=MAXINT;
		}
	  }
	f >> source;
	source--;

	ans[source]=0;
	b[source]=true;
	for (i=0;i<source;i++)
	{
		ans[i]=a[source][i];
		b[i]=false;
	}
	for (i=source+1;i<n;i++)
	{
		ans[i]=a[source][i];
		b[i]=false;
	}

	k=1;
	while (k<n)
	{
		min=MAXINT;
		for (i=0;i<n;i++)
		{
			if ((b[i]==false)&&(ans[i]<min))
			{
				min=ans[i];
				l=i;
			}
		}

		if (min<=ans[l])
		{
			ans[l]=min;
			b[l]=true;
			for (j=0;j<n;j++)
			{
				if ((ans[l]+a[l][j])<ans[j])
				{
					ans[j]=ans[l]+a[l][j];
				}
			}
		}

		k++;
	}

	for (i=0;i<n;i++)
	{
		cout << ans[i] << endl;
	}

	f.close();
	return 0;
}
