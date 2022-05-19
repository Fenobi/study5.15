#define _CRT_SECURE_NO_WARNINGS

#include "fu.h"

void TestSeqList1()
{
	SL sl;
	SeqListPushInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, "Ë³");
	SeqListPushBack(&sl, "ÊÇ");
	SeqListPushBack(&sl, "¸ö");
	SeqListPushBack(&sl, "Õâ");
	SeqListPrint(&sl);
	

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);


	SeqListPrint(&sl);


	SeqListDestory(&sl);
}

void TestSeqList2()
{
	SL sl;
	SeqListPushInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);

	SeqListPushFront(&sl, 70);
	SeqListPushFront(&sl, 60);
	SeqListPushFront(&sl, 50);
	SeqListPushFront(&sl, 40);
	SeqListPushFront(&sl, 30);

	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListPopFront(&sl);

	SeqListPrint(&sl);


	SeqListDestory(&sl);
}

void TestSeqList3()
{
	SL sl;
	SeqListPushInit(&sl);

	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushBack(&sl, 6);
	SeqListPushBack(&sl, 7);

	int a = SeqListFind(&sl, 4);
	if (a != -1)
	{
		SeqListInsert(&sl, a, 9);
	}

	a = SeqListFind(&sl, 6);
	if (a != -1)
	{
		SeqListInsert(&sl, a, 10);
	}
	SeqListErase(&sl, 1);
	SeqListPrint(&sl);
	SeqListDestory(&sl);

}

void TestSeqList4()
{
	SL sl;
	SeqListPushInit(&sl);
	SeqListPushBack(&sl, 1);

	SeqListPrint(&sl);
	SeqListDestory(&sl);
}

int main()
{
	//TestSeqList1();
	//TestSeqList2();
	//TestSeqList3();
	//TestSeqList4();
	return 0;
}