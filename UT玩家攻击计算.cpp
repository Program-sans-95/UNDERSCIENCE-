#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
	cout << "��ӭʹ��UNDERTALE��ҹ�������" << endl;
	double atk, fight, enemydef, a, end, b, c, fightx, sped1, sped2, sped3, sped4, x1, x2, x3, x4, d1, d2, d3, d4, score;
	int item, y;
	srand(time(0));
	b = rand()/(double)(RAND_MAX/2);
	cout << "������������ݣ�" << endl;
	cout << "1.���幥����  2.��������  3.����������  4.�з�������" << endl;
	cout << "�������ͣ�1 = �ӿ�������  2 = ���������  3 = ��δ��������" <<endl;
	cin >> atk >> item >> fight >> enemydef;
	switch(item)
	{
		case 1:
			 cout << "������׼ȷϵ��(0~2.2)��" << endl;
			 cin >> a;
			 end = round((atk + fight - enemydef + b) * a);
			 cout << "�����ɵ��˺�Ϊ��" << end << endl;
			 break;
		case 2:
			cout << "1.������׼ȷϵ��(0~2.1)  2.�������ȭ��" << endl;
			cin >> a >> c;
			end = ceil(round((atk + fight - enemydef + b)) * a * (c / 4));
			cout << "�����ɵ��˺�Ϊ��" << end << endl;
			break;
		case 3:
			cout << "����������" << endl;
			cout << "1.������Ь  2.�ʼǱ�  3.ƽ�׹�  4.��ǹ" << endl; 
			cin >> y; 
			switch(y)
			{
				case 1:
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
					cin >> x1 >> sped1;
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
					cin >> x2 >> sped2;
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
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
					cout << "�����ɵ��˺�Ϊ��" << end << endl;
					break;
				case 2:
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
					cin >> x1 >> sped1;
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
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
					cout << "�����ɵ��˺�Ϊ��" << end << endl;
					break;
				case 3:
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
					cin >> x1 >> sped1;
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
					cin >> x2 >> sped2;
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
					cin >> x3 >> sped3;
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
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
					cout << "�����ɵ��˺�Ϊ��" << end << endl;
					break;
				case 4:
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
					cin >> x1 >> sped1;
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
					cin >> x2 >> sped2;
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
					cin >> x3 >> sped3;
					cout << "1.�����빥����������(�����0������)  2.�������ƶ��ٶ�(�����0������)" << endl;
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
					cout << "�����ɵ��˺�Ϊ��" << end << endl;
					break;
				default:
					cerr << "ERROR!δ֪�Ķ�δ��������!" << endl; 
			}
			break;
		default:
			cerr << "ERROR!δ֪����������!" << endl; 
	}
	system("pause");
	return 0; 
}
