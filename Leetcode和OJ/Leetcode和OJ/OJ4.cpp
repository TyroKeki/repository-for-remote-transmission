//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void rotate(int matrix1[][15], int matrix1after[][15],int n) {
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			matrix1after[j][i] = matrix1[i][j];
//		}
//	}
//}
//
//void calculation(int matrix1[][15], int matrix2[][15], int result[][15], int n) {
//	int i, j, k;
//	int x=1, y=1;
//	int arrTemp1[15], arrTemp2[15],temp=0;
//	for (i = 1; i <= n; i++) {
//		temp = 0;
//		for (j = 1; j <= n; j++) {
//			arrTemp1[j] = matrix1[i][j];
//			//printf("%d ", arrTemp1[j]);
//		}
//		for(k = 1;k <= n; k++){
//			for (j = 1; j <= n; j++) {
//				arrTemp2[j] = matrix2[j][k];
//				//printf("%d ", arrTemp2[j]);
//			}
//			//¿ªÊ¼¼ÆËã
//			for (j = 1; j <= n; j++) {
//				temp += arrTemp1[j] * arrTemp2[j];
//				//printf("%d\n", temp);
//			}
//
//			//´æ´¢
//			result[x][y] = temp;
//			x++;
//			temp = 0;
//			if (x > n) {
//				x = 1;
//				y++;
//			}
//		}
//	}
//}
//
//
//int main() {
//	int n;
//	int matrix1[15][15];
//	int matrix2[15][15];
//	int matrix1after[15][15];
//	int result[15][15];
//	int i, j, k;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			scanf("%d", &matrix1[i][j]);
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			scanf("%d", &matrix2[i][j]);
//		}
//	}
//
//	//Ðý×ª¾ØÕó
//	rotate(matrix1, matrix1after, n);
//	
//	//¼ÆËã¾ØÕó
//	calculation(matrix1after, matrix2, result, n);
//
//	//for (int i = 1; i <= n; i++) {
//	//	for (int j = 1; j <= n; j++) {
//	//		printf("%d ", matrix1[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("%d ", result[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


/*
3
1 2 3
4 5 6
7 8 9
3 2 1
9 8 7
6 5 4
*/