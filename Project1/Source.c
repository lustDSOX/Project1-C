#include "Headers.h"


int degree(int a, int b) {
	int s = a;
	for (size_t i = 0; i < b-1; i++)
	{
		a *= s;
	}
	return a;
}

float sqrt(int a, int b) {

	return a * (1/b);
}

int SorD(int(*f)(int, int), int a, int b) {
	return(f(a, b));
}

main() {
	system(RUS);
	int i = 0;
	int* i_adress = &i;
	char text = ' ';
	while (1)
	{
		system("cls");
		printf("i = %d\n������������� i - 1\n�������� ������� ������������� ������� - 2\n����� ������� ������������ ����� - 3\n������������ ����������� ������� - 4\n������ ����� - 5\n������� ����� - 6\n", *i_adress);
		printf("���������� ����� ������� �� ����������� ���� ��� ����� - 7\n");
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
			GetDegree();
			break;
		case '6':
			GetSqrt();
			break;
		case '7':
			GetLenght();
			break;
		default:
			break;
		}
	}
	

}

float GetLenght() {
	system("cls");
	int x1, y1, x2, y2;
	printf("������� x1\n");
	scanf("%d", &x1);
	printf("������� y1\n");
	scanf("%d", &y1);
	printf("������� x2\n");
	scanf("%d", &x2);
	printf("������� y2\n");
	scanf("%d", &y2);
	printf("����� ������� - %f\n", sqrt(squaring(x2 - x1) + squaring(y2 - y1), 2));
	system("pause");
}

void GetDegree() {
	system("cls");
	int a, b;
	printf("������� �����\n");
	scanf_s("%d", &a);
	printf("������� �������\n");
	scanf_s("%d", &b);
	printf("%d � ������� %d - %d \n",a,b, SorD(degree,a,b));
	system("pause");
}

void GetSqrt() {
	system("cls");
	int a, b;
	printf("������� �����\n");
	scanf_s("%d", &a);
	printf("������� ������� �����\n");
	scanf_s("%d", &b);
	printf("������ %d ������� �� %d ����� %d \n", a, b, SorD(sqrt, a, b));
	system("pause");
}

void NDimensionalArray() {
	system("cls");
	int n;
	printf("������� ������ �������\n");
	int** a;
	scanf_s("%d", &n);
	printf("\n");
	a = calloc(n, sizeof(int));
	int c = 0;
	for (size_t i = 0; i < n; i++)  // ���� �� �������
	{
		a[i] = calloc(i+1, sizeof(int));
		for (size_t j = 0; j <= i; j++)
		{
			a[i][j] = c;
			c++;
		}
	}
	for (size_t i = 0; i < n; i++)  // ���� �� �������
	{
		for (size_t j = 0; j <=i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	free(a);
	system("pause");
}


int GetInt() {
	system("cls");
	printf("������� i\n");
	int i;
	scanf_s("%d", &i);
	return i;
}

int* GetNArray() {
	system("cls");
	printf("������� n\n");
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
	printf("������ ������\n");
	free(int_array);
	printf("������ �����������\n");
	system("pause");
}

