////31ms 10MB
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void carrier(int* arr) {
//	int i, j, k;
//	int carry = 0;
//	i = 0;
//	while (arr[i] != -1) {
//		i++;
//	}
//	int len3 = i;
//	for (i = 0; i < len3; i++) {
//		arr[i] += carry;
//		carry = 0;
//		carry = arr[i] / 10;
//		arr[i] = arr[i] % 10;
//	}
//	//arr[i] = carry; //最前一位初始是-1
//	//arr[i + 1] = -1;
//	while (carry != 0) {
//		int temp = carry % 10;
//		carry /= 10;
//		arr[i] = temp;
//		i++;
//	}
//	arr[i] = -1;
//}
//
//void reverse(int* arr) {
//	int i, j, k;
//	i = 0;
//	while (arr[i] != -1) {
//		i++;
//	}
//	int len3 = i;
//	for (i = 0; i < len3/2; i++) {
//		int temp = arr[i];
//		arr[i] = arr[len3 - 1 - i];
//		arr[len3 - 1 - i] = temp;
//	}
//}
//
//void forward(int* arr,int n) {
//	int i, j, k;
//	int arr2[250];
//	i = 0;
//	while (arr[i] != -1) {
//		i++;
//	}
//	int len3 = i;
//	for (i = 0; i < len3+1; i++) {
//		arr2[i] = arr[i];
//	}
//	for (i = 0; i < n; i++) {
//		arr[i] = 0;
//	}
//	for (i = 0; i < len3+1; i++) {
//		arr[i + n] = arr2[i];
//	}
//}
//
//int sum(int arr[][500],int len2) {
//	int i, j, k;
//	int flag = 1,out;
//	int len3;
//	for (i = 0; i < 500; i++) { //清扫空间
//		arr[300][i] = -1;
//	}
//
//	j = 0;//只能手动来一次
//	i = 0;
//	while (arr[j][i] != -1) {
//		i++;
//	}
//	len3 = i;
//	for (i = 0; i < len3; i++) { //300是范围外的储存空间
//		arr[300][i] = arr[300][i] + arr[j][i] + 1;
//	}
//
//	for (j = 1; j < len2; j++) {
//		i = 0;
//		while (arr[j][i] != -1) {
//			i++;
//		}
//		len3 = i;
//		for (i = 0; i < len3; i++) { //300是范围外的储存空间
//			arr[300][i] += arr[j][i];
//		}
//	}
//	carrier(arr[300]);
//
//	i = 0;
//	while (arr[300][i] != -1) {
//		i++;
//	}
//	len3 = i;
//
//	return len3;
//}
//
//char* multiply(char* num1, char* num2) {
//	int len1 = strlen(num1);
//	int len2 = strlen(num2);
//	int save[500][500];
//	int i, j, k;
//	for (i = 0; i < len1; i++) {
//		num1[i] = num1[i] - '0';
//		//printf("%d ", num1[i]);
//	}
//	//printf("\n");
//
//	for (i = 0; i < len2; i++) {
//		num2[i] = num2[i] - '0';
//		//printf("%d ", num2[i]);
//	}
//
//	//printf("\n");
//
//	for (i = 0; i < len2; i++) {
//		for (j = 0; j < len1; j++) {
//			save[i][j] = num1[j] * num2[i];
//		}
//		save[i][j] = -1;
//	}	
//	
//	//for(i=0;i < len2; i++){
//	//	j = 0;
//	//	while (save[i][j] != -1) {
//	//		printf("%d ", save[i][j]);
//	//		j++;
//	//	}
//	//	printf("\n这是原始输入\n");
//	//}
//
//	
//	for (i = 0; i < len2; i++) {
//		reverse(save[i]);
//		carrier(save[i]);
//		//reverse(save[i]);
//	}
//
//	//for (i = 0; i < len2; i++) {
//	//	j = 0;
//	//	while (save[i][j] != -1) {
//	//		printf("%d ", save[i][j]);
//	//		j++;
//	//	}
//	//	printf("\n这是进位\n");
//	//}
//
//
//	for (i = 0; i < len2; i++) {
//		forward(save[i],len2 - i - 1);
//	}
//
//	//for (i = 0; i < len2; i++) {
//	//	j = 0;
//	//	while (save[i][j] != -1) {
//	//		printf("%d ", save[i][j]);
//	//		j++;
//	//	}
//	//	printf("\n这是向前\n");
//	//}
//
//
//	int len3 = sum(save,len2);
//
//	//save[300][len3] = -1;
//	for (i = 0; i < len3;i++) {
//		printf("%d ", save[300][i]);
//	}
//	printf("这是求和\n");
//	//carrier(save[300]);
//	reverse(save[300]);
//
//	for (i = 0; i < len3;i++) {
//		printf("%d ", save[300][i]);
//	}
//	printf("这是进位后");
//
//	//for (i = 0; i < len3;i++) {
//	//	printf("%d ", save[300][i]);
//	//}
//	//printf("这是反转后");
//
//	char* result = (char*)malloc(500 * sizeof(char));
//	for (i = 0; i < len3; i++) {
//		result[i] = save[300][i] + '0';
//	}
//
//
//	if (num1[0] == 0 || num2[0] == 0) {
//		result[1] = '\0';
//	} //特判打表
//
//	result[i] = '\0';
//	printf("%s", result);
//	//printf("这是结果");
//
//
//
//	return result;
//}
//
//
//
//int main() {
//	int i, j, k;
//	char num1[250] = "140";
//	char num2[250] = "721";
//	char* p;
//	p = multiply(num1, num2);
//	return 0;
//}
//
//
////测试进位器
////int main() {
////	int arr[7] = { 11,22,33,44,55,-1 }; //理应 1 3 5 7 9 5 -1
////	carrier(arr);
////}