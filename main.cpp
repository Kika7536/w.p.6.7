#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int bacterium, antibiotic, clock = 0;

	while (true) {
		cout << "������� ���������� ��������: ";
		cin >> bacterium;
		if (bacterium < 1) {
			cout << "������! ���������� �������� �� ����� ���� ������ 1. ��������� �������" << endl;
		}
		else {
			break;
		}
	}

	while (true) {
		cout << "������� ���������� ������������: ";
		cin >> antibiotic;
		if (antibiotic < 1) {
			cout << "������! ���������� ������������ �� ����� ���� ������ 1. ��������� �������" << endl;
		}
		else {
			break;
		}
	}

	for (antibiotic *= 10; bacterium > 0 && antibiotic > 0; antibiotic--) {
		clock++;
		bacterium *= 2;
		bacterium -= antibiotic;
		if (bacterium <= 0) {
			cout << "����� " << clock << " ���� �������� ��������: 0" << endl;
		}
		else {
			cout << "����� " << clock << " ���� �������� ��������: " << bacterium << endl;

		}
	}

	system("pause");

} 