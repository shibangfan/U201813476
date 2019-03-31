﻿// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <stdio.h>
#include<stdlib.h>

typedef struct LNODE {
	int password;
	int number;
	struct LNODE *next;
} LNODE, *Linklist;
void joseph(Linklist p, int m, int x, int max)
{
	Linklist q;
	q = (Linklist)malloc(sizeof(LNODE));
	int i;
	if (q == NULL)
	{
		return;
	}
	if (m > max||x==0)
	{
		return;
	}
	q = p;
	m %= x;
	if (m == 0)
		m = x;
	for (i = 1; i <= m; i++)
	{
		p = q;
		q = p->next;
	}
	p->next = q->next;
	i = q->password;
	printf("%d is out\n",q->number);
	free(q);
	joseph(p, i, x - 1, max);
}
int main()
{
	int i, m, max; 
	Linklist Lh, p, q;
	int n;
	printf("the max is \n");
	scanf_s("%d", &m);
	max=m;
	printf("the number is\n");
	scanf_s("%d", &n);
	Lh = (Linklist)malloc(sizeof(LNODE));
	if (Lh == NULL)
	{
		return 0;
	}
	p = Lh;
	scanf_s("%d",&(p->password));
	p->number = 1;
	p->next = NULL;
	for(i = 1; i < n; i++)
	{
		if (!(q = (Linklist)malloc(sizeof(LNODE))))
		{
			return 0;
		}
	    p->next = q;
	    p = q;
		scanf_s("%d", &(p->password));
		p->number = i + 1;

	}
	p->next = Lh;
	joseph(p, m, n, max);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
