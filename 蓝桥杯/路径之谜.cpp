#define _CRT_SECURE_NO_WARNINGS 1

/*·��֮��*/

//1.�����ݽṹ������ά���顢����һά���顢�����

//2.���㷨��DFS

#include<iostream>
#include<stack>
using namespace std;
int N;

int* bei = new int[N];
int* xi = new int[N];

//����
struct point {
	int x;
	int y;
};

//����·�������ջ
stack<point> st;

//�����
class player {
public:
	point now;//��ǰ����
	
	//���췽��
	player()
	{
		now.x = 0;
		now.y = 0;
	}

	//�ƶ�����,��������
	bool up(point now, int N, int* bei, int* xi)
	{
		if (now.x > 0 && xi[now.x - 1] > 0 && bei[now.y] > 0)
		{
			now.x--;
			xi[now.x]--;
			bei[now.y]--;

			return true;
		}
		else
			return false;
	}
	bool down(point now, int N, int* bei, int* xi)
	{
		if (now.x < N - 1 && xi[now.x + 1] > 0 && bei[now.y] > 0)
		{
			now.x++;
			xi[now.x]--;
			bei[now.x]--;

			return true;
		}
		else
			return false;
	}
	bool left(point now, int N, int* bei, int* xi)
	{
		if (now.y > 0 && xi[now.x] > 0 && bei[now.y - 1] > 0)
		{
			now.y--;
			xi[now.x]--;
			bei[now.y]--;

			return true;
		}
		else
			return false;
	}
	bool right(point now, int N, int* bei, int* xi)
	{
		if (now.y < N - 1 && xi[now.x] > 0 && bei[now.y + 1] > 0)
		{
			now.y++;
			xi[now.x]--;
			bei[now.y]--;

			return true;
		}
		else
			return false;
	}

};

//DFS
void DFS(player py, stack<point> st, int** map, int* xi, int* bei)
{
	
}

int mian(void)
{
	//��ȡ���벢�������ݽṹ

	//DFSѰ��·��

	//���ջ�е�·��

	return 0;
}