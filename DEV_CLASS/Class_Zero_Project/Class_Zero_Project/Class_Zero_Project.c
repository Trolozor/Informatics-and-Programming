//                                               Direct By Semen Dostavalov

/*
������ ��� ������������ ��� ���������� �������
��� �����:"�����������","����������","�������������"
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A = 0, B = 0, X = 0,S = 0;
	printf("��� ����� ������ ����� ������ �������?\n");
	printf(" 1-�������������\n 2-�����������\n 3-����������\n");
	scanf_s("%d", &X);
	if (X > 3 || X < 1){
		printf("����� ������ ����");
		return 0;
    }
	if (X == 1) {
		printf("������� ������ ��� ��������������(������� � � ������� �)\n");
		scanf_s("%d%d", &A, &B);
		if (A < 0 || B < 0) {
			printf("�������� ���� ������");
			return 0;
		}
		S = A * B;
		printf("������� ����� = %d",S);
		return 0;
	}
	if (X == 2) {
		printf("������� ������ ��� ������������(��������� � ������)\n");
		scanf_s("%d%d", &A, &B);
		if (A < 0 || B < 0) {
			printf("�������� ���� ������");
			return 0;
		}
		S = (A * B)/2;
		printf("������� ����� = %d", S);
		return 0;
	}
	if (X == 3) {
		printf("������� ������ ��� ����������(������)\n");
		scanf_s("%d", &A);
		if (A < 0) {
			printf("�������� ���� ������");
			return 0;
		}
		S =  3.14 * pow(A,2);
		printf("������� ����� = %d", S);
		return 0;
	}

	return 0;
}