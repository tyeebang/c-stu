#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_STUDENT 3

void print_month(int* mp, int size) {
	int i;
	for (int i = 0; i < size; i++) {
		printf("%5d", *(mp + i));
		if ((i + 1) % 5 == 0) {
			printf("\n");
		}
	}
}

void printAni(char** ppanimal) {
	printf("%s\n", ppanimal[0]);
	puts(ppanimal[1]);
	puts(ppanimal[2]);
}

struct student
{
	char name[20];
	int korean;
	int english;
	int math;
	double average;
};

struct point3D
{
	int x;
	int y;
	int z;
};

int main() {
	/*int a = 10;
	int* ptr;
	ptr = &a;
	printf("%p\n", a);
	printf("%p\n", ptr);
	printf("%p\n", *ptr);
	printf("%d", *ptr);*/

	//int a[] = { 5, 10, 15, 20, 25 };
	//int* p = a;
	//for (int i = 0; i < 5; i++) {
	//	printf("%d // ", a[i]); // ��
	//	printf("%d // ", p[i]); // ��
	//	printf("%d // ", *(p+i)); // ��
	//	printf("%p\n", p+i); // �ּҰ�
	//}

	/*int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	print_month(&month, 12);*/

	/*char* pC = "C programming";
	printf("%s\n", pC);

	printf("�ݺ����� �̿��� �� ���ھ� ��� \n");
	while (*pC != NULL){
		printf("%c ", *pC);
		*pC++;
	}*/

	/*char* pStr[] = { "english", "math", "korean" };
	char subject[][8] = { "english", "math", "korean" };
	int i;
	printf("������ �迭 �̿� ���ڿ� ���\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s \n", *(pStr + i));
	}
	printf("������ �迭 �̿� ���ڿ� ��� \n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s \n", subject[i]);
	}*/

	/*char* animal[3];
	animal[0] = "ȣ����";
	animal[1] = "����";
	animal[2] = "�䳢";
	printAni(animal);*/

	/*struct student std[MAX_STUDENT];
	int i;
	printf("%d ���� �л� ������ �̷��ϼ���.\n", MAX_STUDENT);
	for (int i = 0; i < MAX_STUDENT; i++)
	{
		printf("�̸� : ");
		scanf("%s", std[i].name);
		printf("����, ����, ���� ���� : ");
		scanf("%d %d %d", &std[i].korean, &std[i].english, &std[i].math);

		std[i].average = (std[i].korean + std[i].english + std[i].math) / 3.0;
	}
	printf("\n �̸� ���� ���� ���� ��� \n");
	for (int i = 0; i < MAX_STUDENT; i++)
	{
		printf("%s %d %d %d %.2f \n", std[i].name, std[i].korean, std[i].english, std[i].math, std[i].average);
	}*/

	struct point3D td;
	struct point3D * pd;
	pd = &td;

	pd -> x = 10;
	pd -> y  = 7;
	pd -> z = 5;

	printf("x : %d\n", pd->x);
	printf("y : %d\n", pd->y);
	printf("z : %d\n", pd->z);

	return 0;
}