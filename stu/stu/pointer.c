#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void CountInc(int n) {
	n++;
}

void CountInc2(int* n) {
	(*n)++;
}

int swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int SumArray(int* pA, int size);

int main() {
	//int num = 10;
	//int*ptr; // (������ Ÿ��) * (������ �ּҰ�)
	//ptr = &num;
	//printf("%p\n", &ptr);
	//printf("%d", *ptr);

	//int a = 0;
	//int* ptr;
	//int* ptrA;

	//ptr = &a;
	//*ptr = 1;
	//printf("%d, %d\n", a, *ptr);

	//int i = 10;
	//int* ptr = &i;
	//printf("*ptr �� : %d\n", *ptr);

	//*ptr = i + 5;
	//printf("i�� : %d\n", i);

	//i += 20;
	//printf("*ptr�� : %d\n", *ptr);

	/*int a = 3;
	int* ptr = &a;*/
	// ptr�� ������ Ÿ���� int

	//int a = 10;
	//int* ptr = &a;

	//printf("%d // %p // %p // %p", a, &a, *ptr, &ptr);

	//int* pi;
	//double* pd;
	//int num = 10;
	//pi = &num;

	//printf("pi�� ũ�� : %d\n", sizeof(pi));			// pointer�� ũ��
	//printf("pd�� ũ�� : %d\n", sizeof(pd));			// pointer�� ũ��
	//printf("char*�� ũ�� : %d\n", sizeof(char*));	
	//printf("short*�� ũ�� : %d\n", sizeof(short*));
	//printf("int*�� ũ�� : %d\n", sizeof(int*));

	//printf("*pi�� ũ�� : %d\n", sizeof(*pi));

	//int a = 10;
	//CountInc(a);
	//printf("a�� �� : %d\n", a);
	//CountInc2(&a);
	//printf("a�� �� : %d", a);

	//int x = 10, y = 20;
	//swap(&x, &y);
	//printf("x = %d, y = %d", x, y);

	//int arr[4] = {10, 20, 30, 40};
	//int* p = arr;

	//for (int i = 0; i < sizeof(arr) / 4; i++) {
	//	printf("%d\n", *(p + i));
	//}

	int a[] = { 10, 5, 15, 23, 7 };
	int sum;
	sum = SumArray(a, 5);
	printf("%d", sum);

	return 1;
}

int SumArray(int* pA, int size) {
	int result = 0;
	for (int i = 0; i < size; i++) {
		result += *(pA + i);
	}
	return result;
}