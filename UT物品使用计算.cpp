#include<iostream>
using namespace std;
//������C++ 
int main()
{
	int items[8] = {1,2,3,4,5,6,7,8};
	int a, b, s;
	cout << "������ʹ�õ���Ʒ���(0~7)" << endl;
	cin >> b;
	if(b > 7)
	{
		cerr << "ERROR!δ֪����Ʒ���!" << endl;
		return 0;
	}
	else
	{
		items[b] = 0;
	}
	for(int i = 0 ; i < 8 ; i++)
	{
		if(items[i] == 0)
		{
			a = i;
			for(int j = i + 1 ; j < 8 ; j++)
			{
				items[i] = items[j];
				i++;
			}
			i = a;
		}
		s = i;
	}
	while(s < 8)
	{
		items[s] = 0;
		s++;
	}
	for(int c = 0 ; c < 8 ; c++)
	{
		cout << items[c] << " , ";
	}
	return 0;
}
//������GML 
/*
�����¼�:
global.items[8] = {1,2,3,4,5,6,7,8}-->�������ڵĿ��������
i = 0;
s = 0;
a = 0;
���¼�:
//�������ʹ�õ���Ʒ�Ĵ���
while(i < 8)
{
	if(items[i] == 0)
	{
		a = i;
		for(j = i + 1 ; j < 8 ; j++)
		{
			items[i] = items[j];
			i++;
		}
		i = a;
	}
	i += 1;
	s = i;
}
while(s < 8)
{
	items[s] = 0;
	s++;
}
�����¼�:
draw_set_color(c_white);
draw_set_font(//�����������������);
//������Ʒ���� 
*/
