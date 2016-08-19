/* Roman Calculator.h, Copyright (c) 2016, Dennis Arce
   Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
   and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
   
   The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
   IN THE SOFTWARE.
*/

#ifndef ROMAN_CALCULATOR_H
#define ROMAN_CALCULATOR_H


#define MAX_ROMAN_LENGTH 20 //This is maximum size of any Roman Numeral
#define ERROR_MSG "ERROR" //Generic Error message sent to customer

//Convert an inputNumber to a string Roman Numeral
void convertIntToRoman(int inputNumber, unsigned char * outputRomanNumeral);

//Converts a Roman Numeral to an integer, since 0 is not a valid Roman Numeral 0 is returned on Error
int convertRomanToInt(unsigned char * inputRomanNumeral);

// Customer Interface, outputRomanNumeral= firstInputRomanNumeral + secondInputRomanNumeral, "Error" when input or error is incorrect
void AddTwoRomans(unsigned char * firstInputRomanNumeral, unsigned char * secondInputRomanNumeral, unsigned char * outputRomanNumeral);

// Customer Interface, outputRomanNumeral= firstInputRomanNumeral - subtractedInputRomanNumeral, "Error" when input or error is incorrect
void SubTwoRomans(unsigned char * firstInputRomanNumeral, unsigned char * subtractedInputRomanNumeral, unsigned char * outputRomanNumeral);

#endif /* ROMAN_CALCULATOR_H */