#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
	cout << "欢迎使用UNDERTALE玩家攻击计算" << endl;
	double atk, fight, enemydef, a, end, b, c, fightx, sped1, sped2, sped3, sped4, x1, x2, x3, x4, d1, d2, d3, d4, score;
	int item, y;
	srand(time(0));
	b = rand()/(double)(RAND_MAX/2);
	cout << "请输入各项数据：" << endl;
	cout << "1.自体攻击力  2.武器类型  3.武器攻击力  4.敌方防御力" << endl;
	cout << "武器类型：1 = 挥砍类武器  2 = 冲击类武器  3 = 多次打击类武器" <<endl;
	cin >> atk >> item >> fight >> enemydef;
	switch(item)
	{
		case 1:
			 cout << "请输入准确系数(0~2.2)：" << endl;
			 cin >> a;
			 end = round((atk + fight - enemydef + b) * a);
			 cout << "玩家造成的伤害为：" << end << endl;
			 break;
		case 2:
			cout << "1.请输入准确系数(0~2.1)  2.请输入挥拳数" << endl;
			cin >> a >> c;
			end = ceil(round((atk + fight - enemydef + b)) * a * (c / 4));
			cout << "玩家造成的伤害为：" << end << endl;
			break;
		case 3:
			cout << "请输入武器" << endl;
			cout << "1.芭蕾舞鞋  2.笔记本  3.平底锅  4.空枪" << endl; 
			cin >> y; 
			switch(y)
			{
				case 1:
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x1 >> sped1;
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x2 >> sped2;
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x3 >> sped3;
					d1 = floor(x1 / sped1) - floor(240 / sped1);
					if(28 <= d1)
					{
						score = score + 0;
					}
					if(22 <= d1 && d1 < 28)
					{
						score = score + 10;
					}
					if(16 <= d1 && d1 <22)
					{
						score = score + 15;
					}
					if(10 <= d1 && d1 < 16)
					{
						score = score + 20;
					}
					if(5 <= d1 && d1 < 10)
					{
						score = score + 40;
					}
					if(4 <= d1 && d1 < 5)
					{
						score = score + 50;
					}
					if(3 <= d1 && d1 < 4)
					{
						score = score + 70;
					}
					if(2 <= d1 && d1 < 3)
					{
						score = score + 80;
					}
					if(1 <= d1 && d1 < 2)
					{
						score = score + 90;
					}
					if(d1 < 1)
					{
						score = score + 110;
					}
					d2 = floor(x2 / sped1) - floor(240 / sped2);
					if(28 <= d2)
					{
						score = score + 0;
					}
					if(22 <= d2 && d2 < 28)
					{
						score = score + 10;
					}
					if(16 <= d2 && d2 <22)
					{
						score = score + 15;
					}
					if(10 <= d2 && d2 < 16)
					{
						score = score + 20;
					}
					if(5 <= d2&& d2 < 10)
					{
						score = score + 40;
					}
					if(4 <= d2 && d2 < 5)
					{
						score = score + 50;
					}
					if(3 <= d2 && d2 < 4)
					{
						score = score + 70;
					}
					if(2 <= d2 && d2 < 3)
					{
						score = score + 80;
					}
					if(1 <= d2 && d2 < 2)
					{
						score = score + 90;
					}
					if(d2 < 1)
					{
						score = score + 110;
					}
					d3 = floor(x3 / sped3) - floor(240 / sped3);
					if(28 <= d3)
					{
						score = score + 0;
					}
					if(22 <= d3 && d3 < 28)
					{
						score = score + 10;
					}
					if(16 <= d3 && d3 <22)
					{
						score = score + 15;
					}
					if(10 <= d3 && d3 < 16)
					{
						score = score + 20;
					}
					if(5 <= d3 && d3 < 10)
					{
						score = score + 40;
					}
					if(4 <= d3 && d3 < 5)
					{
						score = score + 50;
					}
					if(3 <= d3 && d3 < 4)
					{
						score = score + 70;
					}
					if(2 <= d3 && d3 < 3)
					{
						score = score + 80;
					}
					if(1 <= d3 && d3 < 2)
					{
						score = score + 90;
					}
					if(d3 < 1)
					{
						score = score + 110;
					}
					if(score >= 400)
					{
						score = score * 1.25;
					}
					if(score >= 430)
					{
						score = score * 1.8;
					}
					end = round((atk + fight - enemydef) * (score / 160) + round(b));
					cout << "玩家造成的伤害为：" << end << endl;
					break;
				case 2:
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x1 >> sped1;
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x2 >> sped2;
					d1 = floor(x1 / sped1) - floor(240 / sped1);
					if(28 <= d1)
					{
						score = score + 0;
					}
					if(22 <= d1 && d1 < 28)
					{
						score = score + 10;
					}
					if(16 <= d1 && d1 <22)
					{
						score = score + 15;
					}
					if(10 <= d1 && d1 < 16)
					{
						score = score + 20;
					}
					if(5 <= d1 && d1 < 10)
					{
						score = score + 40;
					}
					if(4 <= d1 && d1 < 5)
					{
						score = score + 50;
					}
					if(3 <= d1 && d1 < 4)
					{
						score = score + 70;
					}
					if(2 <= d1 && d1 < 3)
					{
						score = score + 80;
					}
					if(1 <= d1 && d1 < 2)
					{
						score = score + 90;
					}
					if(d1 < 1)
					{
						score = score + 110;
					}
					d2 = floor(x2 / sped1) - floor(240 / sped2);
					if(28 <= d2)
					{
						score = score + 0;
					}
					if(22 <= d2 && d2 < 28)
					{
						score = score + 10;
					}
					if(16 <= d2 && d2 <22)
					{
						score = score + 15;
					}
					if(10 <= d2 && d2 < 16)
					{
						score = score + 20;
					}
					if(5 <= d2&& d2 < 10)
					{
						score = score + 40;
					}
					if(4 <= d2 && d2 < 5)
					{
						score = score + 50;
					}
					if(3 <= d2 && d2 < 4)
					{
						score = score + 70;
					}
					if(2 <= d2 && d2 < 3)
					{
						score = score + 80;
					}
					if(1 <= d2 && d2 < 2)
					{
						score = score + 90;
					}
					if(d2 < 1)
					{
						score = score + 110;
					}
					if(score >= 400)
					{
						score = score * 1.25;
					}
					if(score >= 430)
					{
						score = score * 1.8;
					}
					end = round((atk + fight - enemydef) * (score / 160) + round(b));
					cout << "玩家造成的伤害为：" << end << endl;
					break;
				case 3:
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x1 >> sped1;
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x2 >> sped2;
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x3 >> sped3;
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x4 >> sped4;
					d1 = floor(x1 / sped1) - floor(240 / sped1);
					if(28 <= d1)
					{
						score = score + 0;
					}
					if(22 <= d1 && d1 < 28)
					{
						score = score + 10;
					}
					if(16 <= d1 && d1 <22)
					{
						score = score + 15;
					}
					if(10 <= d1 && d1 < 16)
					{
						score = score + 20;
					}
					if(5 <= d1 && d1 < 10)
					{
						score = score + 40;
					}
					if(4 <= d1 && d1 < 5)
					{
						score = score + 50;
					}
					if(3 <= d1 && d1 < 4)
					{
						score = score + 70;
					}
					if(2 <= d1 && d1 < 3)
					{
						score = score + 80;
					}
					if(1 <= d1 && d1 < 2)
					{
						score = score + 90;
					}
					if(d1 < 1)
					{
						score = score + 110;
					}
					d2 = floor(x2 / sped1) - floor(240 / sped2);
					if(28 <= d2)
					{
						score = score + 0;
					}
					if(22 <= d2 && d2 < 28)
					{
						score = score + 10;
					}
					if(16 <= d2 && d2 <22)
					{
						score = score + 15;
					}
					if(10 <= d2 && d2 < 16)
					{
						score = score + 20;
					}
					if(5 <= d2&& d2 < 10)
					{
						score = score + 40;
					}
					if(4 <= d2 && d2 < 5)
					{
						score = score + 50;
					}
					if(3 <= d2 && d2 < 4)
					{
						score = score + 70;
					}
					if(2 <= d2 && d2 < 3)
					{
						score = score + 80;
					}
					if(1 <= d2 && d2 < 2)
					{
						score = score + 90;
					}
					if(d2 < 1)
					{
						score = score + 110;
					}
					d3 = floor(x3 / sped3) - floor(240 / sped3);
					if(28 <= d3)
					{
						score = score + 0;
					}
					if(22 <= d3 && d3 < 28)
					{
						score = score + 10;
					}
					if(16 <= d3 && d3 <22)
					{
						score = score + 15;
					}
					if(10 <= d3 && d3 < 16)
					{
						score = score + 20;
					}
					if(5 <= d3 && d3 < 10)
					{
						score = score + 40;
					}
					if(4 <= d3 && d3 < 5)
					{
						score = score + 50;
					}
					if(3 <= d3 && d3 < 4)
					{
						score = score + 70;
					}
					if(2 <= d3 && d3 < 3)
					{
						score = score + 80;
					}
					if(1 <= d3 && d3 < 2)
					{
						score = score + 90;
					}
					if(d3 < 1)
					{
						score = score + 110;
					}
					d4 = floor(x4 / sped4) - floor(240 / sped4);
					if(28 <= d4)
					{
						score = score + 0;
					}
					if(22 <= d4 && d4 < 28)
					{
						score = score + 10;
					}
					if(16 <= d4 && d4 <22)
					{
						score = score + 15;
					}
					if(10 <= d4 && d4 < 16)
					{
						score = score + 20;
					}
					if(5 <= d4 && d4 < 10)
					{
						score = score + 40;
					}
					if(4 <= d4 && d4 < 5)
					{
						score = score + 50;
					}
					if(3 <= d4 && d4 < 4)
					{
						score = score + 70;
					}
					if(2 <= d4 && d4 < 3)
					{
						score = score + 80;
					}
					if(1 <= d4 && d4 < 2)
					{
						score = score + 90;
					}
					if(d4 < 1)
					{
						score = score + 110;
					}
					if(score >= 400)
					{
						score = score * 1.25;
					}
					if(score >= 430)
					{
						score = score * 1.8;
					}
					end = round((atk + fight - enemydef) * (score / 160) + round(b));
					cout << "玩家造成的伤害为：" << end << endl;
					break;
				case 4:
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x1 >> sped1;
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x2 >> sped2;
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x3 >> sped3;
					cout << "1.请输入攻击条横坐标(填大于0的整数)  2.请输入移动速度(填大于0的整数)" << endl;
					cin >> x4 >> sped4;
					d1 = floor(x1 / sped1) - floor(240 / sped1);
					if(28 <= d1)
					{
						score = score + 0;
					}
					if(22 <= d1 && d1 < 28)
					{
						score = score + 10;
					}
					if(16 <= d1 && d1 <22)
					{
						score = score + 15;
					}
					if(10 <= d1 && d1 < 16)
					{
						score = score + 20;
					}
					if(5 <= d1 && d1 < 10)
					{
						score = score + 40;
					}
					if(4 <= d1 && d1 < 5)
					{
						score = score + 50;
					}
					if(3 <= d1 && d1 < 4)
					{
						score = score + 70;
					}
					if(2 <= d1 && d1 < 3)
					{
						score = score + 80;
					}
					if(1 <= d1 && d1 < 2)
					{
						score = score + 90;
					}
					if(d1 < 1)
					{
						score = score + 110;
					}
					d2 = floor(x2 / sped1) - floor(240 / sped2);
					if(28 <= d2)
					{
						score = score + 0;
					}
					if(22 <= d2 && d2 < 28)
					{
						score = score + 10;
					}
					if(16 <= d2 && d2 <22)
					{
						score = score + 15;
					}
					if(10 <= d2 && d2 < 16)
					{
						score = score + 20;
					}
					if(5 <= d2&& d2 < 10)
					{
						score = score + 40;
					}
					if(4 <= d2 && d2 < 5)
					{
						score = score + 50;
					}
					if(3 <= d2 && d2 < 4)
					{
						score = score + 70;
					}
					if(2 <= d2 && d2 < 3)
					{
						score = score + 80;
					}
					if(1 <= d2 && d2 < 2)
					{
						score = score + 90;
					}
					if(d2 < 1)
					{
						score = score + 110;
					}
					d3 = floor(x3 / sped3) - floor(240 / sped3);
					if(28 <= d3)
					{
						score = score + 0;
					}
					if(22 <= d3 && d3 < 28)
					{
						score = score + 10;
					}
					if(16 <= d3 && d3 <22)
					{
						score = score + 15;
					}
					if(10 <= d3 && d3 < 16)
					{
						score = score + 20;
					}
					if(5 <= d3 && d3 < 10)
					{
						score = score + 40;
					}
					if(4 <= d3 && d3 < 5)
					{
						score = score + 50;
					}
					if(3 <= d3 && d3 < 4)
					{
						score = score + 70;
					}
					if(2 <= d3 && d3 < 3)
					{
						score = score + 80;
					}
					if(1 <= d3 && d3 < 2)
					{
						score = score + 90;
					}
					if(d3 < 1)
					{
						score = score + 110;
					}
					d4 = floor(x4 / sped4) - floor(240 / sped4);
					if(28 <= d4)
					{
						score = score + 0;
					}
					if(22 <= d4 && d4 < 28)
					{
						score = score + 10;
					}
					if(16 <= d4 && d4 <22)
					{
						score = score + 15;
					}
					if(10 <= d4 && d4 < 16)
					{
						score = score + 20;
					}
					if(5 <= d4 && d4 < 10)
					{
						score = score + 40;
					}
					if(4 <= d4 && d4 < 5)
					{
						score = score + 50;
					}
					if(3 <= d4 && d4 < 4)
					{
						score = score + 70;
					}
					if(2 <= d4 && d4 < 3)
					{
						score = score + 80;
					}
					if(1 <= d4 && d4 < 2)
					{
						score = score + 90;
					}
					if(d4 < 1)
					{
						score = score + 110;
					}
					if(score >= 400)
					{
						score = score * 1.25;
					}
					if(score >= 430)
					{
						score = score * 1.8;
					}
					end = round((atk + fight - enemydef) * (score / 160) + round(b));
					cout << "玩家造成的伤害为：" << end << endl;
					break;
				default:
					cerr << "ERROR!未知的多次打击类武器!" << endl; 
			}
			break;
		default:
			cerr << "ERROR!未知的武器类型!" << endl; 
	}
	system("pause");
	return 0; 
}
