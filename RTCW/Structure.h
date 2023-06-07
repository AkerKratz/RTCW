#pragma once
#include <stdio.h>

struct question { 
	char question[60]; 
	char v1[60]; 
	char v2[60]; 
	char v3[60]; 
	char v4[60]; 
	int answer; 
};
typedef struct question S_Data;

struct test
{
	int qc;
	int question_time;
	double mark;
};
typedef struct test Test_Data;