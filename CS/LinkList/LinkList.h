#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#include "..\Common.h"
//Ԫ�����Ͷ���
typedef int ElemType;

//���ڵ����Ͷ���
typedef struct LinkNode
{
	ElemType Node;
	struct LinkNode *Next;

}LinkNode, *pLinkList;

//����Ԫ���б�������
pLinkList CreateLinkList(const ElemType *elemArray, uint length);

//����Ԫ��ָ��������������ElemTypeֵΪϵͳĬ��
pLinkList CreateLinkList(const uint elemCount);

//������������������
pLinkList CreateLinkList(const pLinkList  linkList);

//��������ͷſռ�
bool ClearLinkList(pLinkList linkList);

//ɾ��������ĳһ�����
pLinkList DeleteNode(LinkNode * node);

//ɾ�������е�index�����
pLinkList DeleteNodeAt(const uint  index);

//��ȡ����ڵ����
int GetNodesCount(pLinkList linkList);

//��ȡ��index(��0��ʼ����)���ڵ�Elem 
ElemType GetNodeAt(uint index);

//��ȡ��index(��0��ʼ����)���ڵ�ָ
pLinkList GetNodePointAt(uint index);

//��λ��index������ڵ�
void InsertLinkNode(pLinkList *linkList, LinkNode *node, uint index);

//��ĩβ����ڵ�
pLinkList InsertRearLinkNode(pLinkList *linkList, LinkNode *node);

//���ײ�����ڵ�
pLinkList InsertHeadLinkNode(pLinkList *linkList, LinkNode *node);

//��ת����
void ReverseLinkList(pLinkList linkList);

#endif