//                                                  Direct By Semen Dostavalov

/*
������ ��� ������������ ��� �����������, 
������ �������� ������������ ���� �����������
� ��������� ������������ ������� � ���������.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int X1 = 0, X2 = 0, Y1 = 0, Y2 = 0, R1 = 0, R2 = 0, D = 0;
	printf("������� �������� ������� �����(X,Y,R)\n");
	scanf_s("%d %d %d",&X1,&Y1,&R1);
	if (R1 == 0 || (Y1 == 0 && X1 == 0)) {
		printf("�������� ���� ������");
		return 0;
	}
	printf("������� �������� ������� �����(X,Y,R)\n");
	scanf_s("%d %d %d", &X2, &Y2, &R2);
	if (R2 == 0 || (Y2 == 0 && X2 == 0)) {
		printf("�������� ���� ������");
		return 0;
	}

	D = sqrt(pow((X2 - X1),2) + pow((Y2 - Y1),2));

	if (D == R1 + R2) {
		printf("���������� ��������.");
		return 0;
	}

	if (D < R1 + R2) {
		if (D == 0 && R1 == R2) {
			printf("���������� ���������");
			return 0;
		}
		if (D + R1 < R2 || D + R2 < R1) {
			printf("���� ���������� ����� ������ ������");
			return 0;
		}
		else {
			printf("������������");
			return 0;
		}
	  }

	if (D > R1 + R2) {
		printf("���������� ����� �� �������");
		return 0;
	}

	return 0;
}