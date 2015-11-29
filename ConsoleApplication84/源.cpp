#include<iostream>
using namespace std;
const int peopleNum = 100;//参加人数
const int interval = 3;//每轮报数
void main()
{
	int a[peopleNum];
	int end = peopleNum, n = 0, i = 0;
	for (int i = 0; i < peopleNum; i++)
		a[i] = i + 1;
	cout << "参加学生的人有：";
	for (int i = 0; i < peopleNum; i++)
	{
		cout << a[i] << " " ;
	}
	cout << endl;
			cout << "淘汰：";
	while (1)
	{
		if (a[i] > 0)
			n++;
		if (n == interval)
		{
			cout << a[i] << " ";
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
	for (int i = 0; i < peopleNum; i++)
		if (a[i]>0)
			cout <<"胜利者是："<<a[i];
}