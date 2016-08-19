/* Roman Calculator.c, Copyright (c) 2016, Dennis Arce
   Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
   and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
   
   The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
   IN THE SOFTWARE.
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "RomanCalculator.h"

//Convert an inputNumber to a string Roman Numeral
void convertIntToRoman(int inputNumber, unsigned char * outputRomanNumeral) {
	if ((inputNumber >= 4000) || (inputNumber <= 0)) {
		strcpy(outputRomanNumeral, ERROR_MSG);
	} else {
		int thousands=inputNumber/1000;
		strncpy(outputRomanNumeral, "MMM", thousands);
		int remainder=inputNumber-(thousands * 1000);
		if (remainder >= 900) {
			strncat(outputRomanNumeral, "CM", 2);
			remainder=remainder-900;
		}
		if (remainder >= 500) {
			strncat(outputRomanNumeral, "D", 1);
			remainder=remainder-500;
		}
		if (remainder >= 400) {
			strncat(outputRomanNumeral, "CD", 2);
			remainder=remainder-400;
		}
		int hundreds=remainder/100;
		strncat(outputRomanNumeral, "CCC", hundreds);
		remainder=remainder - (hundreds *100);
		if (remainder >=90) {
			strncat(outputRomanNumeral, "XC", 2);
			remainder=remainder-90;
		}
		if (remainder >=50) {
			strncat(outputRomanNumeral, "L", 1);
			remainder=remainder-50;
		}
		if (remainder >=40) {
			strncat(outputRomanNumeral, "XL", 2);
			remainder=remainder-40;
		}
		int tens=remainder/10;
		strncat(outputRomanNumeral, "XXX", tens);
		remainder=remainder - (tens * 10);
		if (remainder == 9) {
			strncat(outputRomanNumeral, "IX", 2);
			remainder= remainder-9;
		}
		if (remainder >= 5) {
			strncat(outputRomanNumeral, "V", 1);
			remainder= remainder-5;
		}
	}
}

//Converts a Roman Numeral to an integer, since 0 is not a valid Roman Numeral 0 is returned on Error
int convertRomanToInt(unsigned char * inputRomanNumeral) { //returns Roman Numberal or ERROR<=0
	return 0;
}

// Customer Interface, outputRomanNumeral= firstInputRomanNumeral + secondInputRomanNumeral, "Error" when input or error is incorrect
void AddTwoRomans(unsigned char * firstInputRomanNumeral, unsigned char * secondInputRomanNumeral, unsigned char * outputRomanNumeral) {
}

// Customer Interface, outputRomanNumeral= firstInputRomanNumeral - subtractedInputRomanNumeral, "Error" when input or error is incorrect
void SubTwoRomans(unsigned char * firstInputRomanNumeral, unsigned char * subtractedInputRomanNumeral, unsigned char * outputRomanNumeral) {
}
