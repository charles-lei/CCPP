#include "LinkList.h"
#include "..\Common\Common.h"

//����Ԫ���б�������
pLinkList CreateLinkList(const ElemType *elemArray, unsigned int length)
{
	pLinkList ret = NULL;

	if (length == 0)
		return ret;

	for (uint i = 0; i < length; i++)
	{
		LinkNode *pLinkNode = new LinkNode();
		if (pLinkNode != NULL)
		{
			InsertLinkNode(&ret, pLinkNode, i);
		}	
	}
	return ret;
}

//����Ԫ��ָ��������������ElemTypeֵΪϵͳĬ��
pLinkList CreateLinkList(const uint elemCount)
{
	return NULL;
}

//������������������
pLinkList CreateLinkList(const pLinkList  linkList)
{
	return NULL;
}
//��������ͷſռ�
bool ClearLinkList(pLinkList linkList)
{
	return false;
}
//ɾ��������ĳһ�����
pLinkList DeleteNode(LinkNode * node)
{
	return NULL;
}

//ɾ�������е�index�����
pLinkList DeleteNodeAt(const uint  index)
{
	return NULL;
}

//��ȡ����ڵ����
int GetNodesCount(pLinkList linkList)
{
	return 0;
}

//��ȡ��index(��0��ʼ����)���ڵ�Elem 
ElemType GetNodeAt(uint index)
{
	return 0;
}

//��ȡ��index(��0��ʼ����)���ڵ�ָ��
pLinkList GetNodePointAt(uint index)
{
	return NULL;
}

//��ת����
void ReverseLinkList(pLinkList linkList)
{
	return ;
}

//��λ��index������ڵ�
void InsertLinkNode(pLinkList *linkList, LinkNode *node, uint index)
{
	if(linkList == NULL || *linkList==NULL || node==NULL)
		return;

	uint nodeCount = GetNodesCount(*linkList);

	if(index <= nodeCount)
	{

	}
	return ;
}

//��ĩβ����ڵ�
pLinkList InsertRearLinkNode(pLinkList *linkList, LinkNode *node)
{
	return NULL;
}

//���ײ�����ڵ�
pLinkList InsertHeadLinkNode(pLinkList *linkList, LinkNode *node)
{
	return NULL;
}