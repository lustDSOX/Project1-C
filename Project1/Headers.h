#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define RUS "chcp 1251"
#define squaring(s)s*s
#include<stdio.h>
#include<malloc.h>
int GetInt();
void GetArray();
int* GetNArray();
void NDimensionalArray();
void GetDegree();
void GetSqrt();
int (*f)(int, int);