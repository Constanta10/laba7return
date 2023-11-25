/*Написать функцию f(a,b), вычисляющую и возвращающую величину неизвестного угла С в треугольнике по заданным величинам его известных углов a и b.
Продемонстрировать ее работу для трех треугольников*/

#include<iostream>

using namespace std;

int ugol(int a, int b) {
	return 180 - (a + b);
}

int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "введите углы треугольника:";
	cin >> a >> b;
	cout << "третий угол равен: " << ugol(a, b) << endl;
	return 0;
}