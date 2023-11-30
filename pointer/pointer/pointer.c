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
	//	printf("%d // ", a[i]); // 값
	//	printf("%d // ", p[i]); // 값
	//	printf("%d // ", *(p+i)); // 값
	//	printf("%p\n", p+i); // 주소값
	//}

	/*int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	print_month(&month, 12);*/

	/*char* pC = "C programming";
	printf("%s\n", pC);

	printf("반복문을 이용해 한 글자씩 출력 \n");
	while (*pC != NULL){
		printf("%c ", *pC);
		*pC++;
	}*/

	/*char* pStr[] = { "english", "math", "korean" };
	char subject[][8] = { "english", "math", "korean" };
	int i;
	printf("포인터 배열 이용 문자열 출력\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s \n", *(pStr + i));
	}
	printf("이차원 배열 이용 문자열 출력 \n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s \n", subject[i]);
	}*/

	/*char* animal[3];
	animal[0] = "호랑이";
	animal[1] = "사자";
	animal[2] = "토끼";
	printAni(animal);*/

	/*struct student std[MAX_STUDENT];
	int i;
	printf("%d 명의 학생 정보를 이력하세요.\n", MAX_STUDENT);
	for (int i = 0; i < MAX_STUDENT; i++)
	{
		printf("이름 : ");
		scanf("%s", std[i].name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d", &std[i].korean, &std[i].english, &std[i].math);

		std[i].average = (std[i].korean + std[i].english + std[i].math) / 3.0;
	}
	printf("\n 이름 국어 영어 수학 평균 \n");
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