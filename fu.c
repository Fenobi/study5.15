#define _CRT_SECURE_NO_WARNINGS

#include "fu.h"

void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListPushInit(SL* ps)
{
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

void SeqListCheckCapacity(SL* ps)
{
	//如果没有空间或者空间不足，则扩容
	if (ps->size == ps->capacity)//扩容一般扩两倍
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = realloc(ps->a, sizeof(newcapacity) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//程序异常退出，直接退出程序
		}
		ps->a = tmp;
		ps->capacity = newcapacity;

	}
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SL* ps)
{
	/*if (ps->size > 0)
	{
		ps->size--;
	}*/
	assert(ps->size > 0);
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);

	//挪动数据
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	int begin = 0;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->size--;
}
