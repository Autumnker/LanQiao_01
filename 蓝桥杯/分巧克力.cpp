///*���ɿ���
//
//*���ݣ�
//
//N = �ɿ�������
//K = С��������
//Wi\Hi = ÿ���ɿ����ı߳�����
//
//*Ҫ��
//1.�г����ɿ�����������
//2.�ɿ����߳����������������� -> С�ɿ����ı߳�����С�Ĵ��ɿ����ı߳�С�������
//
//*��
//���䳤
//
//*/
//
///*
//
//���˼·��
//
//1.���ɿ�������� Ni / С�������� K = С�ɿ��������� S_max
//2.�� S_max ���С�ɿ������߳� L_max
//3.���ɿ����б߳���̵� W_min �Ƿ���� L_max �� ���ձ߳� = W_min : L
//
//4.�ж����� �� �ɿ�����������û��С���ߣ�ȫ�������ߣ����꣬����������С��������
//
//*/
//
///*
//�ؼ��Ƿִ��ɿ����ĺ���
//*/
//
//#include<iostream>
//#include<cmath>
//using namespace std;
//
////�����ɿ����࣬���С�ɿ����䳤�󷵻����г������С�ɿ�������
//class Chocolate {
//public:
//	int H;
//	int W;
//	int area;
//public:
//	//��ȡ�߳� 
//	void get_HW(int Hin, int Win)
//	{
//		H = Hin;
//		W = Win;
//		area = Hin * Win;
//	}
//	//�������С�ɿ�������
//	int max_num(int L_max)
//	{
//		int num = 0;
//
//		if (L_max > H || L_max > W)
//		{
//			return 0;
//		}
//		else
//		{
//			num = (H / L_max) * (W / L_max);//���Ǿ������� 
//		}
//
//		return num;
//	}
//};
//
////��ʼ���ɿ�������
//void initChocolate(Chocolate* a, int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		a[i].H = 0;
//		a[i].W = 0;
//		a[i].area = 0;
//	}
//}
//
////�����д��ɿ������г���С�ɿ��������������������س���
//int Total_num(Chocolate a[], int N, int L_max)
//{
//	int total = 0;
//	for (int i = 0; i < N; i++)
//	{
//		total += a[i].max_num(L_max);
//	}
//
//	return total;
//}
//
////�ж� Total_num �Ƿ���ڵ���С��������
//bool judge(Chocolate a[], int N, int L_max, int K)
//{
//	if (Total_num(a, N,L_max) >= K)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////����С�ɿ������߳�(���ֲ���)
//int Max(Chocolate a[], int N, int K, int Large)
//{
//	int L = 1;
//	int R = Large;
//	int mid = 0;
//	int max = 0;
//
//	while (L <= R)
//	{
//		mid = (L + R) / 2;
//
//		if (judge(a, N, mid, K))
//		{
//			max = mid;
//			L = mid + 1;
//		}
//		else
//		{
//			R = mid - 1;
//		}
//	}
//
//	return max;
//}
//int main(void)
//{
//
//	//��ȡ �ɿ�����С���ѵ�����
//	int N, K;
//	cin >> N >> K;
//	Chocolate* a = new Chocolate[N];
//	initChocolate(a, N);
//
//	//��ȡÿһ���ɿ����ı߳��͸߶�
//	int max_area = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		int h, w;
//		cin >> h >> w;
//		a[i].get_HW(h, w);
//
//		max_area += a[i].area;
//	}
//	int Large = sqrt(max_area);
//	//����С�ɿ��������߳�
//	int fin = Max(a, N, K, Large);
//
//	cout << fin;
//
//	return 0;
//}
//
//

///*���˵Ĵ���*/
////#include <iostream>
////using namespace std;
////const int def = 100005;
////int h[def] = { 0 };
////int w[def] = { 0 };
////int n, k;
//////���ɿ����Ŀ���--����
////bool check(int x)//�߳�Ϊx��������
////{
////    int sum = 0;
////    for (int i = 0; i < n; i++)
////    {
////        sum += (h[i] / x) * (w[i] / x);
////    }
////    if (sum >= k)return true;
////    else
////        return false;
////}
////int main()
////{
////    // ���ڴ��������Ĵ���
////
////    cin >> n >> k;
////    for (int i = 0; i < n; i++)
////    {
////        cin >> h[i] >> w[i];
////    }
////    //���ַ��жϱ߳�
////    int l = 1;
////    int r = 100000;
////    int max = 0;
////    while (l <= r)//ע���ж���������=
////    {
////        int mid = (l + r) / 2;
////        if (check(mid))//mid�߳��������
////        {
////            max = mid;
////            l = mid + 1;//Ҫ�����߳�������Ҫ�����ж�
////        }
////        else
////            r = mid - 1;//˵�������㣬��Ҫ�����߳�
////    }
////    cout << max;
////    return 0;
////}