//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 辅助函数1：创建新字符串（原字符串 + 新字符）
//char* create_new_str(const char* original, char new_char) {
//    int orig_len = strlen(original);
//
//    // 分配内存：原长度 + 新字符 + 结束符
//    char* new_str = (char*)malloc(orig_len + 2);
//    if (new_str == NULL) {
//        printf("内存分配失败!\n");
//        return NULL;
//    }//多余
//
//    // 复制原字符串
//    strcpy(new_str, original);
//    // 添加新字符
//    new_str[orig_len] = new_char;
//    // 添加结束符
//    new_str[orig_len + 1] = '\0';
//
//    return new_str;
//}
//
//
//// 辅助函数2：移除指定位置的字符
//char* remove_char(const char* original, int index_to_remove) {
//    int len = strlen(original);
//
//    if (index_to_remove < 0 || index_to_remove >= len) {
//        printf("无效的索引: %d\n", index_to_remove);
//        return NULL;
//    }
//
//    // 分配内存：原长度 - 1个字符 + 结束符
//    char* new_str = (char*)malloc(len);  // 少1个字符，但malloc(len)足够
//    if (new_str == NULL) {
//        printf("内存分配失败!\n");
//        return NULL;
//    }
//
//    int new_index = 0;
//    for (int i = 0; i < len; i++) {
//        if (i != index_to_remove) {
//            new_str[new_index] = original[i];
//            new_index++;
//        }
//    }
//    new_str[new_index] = '\0';  // 重要：添加字符串结束符
//
//    return new_str;
//}
//
//
////主递归
//void char_sort(char* chars, char* after_char_sort) {
//    if (strlen(chars) == 0) {
//        printf("结果: %s\n", after_char_sort);
//        return;
//    }
//
//    for (int i = 0; i < strlen(chars); i++) {
//        char* new_after_char_sort = create_new_str(after_char_sort, chars[i]);
//        char* new_chars = remove_char(chars, i);
//        char_sort(new_chars, new_after_char_sort);
//        free(new_after_char_sort); free(new_chars);  // C特有
//    }
//}
//
//int main() {
//    char chars[10] = "abc";
//    char after_char_sort[10] = { 0 };
//    char_sort(chars, after_char_sort);
//
//    return 0;
//}