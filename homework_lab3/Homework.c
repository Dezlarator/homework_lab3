#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int task1() {
	double a;
	printf("Введите длинну квадрата: ");
	scanf("%lf", &a);
	double R = a / (sqrt(2));
	double r = a / 2;
	printf("Радиус вписанной окружности: %.2f\n", r);
	printf("Радиус описанной окружности: %.2f\n", R);
}
int main() {
	setlocale(LC_ALL, "Russian");
	task1();
	return 0;
}