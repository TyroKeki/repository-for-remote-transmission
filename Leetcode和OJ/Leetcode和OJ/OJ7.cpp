//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct student{
//	char id[20];
//	int shiji;
//	int kaoshi;
//}stu;
//
//int main() {
//	stu stu1[20];
//	int n, m;
//	int i, j, k;
//	int wait[20];
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%s%d%d", stu1[i].id,&stu1[i].shiji, &stu1[i].kaoshi);
//	}
//	//printf("%s %d %d\n", stu1[1].id, stu1[1].shiji, stu1[1].kaoshi);//输出看看
//
//	scanf("%d", &m);
//	for (i = 0; i < m; i++) {
//		scanf("%d", &wait[i]);
//	}
//	
//	//操作
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			if (wait[i] == stu1[j].shiji) {
//				printf("%s %d\n", stu1[j].id, stu1[j].kaoshi);
//				break;
//			}
//		}
//	}
//
//
//	return 0;
//}

/*
4
3310120150912233 2 4
3310120150912119 4 1
3310120150912126 1 3
3310120150912002 3 2
2
3 4
*/