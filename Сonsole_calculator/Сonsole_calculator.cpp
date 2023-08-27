#include <iostream>
#include <math.h>
using namespace std;
	
double Sum(double firstNum, double secondNum);
double Difference(double firstNum, double secondNum);
double Multiplication(double firstNum, double secondNum);
double Division(double firstNum, double secondNum);
double Number_Squared(double number);
double Root(double number);


int main() {
	setlocale(LC_ALL, "ru");
	double firstNum, secondNum;
	char operation = ' ';
	do {
		if (operation == ' ') {
			cout << "Введите первое число: ";
			cin >> firstNum;
			cout << "\nВыберите действие: ";
			cin >> operation;
			if (operation != '^' && operation != '&') {
				cout << "\nВведите второе число: ";
				cin >> secondNum;
			}
		}
		else {
			cout << "\nВыберите действие: ";
			cin >> operation;
			if (operation != '^' && operation != '&') {
				cout << "\nВведите второе число: ";
				cin >> secondNum;
			}
		}
		switch (operation) {
		case '+':
			firstNum = Sum(firstNum, secondNum);
			cout << "\nСумма равна: " << firstNum;
			break;
		case '-':
			firstNum = Difference(firstNum, secondNum);
			cout << "\nРазность равна: " << firstNum;
			break;
		case '*':
			firstNum = Multiplication(firstNum, secondNum);
			cout << "\nУмножение равно: " << firstNum;
			break;
		case '/':
			firstNum = Division(firstNum, secondNum);
			cout << "Деление равно: " << firstNum;
			break;
		case '^':
			firstNum = Number_Squared(firstNum);
			cout << "Квадрат равен: " << firstNum;
			break;
		case '&':
			firstNum = Root(firstNum);
			cout << "Корень числа равен: " << firstNum;
			break;
		default:
			cout << "Вы ввели некорректное действие.";
			cout << "\nПервое число равно: " << firstNum << endl;
			break;
		}
	} while (operation);
	return 0;
}

double Sum(double firstNum, double secondNum) {
	return firstNum + secondNum;
}

double Difference(double firstNum, double secondNum) {
	return firstNum - secondNum;
}

double Multiplication(double firstNum, double secondNum) {
	return firstNum * secondNum;
}

double Division(double firstNum, double secondNum) {
	return firstNum / secondNum;
}

double Number_Squared(double number) {
	return number * number;
}

double Root(double number) {
	return sqrt(number);
}