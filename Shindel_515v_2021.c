/**
 * @file Shindel_515v_2021.c
 * @author ������� �. �., ��. 515�
 * @date 14 ���� 2021
 * @brief ������ ��������
*/

#include <stdio.h>
#include <locale.h>

/**
 * @brief ������� � ��������� ���� �����
 * @param num �����
*/
void printNumber(int num);

/**
 * @brief ������� ����� � ��������� ����
 * @param hours ����
 * @param minutes ������
*/
void printTime(int hours, int minutes);

int main() {
	int hours, minutes;

	setlocale(LC_ALL, "rus");

	printf("����i�� ������ �� �������: ");
	scanf_s("%d %d", &hours, &minutes);

	printTime(hours, minutes);
	printf("\n");

	return 0;
}

void printNumber(int num) {
	if (num >= 10 && num <= 19) {
		printf(num == 10 ? "������" :
			   num == 11 ? "���������� " :
			   num == 12 ? "���������� " :
			   num == 13 ? "���������� " :
			   num == 14 ? "������������ " :
			   num == 15 ? "�'��������� " :
			   num == 16 ? "�i��������� " :
			   num == 17 ? "�i�������� " :
			   num == 18 ? "�i�i�������� " :
			   num == 19 ? "���'��������� " : "");
	}
	else {
		int dec = num / 10 % 10, unit = num % 10;
		printf(dec == 2 ? "�������� " :
			   dec == 3 ? "�������� " :
			   dec == 4 ? "����� " :
			   dec == 5 ? "�'�������� " :
			   dec == 6 ? "�i�������� " : "");
		printf(num == 0 ? "���� " :
			   unit == 1 ? "���� " :
			   unit == 2 ? "��i " :
			   unit == 3 ? "��� " :
			   unit == 4 ? "������ " :
			   unit == 5 ? "�'��� " :
			   unit == 6 ? "�i��� " :
			   unit == 7 ? "�i� " :
			   unit == 8 ? "�i�i� " :
			   unit == 9 ? "���'��� " : "");
	}
}

void printTime(int hours, int minutes) {
	if (hours <= 24 && hours >= 0 &&
		minutes <= 60 && minutes >= 0) {
		printNumber(hours);
		printf((hours % 10 == 1 && hours != 11) ? "������ " :
			   hours % 10 == 3 || (hours % 10 == 4 && hours != 14) ? "������ " : "����� ");
		printNumber(minutes);
		printf((minutes % 10 == 1 && minutes != 11) ? "�������" :
			   minutes % 10 == 3 || (minutes % 10 == 4 && minutes != 14) ? "�������" : "������");
	}
	else {
		printf("������������ ���");
	}
}