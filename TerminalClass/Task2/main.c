#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int Price, Co1 = 1, Co5 = 5, Co10 = 10, Co25 = 25, i = 0;
	int Oc1 = 0, Oc5 = 0, Oc10 = 0, Oc25 = 0;
	printf("������� � ��������\n");
	printf("��-��-��,� �������,��������� ��� �� �������� ����� ������ ��������� ��������.\n");
	printf("(������� ���� �� ��� ������)");
	scanf_s("%d", &Price);
	if (Price <= 0) {
		printf("�� �� �������?");
		return 1;
	}
	while (Price >= 25) {
		Price = Price - 25;
		Oc25 = Oc25 + 1;

	}
	while (Price >= 10) {
		Price = Price - 10;
		Oc10 = Oc10 + 1;

	}
	while (Price >= 5) {
		Price = Price - 5;
		Oc5 = Oc5 + 1;

	}
	while (Price >= 1) {
		Price = Price - 1;
		Oc1 = Oc1 + 1;

	}
	printf("����������� �����\n");
	printf("������� 25:%d\n",Oc25);
	printf("������� 10:%d\n",Oc10);
	printf("������� 5:%d\n",Oc5);
	printf("������� 1:%d\n",Oc1);
	return 1;
}