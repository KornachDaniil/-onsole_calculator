#include <iostream>
#include <math.h>
using namespace std;
	
double Sum(register double *firstNum, register double *secondNum);
double Difference(register double *firstNum, register double *secondNum);
double Multiplication(register double *firstNum, register double *secondNum);
double Division(register double *firstNum, register double *secondNum);
double Number_Squared(register double *number);
double Sqrt(register double *number);


int main() {
	setlocale(LC_ALL, "ru");
	register double firstNum, secondNum;
	register char operation = ' ';
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
			firstNum = Sum(&firstNum, &secondNum);
			cout << "\nСумма равна: " << firstNum;
			break;
		case '-':
			firstNum = Difference(&firstNum, &secondNum);
			cout << "\nРазность равна: " << firstNum;
			break;
		case '*':
			firstNum = Multiplication(&firstNum, &secondNum);
			cout << "\nУмножение равно: " << firstNum;
			break;
		case '/':
			firstNum = Division(&firstNum, &secondNum);
			cout << "Деление равно: " << firstNum;
			break;
		case '^':
			firstNum = Number_Squared(&firstNum);
			cout << "Квадрат равен: " << firstNum;
			break;
		case '&':
			firstNum = Sqrt(&firstNum);
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

double Sum(register double *firstNum, register double *secondNum) {
	return *firstNum + *secondNum;
}

double Difference(register double *firstNum, register double *secondNum) {
	return *firstNum - *secondNum;
}

double Multiplication(register double *firstNum, register double *secondNum) {
	return *firstNum * *secondNum;
}

double Division(register double *firstNum, register double *secondNum) {
	return *firstNum / *secondNum;
}

double Number_Squared(register double *number) {
	return *number * *number;
}

double Sqrt(register double *number) {
	return sqrt(*number);
}