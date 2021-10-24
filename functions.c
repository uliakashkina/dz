
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "functions.h"

/* ДЗ на 1-й модуль */


void ex_1()
{
	setlocale(LC_ALL, "RUS");
	float x = 0;
	float a = 0;
	float c = 0;

	printf("введите значения х, а, с\n");
	scanf_s("%f %f %f", &a, &x, &c);

	float L;
	L = (sqrt(exp(x) - pow(cos(pow(x, 2) * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4)) / (exp(1) * sqrt(fabs(a + x * pow(c, 4))));
	printf("%f", L);
}

 

void ex_2()
{
	float t = 0;
	scanf_s("%f", &t);
	float S = 3*t*t - 6*t ;
		printf("%f", S);
}



int ex_3()

	{
		setlocale(LC_ALL, "RUS");
		double a = 0;
		double b = 0;
		double c = 0;
		double D = 0;
		double d = 0;
		double x1 = 0;
		double x2 = 0;

		printf("введите а ");
		scanf_s("%lf", &a);

		printf("введите b ");
		scanf_s("%lf", &b);

		printf("введите c ");
		scanf_s("%lf", &c);

		D = b * b - 4 * a * c;
		d = sqrt(D);

		if (a != 0)
		{
			if (D < 0)
				printf("нет корней");
			else
				if (D == 0)
				{
					x1 = -b / 2 * a;
					x2 = -b / 2 * a;
					printf("%lf %lf", x1, x2);
				}
				else
				{
					x1 = (-b + d) / (2 * a);
					x2 = (-b - d) / (2 * a);
					printf("%lf %lf", x1, x2);
				}
		}
		return 0;
	}
	


void ex_4()
{
    setlocale(LC_ALL, "RUS");
	int code = 0;
	int t = 0;
	 
	printf("введите код города");
	scanf_s("%d", &code);

	printf("введите время разговора");
	scanf_s("%d", &t);

	switch (code)
	{
	case 48:
		t = t * 15;
		printf("%d", t);
		break;
	case 44:
		t = t * 18;
		printf("%d", t);
		break;
	case 46:
		t = t * 13;
		printf("%d", t);
		break;
	case 45:
		t = t * 11;
		printf("%d", t);
		break;
	default:
		break;
	}
}



void ex_5()
{
	int d = 0;
	int sum = 0;

	for (int k = 1000; k < 10000; k++)
	{
		sum = 0;
		d = k;
		for (int i = 0; i < 4; i++)
		{
			sum = sum + pow((d % 10), 4);
			d = d / 10;
		}
		if (k == sum)
			printf("%d\n", sum);
 	}


}



void ex_6()
{
	setlocale(LC_ALL, "RUS");
	printf("введите число в двоичной системе счисления");
	int cc_2;   // число в 2сс
	scanf_s("%d", &cc_2);

	int d = 0;  // длина числа 2сс
	int copy;
	copy = cc_2;
	while (copy != 0)
	{
		copy /= 10;
		d += 1;
	}

	int cc_10 = 0;
	int n = 0;
	for (int i = 0; i <= d; i++)
	{
		cc_10 = cc_10 + (cc_2 % 10)*pow(2, n);
		n++;
		cc_2 /= 10;
	}
	printf("%d", cc_10);
}


void ex_7()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	int I = 0;
	int J = 0;

	printf("введите размер матрицы I x J\n");
	scanf_s("%d %d", &I, &J);

	int* mas = malloc(I * J * sizeof(int));

	for (int i = 0; i < I * J; i++)
	{
		mas[i] = -(rand() % 21 - 10) * 3;
	}
		for (int j = 0; j < I; j++)
		{
			for (int n = 0; n < J; n++)
			{
				printf("%3d", mas[j * J + n]);
			}
			printf("\n");

		}

}


/////////////////////////////////////////