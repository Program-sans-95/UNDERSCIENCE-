#include<iostream>
using namespace std;
//这里是C++ 
int main()
{
	int items[8] = {1,2,3,4,5,6,7,8};
	int a, b, s;
	cout << "请输入使用的物品编号(0~7)" << endl;
	cin >> b;
	if(b > 7)
	{
		cerr << "ERROR!未知的物品编号!" << endl;
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
//这里是GML 
/*
创建事件:
global.items[8] = {1,2,3,4,5,6,7,8}-->大括号内的可随意更改
i = 0;
s = 0;
a = 0;
步事件:
//这里添加使用的物品的代码
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
绘制事件:
draw_set_color(c_white);
draw_set_font(//这里填你的字体名称);
//绘制物品代码 
*/
