// ���������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	double xf_sum = 0;
	double jd_sum = 0;
	printf("��������� <�ո�> ѧ�� <�س�>\n���� ��#����������\n");
	char s[100] = { 0 };
	while (s[0] != '#') {
		fgets(s, 100, stdin);
		int score;
		double xue_fen, ji_dian;
		if (sscanf(s, "%d %lf", &score, &xue_fen) < 2) continue;
		xf_sum += xue_fen;
		if (score >= 95) ji_dian = 5.0;
		else if (score >= 60) {
			score = score - 60;
			score = score / 3;//��������������������
			score = score * 3;
			ji_dian = 1.5 + score * 0.1;
		}
		else ji_dian = 0;

		jd_sum += ji_dian * xue_fen;
	}//while
	printf("��ľ����� %.2f \n", jd_sum / xf_sum);
	scanf("\n");
    return 0;
}

