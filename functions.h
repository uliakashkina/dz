#pragma once 

#include <stdbool.h>


/*
* Вычислить: L
* (При параметрах (1, 1, 1) ответ: 0,422105
*/
void ex_1();

/*
* Тело движется по закону S = t^3 – 3t^2 + 2.
* Вычислить скорость тела в момент времени t.
* Значение t ввести с клавиатуры (Функция скорости есть производная от функции расстояния по времени).
*/
void ex_2();

/*
* Даны вещественные числа а, b, с, а≠0.
* Решить уравнение аx ^ 2 + bx + c = 0.
* Учесть возможность равенства корней.
*/
int ex_3();

/*Написать программу, которая по коду города и длительности переговоров вычисляет
* их стоимость и результат выводит на экран:
* Одесса-код 048, 15грн;
* Киев-код 044, 18грн;
* Харьков-код 046, 13грн;
* Винница-код 045, 11грн.
* В гривнах указана стоимость звонка в 1 минуту.
*/
void ex_4();

/*
* Натуральное число из n цифр является число Армстронга, 
* если сумма его цифр возведенных в n - ую степень равна самому числу.
* Получите все эти числа состоящие из четырех цифр
* (пример 1³ + 5³ + 3³ = 153).
*/
void ex_5(); 

/*
* Дано целое число в двоичной системе счисления, т.е. последовательность цифр 0 и 1. 
* Составить программу перевода этого числа в десятичную систему счисления 
* (число представлено в виде массива).
*/
void ex_6();

/*
* Сформируйте массив L(I, J) с помощью датчика случайных чисел от - 10 до 10.
* Увеличить каждый элемент массива в 3 раза и поменяйте знак на противоположный.
* Массив выведите на экран в виде таблицы.
*/
void ex_7();
