/**
 * @file Shindel_515v_2021.c
 * @author Ўиндель ћ. ¬., гр. 515в
 * @date 14 июн€ 2021
 * @brief Ћетн€€ практика
*/

#include <stdio.h>
#include <locale.h>

/**
 * @brief выводит в текстовом виде число
 * @param num число
*/
void printNumber(int num);

/**
 * @brief выводит врем€ в текстовом виде
 * @param hours часы
 * @param minutes минуты
*/
void printTime(int hours, int minutes);

int main() {
	int hours, minutes;

	setlocale(LC_ALL, "rus");

	printf("введiть години та хвилини: ");
	scanf_s("%d %d", &hours, &minutes);

	printTime(hours, minutes);
	printf("\n");

	return 0;
}

void printNumber(int num) {
	if (num >= 10 && num <= 19) {
		printf(num == 10 ? "дес€ть" :
			   num == 11 ? "одинадц€ть " :
			   num == 12 ? "дванадц€ть " :
			   num == 13 ? "тринадц€ть " :
			   num == 14 ? "чотирнадц€ть " :
			   num == 15 ? "п'€тнадц€ть " :
			   num == 16 ? "шiстнадц€ть " :
			   num == 17 ? "сiмнадц€ть " :
			   num == 18 ? "вiсiмнадц€ть " :
			   num == 19 ? "дев'€тнадц€ть " : "");
	}
	else {
		int dec = num / 10 % 10, unit = num % 10;
		printf(dec == 2 ? "двадц€ть " :
			   dec == 3 ? "тридц€ть " :
			   dec == 4 ? "сорок " :
			   dec == 5 ? "п'€тьдес€т " :
			   dec == 6 ? "шiстьдес€т " : "");
		printf(num == 0 ? "нуль " :
			   unit == 1 ? "одна " :
			   unit == 2 ? "двi " :
			   unit == 3 ? "три " :
			   unit == 4 ? "чотири " :
			   unit == 5 ? "п'€ть " :
			   unit == 6 ? "шiсть " :
			   unit == 7 ? "сiм " :
			   unit == 8 ? "вiсiм " :
			   unit == 9 ? "дев'€ть " : "");
	}
}

void printTime(int hours, int minutes) {
	if (hours <= 24 && hours >= 0 &&
		minutes <= 60 && minutes >= 0) {
		printNumber(hours);
		printf((hours % 10 == 1 && hours != 11) ? "година " :
			   hours % 10 == 3 || (hours % 10 == 4 && hours != 14) ? "години " : "годин ");
		printNumber(minutes);
		printf((minutes % 10 == 1 && minutes != 11) ? "хвилина" :
			   minutes % 10 == 3 || (minutes % 10 == 4 && minutes != 14) ? "хвилини" : "хвилин");
	}
	else {
		printf("неправильний час");
	}
}