//#define _CRT_SECURE_NO_WARNINGS 1
//
///*2n�ʺ�����*/
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct block {
//	int black;
//	int white;
//}Node;
//
//Node chushihua()
//{
//	Node a;
//	a.black = 0;
//	a.white = 0;
//	return a;
//}
//
////�ܿ��Լ���Ⱦɫ����
//int run(int q, int** b, int i, int j)
//{
//	int flag = 0;
//
//	if (q == 1)
//	{
//		if (b[i][j] == 3 || b[i][j] == 7 || b[i][j] == 1)
//			flag = 1;
//	}
//	else
//	{
//		if (b[i][j] == 4 || b[i][j] == 7 || b[i][j] == 2)
//			flag = 1;
//	}
//	return flag;
//}
//
////�ʺ�Ⱦɫ
//void stain(int q,int x, int y, Node** board, int size)//x��y�����ֵ = size - 1
//{
//	int i = 0, j = 0;
//
//	//���Ӵ�Ⱦɫ
//	if (q == 1)
//	{
//		board[x][y].black = 1;
//
//		//��Ⱦɫ
//		for (j = 0; j < size; j++)
//		{
//			if (j == y)
//			{
//				continue;
//			}
//			else
//			{
//				board[x][j].black = 1;
//			}
//		}
//
//		//��Ⱦɫ
//		for (i = 0; i < size; i++)
//		{
//			if (i == x)
//			{
//				continue;
//			}
//			else
//			{
//				board[i][y].black = 1;
//			}
//		}
//
//		//���Խ���Ⱦɫ
//		//����
//		for (i = x, j = y; i < size && j < size; i++, j++)
//		{
//			if (i == x && j == y)
//				continue;
//			else
//			{
//				board[i][j].black = 1;
//			}
//		}
//		//����
//		for (i = x, j = y; i >= 0 && j >= 0; i--, j--)
//		{
//			if (i == x && j == y)
//				continue;
//			else
//			{
//				board[i][j].black = 1;
//			}
//		}
//		//���Խ���Ⱦɫ
//		//����
//		for (i = x, j = y; i < size && j >= 0; i++, j--)
//		{
//			if (i == x && j == y)
//				continue;
//			else
//			{
//				board[i][j].black = 1;
//			}
//		}
//		//����
//		for (i = x, j = y; i >= 0 && j < size; i--, j++)
//		{
//			if (i == x && j == y)
//				continue;
//			else
//			{
//				board[i][j].black = 1;
//			}
//		}
//	}
//	else if (q == 2)
//	{
//		board[x][y].white = 1;
//
//		//��Ⱦɫ
//		for (j = 0; j < size; j++)
//		{
//			if (j == y)
//			{
//				continue;
//			}
//			else
//			{
//				board[x][j].white = 1;
//			}
//		}
//
//		//��Ⱦɫ
//		for (i = 0; i < size; i++)
//		{
//			if (i == x)
//			{
//				continue;
//			}
//			else
//			{
//				board[i][y].white = 1;
//			}
//		}
//
//		//���Խ���Ⱦɫ
//		//����
//		for (i = x, j = y; i < size && j < size; i++, j++)
//		{
//			if (i == x && j == y)
//				continue;
//			else
//			{
//				board[i][j].white = 1;
//			}
//		}
//		//����
//		for (i = x, j = y; i >= 0 && j >= 0; i--, j--)
//		{
//			if (i == x && j == y)
//				continue;
//			else
//			{
//				board[i][j].white = 1;
//			}
//		}
//		//���Խ���Ⱦɫ
//		//����
//		for (i = x, j = y; i < size && j >= 0; i++, j--)
//		{
//			if (i == x && j == y)
//				continue;
//			else
//			{
//				board[i][j].white = 1;
//			}
//		}
//		//����
//		for (i = x, j = y; i >= 0 && j < size; i--, j++)
//		{
//			if (i == x && j == y)
//				continue;
//			else
//			{
//				board[i][j].white = 1;
//			}
//		}
//	}
//}
//
////չʾ����
//void show(int** b,int n)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%4d", b[i][j]);
//		}
//		printf("\n\n");
//	}
//}
//
////�жϷ���
//int full(int** b, int n)
//{
//	int i = 0, j = 0;
//	int flag = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (b[i][j] == 0)
//			{
//				flag = 1;
//			}
//		}
//	}
//
//	if (flag == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////��������
//int put(int q, int** b, int n, int i, int j, int total)
//{
//	if (b[i][j] == 0)
//	{
//		stain(q, i, j, b, n);
//		if (full(b, n))
//		{
//			total++;
//			/*����*/
//			show(b, n);
//			printf("\n\ntotal_in_put = %d\n\n", total);
//		}
//	}
//
//	return total;
//}
//
//int main(void)
//{
//	int q1 = 1, q2 = 2;
//	int i = 0, j = 0;
//
//	//��������
//	int n = 0;
//	scanf("%d", &n);
//	Node** b = (Node**)malloc(sizeof(Node*) * n);
//	for (i = 0; i < n; i++)
//	{
//		b[i] = (Node*)malloc(sizeof(Node) * n);
//
//		//��ʼ����������
//		for (j = 0; j < n; j++)
//		{
//			b[i][j] = chushihua();
//		}
//	}
//
//	//Ⱦɫ
//	//stain(q1, n/2, n/2, b, n);
//	//stain(q2, n / 2 - 1, n / 2 - 1, b, n);
//
//	int total = 0;
//	int times = 0;
//
//	//��������
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (times % 2 == 0)
//			{
//				total = put(q1, b, n, i, j, total);
//				times++;
//			}
//			else
//			{
//				total = put(q2, b, n, i, j, total);
//				times++;
//			}
//		}
//	}
//
//	printf("\n\ntotal_out_side = %d\n", total);
//
//	//�ͷ��ڴ�
//	for (i = 0; i < n; i++)
//	{
//		free(b[i]);
//	}
//	free(b);
//
//	return 0;
//}

//����Ϊ����ʾ��,Ӧ�ý����������ݽṹ
