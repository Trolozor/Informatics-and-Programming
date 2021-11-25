//                                                  Direct By Semen Dostavalov

/*
Данный код предназначен для определения, 
каково взаимное расположение двух окружностей
с заданными координатами центров и радиусами.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int X1 = 0, X2 = 0, Y1 = 0, Y2 = 0, R1 = 0, R2 = 0, D = 0;
	printf("Введите значения первого круга(X,Y,R)\n");
	scanf_s("%d %d %d",&X1,&Y1,&R1);
	if (R1 == 0 || (Y1 == 0 && X1 == 0)) {
		printf("Неверный ввод данных");
		return 0;
	}
	printf("Введите значения второго круга(X,Y,R)\n");
	scanf_s("%d %d %d", &X2, &Y2, &R2);
	if (R2 == 0 || (Y2 == 0 && X2 == 0)) {
		printf("Неверный ввод данных");
		return 0;
	}

	D = sqrt(pow((X2 - X1),2) + pow((Y2 - Y1),2));

	if (D == R1 + R2) {
		printf("Окружности касаются.");
		return 0;
	}

	if (D < R1 + R2) {
		if (D == 0 && R1 == R2) {
			printf("Окружности совпадают");
			return 0;
		}
		if (D + R1 < R2 || D + R2 < R1) {
			printf("Одна окружность лежит внутри другой");
			return 0;
		}
		else {
			printf("Пересекаются");
			return 0;
		}
	  }

	if (D > R1 + R2) {
		printf("Оркужности никак не связаны");
		return 0;
	}

	return 0;
}