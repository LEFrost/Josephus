#include<iostream>
using namespace std;
const int peopleNum = 10;//�μ�����
const int interval = 2;//ÿ�ֱ���
void main()
{
	int a[peopleNum];
	int end = peopleNum, n = 0, i = 0;
	for (int i = 0; i < peopleNum; i++)
		a[i] = i + 1;
	for (int i = 0; i < peopleNum; i++)
	{
		cout << "�μ�ѧ�������У�";
		cout << a[i] << " " << endl;
	}
	while (1)
	{
		if (a[i] > 0)
			n++;
		if (n == interval)
		{
			cout << "��̭" << a[i] << " ";
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