#define _CRT_SECURE_NO_WARNING
#include "Headers.h"

int degree(int a, int b) {
	int s = a;
	for (size_t i = 0; i < b-1; i++)
	{
		a *= s;
	}
	return a;
}

int sqrt(int a, int b) {
	return a * 1/b;
}

int SorD(int(*f)(int, int), int a, int b) {
	return(f(a, b));
}

main() {
	setlocale(LC_ALL, "Rus");
	int i = 0;
	int* i_adress = &i;
	char text = ' ';
	while (1)
	{
		system("cls");
		printf("i = %d\nРедактировать i - 1\nСоздание очистка динамического массива - 2\nВывод массива произвольной длины - 3\nФормирование треугольнойматрицы - 4\nКорень/степень числа - 5\n", *i_adress);
		scanf_s("%c", &text);
		switch (text)
		{
		case '1':
			i = GetInt();
			break;
		case '2':
			GetArray();
			break;
		case '3':
			free(GetNArray());
			break;
		case '4':
			NDimensionalArray();
			break;
		case '5':
			system("cls");
			printf("Степень - 1\nКорень - 2\n");
			scanf_s("%c", &text);
			switch (text)
			{
			case '1':
				GetDegree();
				break;
			case '2':
				GetSqrt();
				break;
			default:
				break;
			}
		default:
			break;
		}
	}
	

}

void GetDegree() {
	system("cls");
	int a, b;
	printf("Введите число\n");
	scanf_s("%d", &a);
	printf("Введите степень\n");
	scanf_s("%d", &b);
	printf("%d в степени %d - %d \n",a,b, SorD(degree,a,b));
	system("pause");
}

void GetSqrt() {
	system("cls");
	int a, b;
	printf("Введите число\n");
	scanf_s("%d", &a);
	printf("Введите степень корня\n");
	scanf_s("%d", &b);
	printf("Корень %d степени из %d равен %d \n", a, b, SorD(sqrt, a, b));
	system("pause");
}

void NDimensionalArray() {
	system("cls");
	int n;
	printf("Введите размер массива\n");
	int** a;
	scanf_s("%d", &n);
	printf("\n");
	a = calloc(n, sizeof(int));
	int c = 0;
	for (size_t i = 0; i < n; i++)  // цикл по строкам
	{
		a[i] = calloc(i+1, sizeof(int));
		for (size_t j = 0; j <= i; j++)
		{
			a[i][j] = c;
			c++;
		}
	}
	for (size_t i = 0; i < n; i++)  // цикл по строкам
	{
		for (size_t j = 0; j <=i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
}


int GetInt() {
	system("cls");
	printf("Введите i\n");
	int i;
	scanf_s("%d", &i);
	return i;
}

int* GetNArray() {
	system("cls");
	printf("Введите n\n");
	int n;
	scanf_s("%d", &n);
	int* int_array = calloc(n ,sizeof(int));
	for (int i = 0; i < n; i++)
	{
		int_array[i] = i;
		printf("%d ", int_array[i]);
	}
	printf("\n");
	system("pause");
	return int_array;
}


void GetArray() {
	int n = 1000000;
	int* int_array = calloc(n ,sizeof(int));
	for (int i = 0; i < n; i++)
	{
		int_array[i] = i;
	}
	system("cls");
	printf("Массив создан\n");
	free(int_array);
	printf("Память освобождена\n");
	system("pause");
}

