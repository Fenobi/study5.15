#define _CRT_SECURE_NO_WARNINGS

#include "fu.h"

void TestSeqList1()
{
	SL sl;
	SeqListPushInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
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

int main()
{
	//TestSeqList1();
	TestSeqList2();

	return 0;
}