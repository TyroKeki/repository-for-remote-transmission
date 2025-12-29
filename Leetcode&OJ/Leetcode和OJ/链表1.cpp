//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Node {
//	int data;
//	struct Node* next;
//};
//
//struct Node* CreateNode(int num) {
//	struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node)); //这个指针指向新建节点
//	NewNode->data = num;
//	NewNode->next = NULL;
//	return NewNode;
//}
//
//void InsertAfter(struct Node* previous, int data) {
//	//这个是中间插入
//	struct Node* NewNode = CreateNode(data);
//	NewNode->next = previous->next;
//	previous->next = NewNode;
//}
//
//
//int main() {
//	int i, j, k;
//	//这个是创建基点
//	struct Node* head = NULL;
//	struct Node* tail = NULL;
//	struct Node* Node1 = CreateNode(0);
//	head = Node1;
//	tail = Node1;
//
//	for (i = 1; i <= 100; i++) {
//		//这个是末尾添加
//		struct Node* Node1 = CreateNode(i);
//		tail->next = Node1;
//		tail = Node1;
//	}
//	
//	for (i = -1; i >= -100; i--) {
//		//这个是往前添加
//		struct Node* NewNode = CreateNode(i);
//		NewNode->next = head;
//		head = NewNode;
//	}
//	struct Node* cursor = head; //创建光标
//	//将光标移到data=0处
//	while (cursor->data != 0) {
//		cursor = cursor->next;
//	}	
//	//添加11，45，14
//	InsertAfter(cursor, 11);
//	cursor = cursor->next;
//	InsertAfter(cursor, 45);
//	cursor = cursor->next;
//	InsertAfter(cursor, 14);
//	cursor = cursor->next;
//
//	//删除最后一个节点（简易版）加上循环可以删多个节点
//	for (i = 1; i <= 5; i++) {
//		cursor = head;
//		while (cursor->next->next != NULL) {
//			cursor = cursor->next;
//		}
//		free(cursor->next);
//		cursor->next = NULL;
//	}
//
//	//删除第一个节点（简易版）加上循环可以删多个节点
//	for (i = 1; i <= 5; i++) {
//		struct Node* temp1 = head;
//		head = head->next;
//		free(temp1);
//	}
//
//	//删除中间节点（简易版）使用temp1
//	cursor = head;
//	while (cursor->next->data != 11) {
//		cursor = cursor->next;
//	}
//	struct Node* temp1 = cursor->next->next;
//	free(cursor->next);
//	cursor->next = temp1;
//
//	//删除中间节点（简易版）标准写法
//	cursor = head;
//	while (cursor->next->data != 45) {
//		cursor = cursor->next;
//	}
//	temp1 = cursor->next;
//	cursor->next = cursor->next->next;
//	free(temp1);
//
//	//检查
//	cursor = head;
//	while (cursor != NULL) {
//		printf("%d ", cursor->data);
//		cursor = cursor->next;
//	}
//}