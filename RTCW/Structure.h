#pragma once
#include <stdio.h>

struct question { //��������� � ������
	char question[60]; //�������
	char v1[60]; //������ 1
	char v2[60]; //������ 2
	char v3[60]; //������ 3
	char v4[60]; //������ 4
	int answer; //����� ������
};
typedef struct question S_Data;// ��������� �������� ����

struct test
{
	int qc;
	int question_time;
	double mark;
};
typedef struct test Test_Data;