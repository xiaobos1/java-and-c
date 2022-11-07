#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef char ElemType;

typedef struct BitNode
{
	char data;
	struct BitNode* lchild, * rchild;

}BitNode,*BiTree;

//����һ�Ŷ�����
void CreateBiTree(BiTree* T)
{
	 char c;
	scanf("%c",&c);
	if (' ' == c)
	{
		*T = NULL;
	}
	else
	{
		*T = (BitNode*)malloc(sizeof(BitNode));
		(*T)->data = c;
		CreateBiTree(&(*T)->lchild);
		CreateBiTree(&(*T)->rchild);
	}
}

void visit(ElemType e,int level)
{
	printf("%c λ�ڵ�%d��\n", e, level);
}





//ǰ�����������
void preOrderTraverse(BiTree T, int level)
{
	if (T)
	{
		visit(T->data, level);
		preOrderTraverse(T->lchild, level+1);
		preOrderTraverse(T->lchild, level+1);

	}
}

int main()
{
	int level = 1;
	BiTree T = NULL;
	CreateBiTree(&T);
	preOrderTraverse(T, level);
	return 0;
}