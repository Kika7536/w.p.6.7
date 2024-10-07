#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int bacterium, antibiotic, clock = 0;

	while (true) {
		cout << "Введите количество бактерий: ";
		cin >> bacterium;
		if (bacterium < 1) {
			cout << "Ошибка! Количество бактерий не может быть меньше 1. Повторите попытку" << endl;
		}
		else {
			break;
		}
	}

	while (true) {
		cout << "Введите количество антибиотиков: ";
		cin >> antibiotic;
		if (antibiotic < 1) {
			cout << "Ошибка! Количество антибиотиков не может быть меньше 1. Повторите попытку" << endl;
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
			cout << "после " << clock << " часа бактерий осталось: 0" << endl;
		}
		else {
			cout << "после " << clock << " часа бактерий осталось: " << bacterium << endl;

		}
	}

	system("pause");

} 