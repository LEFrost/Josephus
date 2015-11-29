#include<iostream>
using namespace std;
const int peopleNum=100;
const int outNum = 3;
void main()
{
	int a[peopleNum];
	for (int i = 0; i < peopleNum; i++)
		a[i] = i + 1;
	cout << "参加游戏的人有：";
	for (int i = 0; i < peopleNum; i++)
		cout << a[i]<<" ";
	cout << endl;
	int z = -1;
	int x = 0;
	int temp = peopleNum;
	cout << "淘汰的人:";
	while (1)
	{
		z = (z + 1) % peopleNum;
		if (a[z] != 0)
			x++;
		
		if (x == outNum)
		{
			cout <<a[z]<<" ";
			a[z] = 0;
			temp--;
			x = 0;
		}
		
		if (temp <= 1)
			break;
	
		
	}
	cout << endl;
	for (int i = 0; i < peopleNum; i++)
		if (a[i]>0)
			cout <<"胜利者:"<< a[i];

}