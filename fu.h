#pragma once
#define N 1000

typedef int SLDataType;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


////��̬˳���;
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//��ʾ�����д洢�˶�������
//}SL;
//
////�ӿں��� -- ��������Ǹ���STL�ߵ�
//void SeqListPushInit(SL* ps);
//
////��̬�ص㣺������˾Ͳ��ò���  ȱ�㣺�����ٺ���ȷ��
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPopFront(SL* ps);
////...

//��̬˳���;
typedef struct SeqList
{
	SLDataType* a;
	int size;//��ʾ�����д洢�˶�������
	int capacity;//����ʵ���ܴ����ݵĿռ������Ƕ��
}SL;
//��ӡ
void SeqListPrint(SL* ps);

//�ڴ��ͷ�
void SeqListDestory(SL* ps);

//����
void SeqListCheckCapacity(SL* ps);


//�ӿں��� -- ��������Ǹ���STL�ߵ�
//��ʼ��
void SeqListPushInit(SL* ps);

//��ĩβ����һ��
void SeqListPushBack(SL* ps, SLDataType x);

//����ĩβɾ��һ��
void SeqListPopBack(SL* ps);

//����ǰ�����һ��
void SeqListPushFront(SL* ps, SLDataType x);

//����ǰ��ɾ��һ��
void SeqListPopFront(SL* ps);


//�ҵ��˷���xλ���±꣬û���ҵ�����-1
int SeqListFind(SL* ps, SLDataType x);

//ָ��pos�±�λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x);

//ɾ��posλ�õ�����
void SeqListErase(SL* ps, int pos);