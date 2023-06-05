#pragma once
#include <stdio.h>

struct question { //структура з даними
	char question[60]; //Питання
	char v1[60]; //Варіант 1
	char v2[60]; //Варіант 2
	char v3[60]; //Варіант 3
	char v4[60]; //Варіант 4
	int answer; //Номер відповіді
};
typedef struct question S_Data;// створення власного типу

struct test
{
	int qc;
	int question_time;
	double mark;
};
typedef struct test Test_Data;