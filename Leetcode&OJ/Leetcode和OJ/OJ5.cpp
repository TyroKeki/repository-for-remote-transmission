//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node {
//	int id;
//	struct node* next;
//}node;
//
//node* createNode(int n) {
//	node* NewNode = (node*)malloc(sizeof(node));
//	NewNode->id = n;
//	NewNode->next = NULL;
//	return NewNode;
//}
//
//int main() {
//	int m, n;
//	int i = 0, j = 0, k = 0;
//	scanf("%d%d", &m, &n);
//	node* pointers[100005];
//
//	for (i = 0; i <= m; i++) {
//		pointers[i] = createNode(0);//初始化所有指针指向的链表
//	}
//	for (i = 1; i <= n; i++) {
//		int id,rights;
//		scanf("%d %d", &id, &rights);
//		//修改链表
//		node *head, *tail;
//		node* cursor;
//		cursor = pointers[rights];
//
//		while (cursor->next != NULL) {
//			cursor = cursor->next;
//		}
//		cursor->id = id;
//		cursor->next = createNode(0);
//	}
//
//	//输出结果
//	for (i = m; i >= 0; i--) {
//		node* cursor = pointers[i];
//		printf("%d ", i);//先打印题号
//		if(cursor->next == NULL){
//			printf("\n");
//			continue;
//		}
//		else {
//			while (cursor->next != NULL) {
//				printf("%d ", cursor->id);
//				cursor = cursor->next;
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

/*
7 4
1 3
2 3
3 5
4 0
*/

/*
5 4
1 0
2 1
3 5
4 5
*/