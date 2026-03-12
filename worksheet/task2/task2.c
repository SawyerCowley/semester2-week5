/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: SAwyer Cowley
 * ID: 201958891
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:\n");

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	scanf("%s", hex);
	
	int i = 0;
	while (hex[i] != '\0') {
		//checks that all values must be allowed in hex
        if (!((hex[i] >= '0' && hex[i] <= '9') || (hex[i] >= 'a' && hex[i] <= 'f') || (hex[i] >= 'A' && hex[i] <= 'F'))) {
            printf("Error Invalid Hexadecimal\n");
			//terminate
			return 0;
        }
        i++;
    }

	//function to multiply digits by corresponding powers of 16
	
	//running product, reset i
	int inter = 0;
	i = 0;
	//while the empty character hasnt been reached
	while (hex[i] != '\0'){
		if (hex[i] >= '0' && hex[i] <= '9')
            inter = hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
		//char in C is 'short int' so value of character can be subtracted to reach integer and + 10 (integer offset)
            inter = hex[i] - 'A' + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            inter = hex[i] - 'a' + 10;

		//multiplication formula for hexedecimal digits
		decimal = decimal * 16 + inter;
		i++;
	}

	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}