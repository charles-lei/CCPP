#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#include "..\Common.h"
//元素类型定义
typedef int ElemType;

//链节点类型定义
typedef struct LinkNode
{
	ElemType Node;
	struct LinkNode *Next;

}LinkNode, *pLinkList;

//根据元素列表创建链表
pLinkList CreateLinkList(const ElemType *elemArray, uint length);

//根据元素指定个数创建链表，ElemType值为系统默认
pLinkList CreateLinkList(const uint elemCount);

//根据现有链表创建链表
pLinkList CreateLinkList(const pLinkList  linkList);

//清空链表并释放空间
bool ClearLinkList(pLinkList linkList);

//删除链表中某一个结点
pLinkList DeleteNode(LinkNode * node);

//删除链表中第index个结点
pLinkList DeleteNodeAt(const uint  index);

//获取链表节点个数
int GetNodesCount(pLinkList linkList);

//获取第index(从0开始计数)个节点Elem 
ElemType GetNodeAt(uint index);

//获取第index(从0开始计数)个节点指
pLinkList GetNodePointAt(uint index);

//在位置index处插入节点
void InsertLinkNode(pLinkList *linkList, LinkNode *node, uint index);

//在末尾插入节点
pLinkList InsertRearLinkNode(pLinkList *linkList, LinkNode *node);

//在首部插入节点
pLinkList InsertHeadLinkNode(pLinkList *linkList, LinkNode *node);

//反转链表
void ReverseLinkList(pLinkList linkList);

#endif