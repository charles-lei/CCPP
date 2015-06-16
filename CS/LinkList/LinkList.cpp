#include "LinkList.h"
#include "..\Common\Common.h"

//根据元素列表创建链表
pLinkList CreateLinkList(const ElemType *elemArray, unsigned int length)
{
	pLinkList ret = nullptr;

	if (length == 0)
		return ret;

	for (uint i = 0; i < length; i++)
	{
		LinkNode *pLinkNode = new LinkNode();
		if (pLinkNode != nullptr)
		{
			InsertLinkNode(&ret, pLinkNode, i);
		}	
	}
	return ret;
}

//根据元素指定个数创建链表，ElemType值为系统默认
pLinkList CreateLinkList(const uint elemCount)
{
	return nullptr;
}

//根据现有链表创建链表
pLinkList CreateLinkList(const pLinkList  linkList)
{
	return nullptr;
}
//清空链表并释放空间
bool ClearLinkList(pLinkList linkList)
{
	return false;
}
//删除链表中某一个结点
pLinkList DeleteNode(LinkNode * node)
{
	return nullptr;
}

//删除链表中第index个结点
pLinkList DeleteNodeAt(const uint  index)
{
	return NULL;
}

//获取链表节点个数
int GetNodesCount(pLinkList linkList)
{
	return 0;
}

//获取第index(从0开始计数)个节点Elem 
ElemType GetNodeAt(uint index)
{
	return 0;
}

//获取第index(从0开始计数)个节点指针
pLinkList GetNodePointAt(uint index)
{
	return NULL;
}

//反转链表
void ReverseLinkList(pLinkList linkList)
{
	return ;
}

//在位置index处插入节点
void InsertLinkNode(pLinkList *linkList, LinkNode *node, uint index)
{
	if(linkList == nullptr || *linkList== nullptr || node== nullptr)
		return;

	uint nodeCount = GetNodesCount(*linkList);

	if(index <= nodeCount)
	{

	}
	return ;
}

//在末尾插入节点
pLinkList InsertRearLinkNode(pLinkList *linkList, LinkNode *node)
{
	return nullptr;
}

//在首部插入节点
pLinkList InsertHeadLinkNode(pLinkList *linkList, LinkNode *node)
{
	return nullptr;
}