#define _CRT_SECURE_NO_WARNING
#include "Headers.h"
main() {
	setlocale(LC_ALL, "Rus");
	int i = 0;
	int* i_adress = &i;
	while (1)
	{
		system("cls");
		printf("i = %d\nРедактировать i - 1\nСоздание очистка динамического массива - 2\nВывод массива произвольной длины - 3\n", *i_adress);
		char text = ' ';
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
			int n = 0;
			scanf_s("%d", &n);
			GetArray(n);
			break;
		default:
			break;
		}
	}
	

}

int GetInt() {
	system("cls");
	printf("Введите i\n");
	int i;
	scanf_s("%d", &i);
	return i;
}

void GetArray() {
	int n = 1000000;
	int* int_array = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		int_array[i] = i;
	}
	free(int_array);
}

