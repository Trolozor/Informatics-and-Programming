//                                               Direct By Semen Dostavalov

/*
Данный код предназначен для нахождение площади
трёх фигур:"Треугольник","Окружность","Прямоугольник"
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A = 0, B = 0, X = 0,S = 0;
	printf("Для какой фигуры будем делать рассчёт?\n");
	printf(" 1-Прямоугольник\n 2-Треугольник\n 3-Окружность\n");
	scanf_s("%d", &X);
	if (X > 3 || X < 1){
		printf("Такой фигуры нету");
		return 0;
    }
	if (X == 1) {
		printf("Введите данные для прямоугольника(сторона А и сторона Б)\n");
		scanf_s("%d%d", &A, &B);
		if (A < 0 || B < 0) {
			printf("Неверный ввод данных");
			return 0;
		}
		S = A * B;
		printf("Площадь равна = %d",S);
		return 0;
	}
	if (X == 2) {
		printf("Введите данные для треугольника(основание и высота)\n");
		scanf_s("%d%d", &A, &B);
		if (A < 0 || B < 0) {
			printf("Неверный ввод данных");
			return 0;
		}
		S = (A * B)/2;
		printf("Площадь равна = %d", S);
		return 0;
	}
	if (X == 3) {
		printf("Введите данные для окружности(радиус)\n");
		scanf_s("%d", &A);
		if (A < 0) {
			printf("Неверный ввод данных");
			return 0;
		}
		S =  3.14 * pow(A,2);
		printf("Площадь равна = %d", S);
		return 0;
	}

	return 0;
}