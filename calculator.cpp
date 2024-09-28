#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

//Вітаю
//IO-25
//Petrenko Kyryl
//Завдання 1. Управління версіями коду через Git
//Перше завдання з предмету виконане
//Предмет: Системне Програмування. Курсова робота