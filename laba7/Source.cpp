/*�������� ������� f(a,b), ����������� � ������������ �������� ������������ ���� � � ������������ �� �������� ��������� ��� ��������� ����� a � b.
������������������ �� ������ ��� ���� �������������*/

#include<iostream>

using namespace std;

int ugol(int a, int b) {
	return 180 - (a + b);
}

int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "������� ���� ������������:";
	cin >> a >> b;
	cout << "������ ���� �����: " << ugol(a, b) << endl;
	return 0;
}