#include<iostream>
using namespace std;
const int peopleNum = 10;//参加人数
const int interval = 2;//每轮报数
void main()
{
	int a[peopleNum];
	int end = peopleNum, n = 0, i = 0;
	for (int i = 0; i < peopleNum; i++)
		a[i] = i + 1;
	for (int i = 0; i < peopleNum; i++)
	{
		cout << "参加学生的人有：";
		cout << a[i] << " " << endl;
	}
	while (1)
	{
		if (a[i] > 0)
			n++;
		if (n == interval)
		{
			cout << "淘汰" << a[i] << " ";
			a[i] = 0;
			end--;
			n = 0;
		}
		i++;
		if (i >= peopleNum)
			i = i - peopleNum - 1;
		if (end == 1)
			break;
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
		if (a[i]>0)
			cout << a[i];
}