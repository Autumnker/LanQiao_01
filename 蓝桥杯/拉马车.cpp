////#define _CRT_SECURE_NO_WARNINGS 1
////
///*
//���ݣ�
//A����˳��
//B����˳��
//
//���̣�
//1.A��B�������ƣ����Լ����Ʋ������
//2.��ĳ�����Ѿ���������� K���ͰѶ��������һ�� K �Լ�֮��������� ��������Լ������ƵĶ�β
//3.��ĳ����û���ƿɴ����޷�Ӯ����ʱ�����Ӯ�ҵ�����
//4.�����Ϸ�޷������������ -1
//
//����˼·��
//1.������������ A B C
//2.��������ĸΪ K ʱ���� C ���� K ֮���������������ֶ�β
//3.��A��B����һ��Ϊ�����޷�Ӯ��ʱ�������һ��������
//4. �����Ϸ�޷���������� -1
//*/
//
//#include <iostream>
//#include<queue>
//#include<vector>
//#include<stack>
//#include<unordered_map>
//using namespace std;
//
//queue<char> A, B;
//queue<char>& a = A;
//queue<char>& b = B;
//stack<char> C;
//int Ben[128] = { 0 };
//
////����ҵ��Ʋ����ƶѣ����Ӯ�ˣ��򷵻�false��������ûӮ�򷵻�true��
//bool cha_ru(queue<char>& E)
//{
//	if (!E.empty())
//	{
//		char now = E.front();
//		E.pop();
//		C.push(now);
//		Ben[now]++;
//
//			//�����Ӯ�ƣ�����
//			if (Ben[now] >= 2)
//			{
//				if (!C.empty() && C.top() == now)
//				{
//					E.push(C.top());
//					C.pop();
//					Ben[now]--;
//				}
//
//				while (!C.empty() && C.top() != now)
//				{
//					E.push(C.top());
//					Ben[C.top()]--;
//					C.pop();
//				}
//
//				if (!C.empty() && 
//					C.top() == now)
//				{
//					E.push(C.top());
//					C.pop();
//					Ben[now]--;
//				}
//
//				return false;
//			}
//		else
//		{
//			//cout << "\n\n" << now << "����Ben��" << endl;
//			return true;
//		}
//
//		return true;
//	}
//	else
//	{
//		return true;
//	}
//}
//
////����ҵĶԾ�
//void play(queue<char>& a, queue<char>& b)
//{
//	int flag = 0;//flag  = 0 ��A�Ļغϣ�flag = 1 �� B �Ļغϡ�
//	int times = 0;
//
//	while (!a.empty() && !b.empty() && times <= 100000)
//	{
//		//cout << "\n\na.size()= " << a.size() << "\nb.size()= " << b.size() << endl;
//		
//		if ( !b.empty() && flag == 0)
//		{
//			if (cha_ru(a))
//			{
//				flag = 1;
//			}
//		}
//		
//		if (!a.empty() && flag == 1)//���a�ɹ����룬turn��Ϊtrue����ʼ��b���в������
//		{
//			if (cha_ru(b))
//			{
//				flag = 0;
//			}
//		}
//
//		times++;
//	}
//
//	//���Ӯ�ҵ�����
//	if (times < 100001)
//	{
//		if (a.empty())
//		{
//			//cout << "a.empty" << endl;
//			while (!b.empty())
//			{
//				cout << b.front();
//				b.pop();
//			}
//		}
//		else if (b.empty())
//		{
//			//cout << "b.empty" << endl;
//			while (!a.empty())
//			{
//				cout << a.front();
//				a.pop();
//			}
//		}
//		else
//			cout << -1;
//	}
//	else
//	{
//		cout << -1;
//	}
//
//	//cout << "\n\nBen��ֵ:" << endl;
//	//for (auto i : Ben)
//	//{
//	//	cout << i.first << ':' << i.second << " ";
//	//}
//	//cout << "\n\n";
//
//}
//
//int main()
//{
//	//��ȡ�ַ���
//	string ab, ba;
//	cin >> ab >> ba;
//	int i = 0;
//	for (char i : ab)
//	{
//		A.push(i);
//	}
//	for (char j : ba)
//	{
//		B.push(j);
//	}
//
//	play(A, B);
//
//	/*cout << " \nC:";
//	while (!C.empty())
//	{
//		cout << C.top() << " ";
//		C.pop();
//	}
//
//	cout << " \nA:";
//	while (!A.empty())
//	{
//		cout << A.front() << " ";
//		A.pop();
//	}
//
//	cout << " \nB:";
//	while (!B.empty())
//	{
//		cout << B.front() << " ";
//		B.pop();
//	}*/
//
//	return 0;
//}
//
/////*���˵Ĵ���*/
////#include<iostream>
////#include<string>
////#include<stack>
////using namespace std;
////bool a[128]; // a[i]��ʾ�ƶ����Ƿ����i������ 
////int main() {
////    string A, B;
////    cin >> A >> B;
////    stack<char> S; // ��ջ��Ϊ�ƶ�
////    S.push(A[0]); a[A[0] - 0] = 1; A.erase(0, 1); // A�ȳ���
////    bool flag = 1; // flag���Ƶ�˭���� 
////    int times = 0; // times��ʾ���ƴ���������10000��Ϊ������ѭ�� 
////    while (A.length() && B.length() && times < 10000) {
////        //cout<<A<<","<<B<<endl; 
////        string* sp = flag ? &B : &A; // flagΪ1ʱB���ƣ���stringָ��ָ��B������ʵ��B�ĳ��ƺ����� 
////        char tmp = (*sp)[0];
////        S.push(tmp); sp->erase(0, 1); // ��ҳ��� 
////        if (a[tmp - 0] == 0) { a[tmp - 0] = 1; flag = !flag; } // �ƶ���û�е�ǰ�����ƣ���Ȩ���� 
////        else { // ��������ǰ�ַ����ջ�һ������ 
////            *sp += S.top(); S.pop(); // �ջظճ��������ƣ�λ��ջ�� 
////            while (S.top() != tmp) { *sp += S.top(); a[S.top() - 0] = 0; S.pop(); } //һֱ���Ƶ�����������ͬ����һ���ƴ� 
////            *sp += S.top(); a[S.top() - 0] = 0; S.pop();
////        }
////        times++;
////    }
////    if (times >= 10000) return -1;
////    if (A.length()) cout << A; else cout << B;
////    return 0;
////}
//
////#include <iostream>
////#include <queue>
////#include <stack>
////#include <unordered_map>
////using namespace std;
////
////queue<char> A, B;
////stack<char> C;
////unordered_map<char, int> Ben;
////
////bool cha_ru(queue<char>& E) {
////    if (!E.empty()) {
////        char now = E.front();
////        E.pop();
////        if (Ben.find(now) != Ben.end()) {
////            C.push(now);
////            Ben[now]++;
////            if (Ben[now] > 1) {
////                if (!C.empty() && C.top() != now) {
////                    E.push(C.top());
////                    C.pop();
////                    Ben[now]--;
////                }
////                while (!C.empty() && C.top() != now) {
////                    E.push(C.top());
////                    C.pop();
////                }
////                if (!C.empty() && C.top() == now) {
////                    E.push(C.top());
////                    C.pop();
////                    Ben[now]--;
////                }
////                return false;
////            }
////        }
////        else {
////            return true;
////        }
////        return true;
////    }
////    else {
////        return true;
////    }
////}
////
////void play(queue<char>& a, queue<char>& b) {
////    int flag = 0;
////    int times = 0;
////    while (!a.empty() && !b.empty() && times <= 10000) {
////        if (!b.empty() && flag == 0) {
////            if (cha_ru(a)) {
////                flag = 1;
////            }
////        }
////        if (!a.empty() && flag == 1) {
////            if (cha_ru(b)) {
////                flag = 0;
////            }
////        }
////        times++;
////    }
////    if (times < 10000) {
////        if (a.empty()) {
////            while (!b.empty()) {
////                cout << b.front();
////                b.pop();
////            }
////        }
////        else if (b.empty()) {
////            while (!a.empty()) {
////                cout << a.front();
////                a.pop();
////            }
////        }
////        else {
////            cout << -1;
////        }
////    }
////    else {
////        cout << -1;
////    }
////}
////
////int main() {
////    Ben['2'] = 0; Ben['3'] = 0; Ben['4'] = 0; Ben['5'] = 0; Ben['6'] = 0; Ben['7'] = 0; Ben['8'] = 0; Ben['9'] = 0;
////    Ben['10'] = 0; Ben['J'] = 0; Ben['Q'] = 0; Ben['K'] = 0; Ben['A'] = 0;
////
////    string ab, ba;
////    cin >> ab >> ba;
////    for (char i : ab) {
////        A.push(i);
////    }
////    for (char j : ba) {
////        B.push(j);
////    }
////
////    play(A, B);
////
////    return 0;
////}
//
/////*���˵Ĵ���*/
////#include<iostream>
////#include<queue>
////#include<stack>
////#include<cstring>
////using namespace std;
////queue<char>a, b;
////stack<char>s;
////string s1, s2;
////int check[100];
////int order = 1;
////int main()
////{
////    cin >> s1 >> s2;
////    for (int i = 0; i < s1.length(); i++)
////    {
////        a.push(s1[i]);
////    }
////    for (int i = 0; i < s2.length(); i++)
////    {
////        b.push(s2[i]);
////    }
////    while (!a.empty() && !b.empty())
////    {
////
////        if (order == 1)
////        {
////            s.push(a.front());
////            a.pop();
////            if (check[s.top()])
////            {
////                order = 1;
////                char tmp = s.top();
////                a.push(s.top());
////                s.pop();
////                while (s.top() != tmp)
////                {
////                    a.push(s.top());
////                    check[s.top()] = 0;
////                    s.pop();
////                }
////                a.push(tmp);
////                check[tmp] = 0;
////                s.pop();
////            }
////            else
////            {
////                order = 2;
////                check[s.top()] = 1;
////            }
////        }
////        else
////        {
////            s.push(b.front());
////            b.pop();
////            if (check[s.top()])
////            {
////                order = 2;
////                char tmp = s.top();
////                b.push(tmp);
////                s.pop();
////                while (s.top() != tmp)
////                {
////                    b.push(s.top());
////                    check[s.top()] = 0;
////                    s.pop();
////                }
////                b.push(tmp);
////                check[tmp] = 0;
////                s.pop();
////
////            }
////            else
////            {
////                order = 1;
////                check[s.top()] = 1;
////            }
////        }
////    }
////    while (!a.empty())
////    {
////        cout << a.front();
////        a.pop();
////    }
////    while (!b.empty())
////    {
////        cout << b.front();
////        b.pop();
////    }
////    return 0;
////}