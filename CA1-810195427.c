#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	/*this part declars some variables*/

	int secret_number=0;
	int i_counter=0;
	int input=0;
	int same_secret_numbe=0;
	int same_input=0;
	int positions = 0;
	int secret_numbe_after_change = 0;
	int y = 1;
	int same_input_after_change = 0;
	int color = 0;
	int exp_counter = 1;

	/*this part generates a random number in range of [1111,6666]and we can only use 1,2,3,4,5,6 in digits .
	for this goal i use 4 random number and i use ( (rand() % 6)+1) for genarate a random digit in range of[1,6] */

	srand((unsigned int) time(NULL));
	secret_number +=( (rand() % 6)+1)*1 ;
	secret_number += ((rand() % 6) + 1)*10;
	secret_number += ((rand() % 6) + 1)*100;
	secret_number += ((rand() % 6) + 1)*1000;

	/*this part talks about game roles with user*/
	printf("Welcome To Master Mind!\n\nI have chosen a number. It Has 4 Digits and it is in range of[1111,6666].\n");
	printf("Guess my number:");
	scanf("%d", &input);/*in this part computer get user number*/
	same_secret_numbe = secret_number;
	same_input = input;
	/*in this part i seprate same_input digits and store them in same_input_dig1 , same_input_dig2 same_input_dig3 same_input_dig4 */
	int same_input_dig1 = same_input % 10;
	same_input /= 10;
	int same_input_dig2 = same_input % 10;
	same_input /= 10;
	int same_input_dig3 = same_input % 10;
	same_input /= 10;
	int same_input_dig4 = same_input % 10;
	same_input /= 10;
	/*in this part i seprate same_secret_numbe digits and store them in same_secret_numberdig1 , same_secret_numberdig2 , same_secret_numberdig3 , same_secret_numberdig4 */
	int same_secret_numberdig1 = same_secret_numbe % 10;
	same_secret_numbe /= 10;
	int same_secret_numberdig2 = same_secret_numbe % 10;
	same_secret_numbe /= 10;
	int same_secret_numberdig3 = same_secret_numbe % 10;
	same_secret_numbe /= 10;
	int same_secret_numberdig4 = same_secret_numbe % 10;
	same_secret_numbe /= 10;
	/*in this part i compare digits of same_secret_numbe and digits of same_input
	if same_input_digits == same_secret_numberdigits i use positions++ */
	if (same_input_dig1 == same_secret_numberdig1) {
		positions++;
		same_input_dig1 = 0;
		same_secret_numberdig1 = 0;

	}
	if (same_input_dig2 == same_secret_numberdig2) {
		positions++;
		same_input_dig2 = 0;
		same_secret_numberdig2 = 0;

	}
	if (same_input_dig3 == same_secret_numberdig3) {
		positions++;
		same_input_dig3 = 0;
		same_secret_numberdig3 = 0;

	}
	if (same_input_dig4 == same_secret_numberdig4) {
		positions++;
		same_input_dig4 = 0;
		same_secret_numberdig4 = 0;

	}
	
	/* in this part if a digit of same_input and a digit of same_secret_number is equal i use color++  */
	if (same_input_dig1 == same_secret_numberdig1&&same_input_dig1 != 0) {
		color++;
		same_input_dig1 = 0;
		same_secret_numberdig1 = 0;
	}
	if (same_input_dig1 == same_secret_numberdig2&&same_input_dig1 != 0) {
		color++;
		same_input_dig1 = 0;
		same_secret_numberdig2 = 0;
	}
	if (same_input_dig1 == same_secret_numberdig3&&same_input_dig1 != 0) {
		color++;
		same_input_dig1 = 0;
		same_secret_numberdig3 = 0;
	}
	if (same_input_dig1 == same_secret_numberdig4&&same_input_dig1 != 0) {
		color++;
		same_input_dig1 = 0;
		same_secret_numberdig4 = 0;
	}
	if (same_input_dig2 == same_secret_numberdig1&&same_input_dig2 != 0) {
		color++;
		same_input_dig2 = 0;
		same_secret_numberdig1 = 0;
	}
	if (same_input_dig2 == same_secret_numberdig2&&same_input_dig2 != 0) {
		color++;
		same_input_dig2 = 0;
		same_secret_numberdig2 = 0;
	}
	if (same_input_dig2 == same_secret_numberdig3&&same_input_dig2 != 0) {
		color++;
		same_input_dig2 = 0;
		same_secret_numberdig3 = 0;
	}
	if (same_input_dig2 == same_secret_numberdig4&&same_input_dig2 != 0) {
		color++;
		same_input_dig2 = 0;
		same_secret_numberdig4 = 0;
	}
	if (same_input_dig3 == same_secret_numberdig1&&same_input_dig3 != 0) {
		color++;
		same_input_dig3 = 0;
		same_secret_numberdig1 = 0;
	}
	if (same_input_dig3 == same_secret_numberdig2&&same_input_dig3 != 0) {
		color++;
		same_input_dig3 = 0;
		same_secret_numberdig2 = 0;
	}
	if (same_input_dig3 == same_secret_numberdig3&&same_input_dig3 != 0) {
		color++;
		same_input_dig3 = 0;
		same_secret_numberdig3 = 0;
	}
	if (same_input_dig3 == same_secret_numberdig4&&same_input_dig3 != 0) {
		color++;
		same_input_dig3 = 0;
		same_secret_numberdig4 = 0;
	}
	if (same_input_dig4 == same_secret_numberdig1&&same_input_dig4 != 0) {
		color++;
		same_input_dig4 = 0;
		same_secret_numberdig1 = 0;
	}
	if (same_input_dig4 == same_secret_numberdig2&&same_input_dig4 != 0) {
		color++;
		same_input_dig4 = 0;
		same_secret_numberdig2 = 0;
	}
	if (same_input_dig4 == same_secret_numberdig3&&same_input_dig4 != 0) {
		color++;
		same_input_dig4 = 0;
		same_secret_numberdig3 = 0;
	}
	if (same_input_dig4 == same_secret_numberdig4&&same_input_dig4!=0) {
		color++;
		same_input_dig4 = 0;
		same_secret_numberdig4 = 0;
	}
	/*in this part i show the result of game*/
	printf("\nThe generated number was:%d\n", secret_number);
	printf("You guessed %d positions correctly!\nYou guessed %d colors correctly!\n\nThank you for playing .... :)\n", positions, color);
	return 0;
}