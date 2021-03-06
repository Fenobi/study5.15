#pragma once
#define N 1000

typedef int SLDataType;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


////静态顺序表;
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//表示数组中存储了多少数据
//}SL;
//
////接口函数 -- 命名风格是跟着STL走的
//void SeqListPushInit(SL* ps);
//
////静态特点：如果满了就不让插入  缺点：给多少很难确定
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPopFront(SL* ps);
////...

//动态顺序表;
typedef struct SeqList
{
	SLDataType* a;
	int size;//表示数组中存储了多少数据
	int capacity;//数组实际能存数据的空间容量是多大
}SL;
//打印
void SeqListPrint(SL* ps);

//内存释放
void SeqListDestory(SL* ps);

//扩容
void SeqListCheckCapacity(SL* ps);


//接口函数 -- 命名风格是跟着STL走的
//初始化
void SeqListPushInit(SL* ps);

//从末尾插入一个
void SeqListPushBack(SL* ps, SLDataType x);

//从最末尾删除一个
void SeqListPopBack(SL* ps);

//从最前面插入一个
void SeqListPushFront(SL* ps, SLDataType x);

//从最前面删除一个
void SeqListPopFront(SL* ps);


//找到了返回x位置下标，没有找到返回-1
int SeqListFind(SL* ps, SLDataType x);

//指定pos下标位置插入
void SeqListInsert(SL* ps, int pos, SLDataType x);

//删除pos位置的数据
void SeqListErase(SL* ps, int pos);