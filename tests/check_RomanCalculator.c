/* check_Roman Calculator.h, Copyright (c) 2016, Dennis Arce
   Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
   and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
   
   The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
   IN THE SOFTWARE.
*/

//#include <config.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <check.h>
#include <check_stdint.h>
#include "../src/RomanCalculator.h"

//First we will learn how to build Roman Numerals because we must return them to Romans who only know Roman Numerals
//Approach will be big letters to small. M to i
START_TEST(whenconvertIntToRomanisPassed1000AndReturnsM)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(1000, returnValue);
	_Bool result=(strcmp(returnValue, "M")==0);
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed3000AndReturnsMMM)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(3000, returnValue);
	_Bool result=!strcmp(returnValue, "MMM");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed4000AndReturnsERROR)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(4000, returnValue);
	_Bool result=!strcmp(returnValue, "ERROR");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed0AndReturnsERROR)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(0, returnValue);
	_Bool result=!strcmp(returnValue, "ERROR");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed900AndReturnsCM)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(900, returnValue);
	_Bool result=!strcmp(returnValue, "CM");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed500AndReturnsD)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(500, returnValue);
	_Bool result=!strcmp(returnValue, "D");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed400AndReturnsCD)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(400, returnValue);
	_Bool result=!strcmp(returnValue, "CD");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed800AndReturnsDCCC)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(800, returnValue);
	_Bool result=!strcmp(returnValue, "DCCC");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed90AndReturnsXC)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(90, returnValue);
	_Bool result=!strcmp(returnValue, "XC");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed50AndReturnsL)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(50, returnValue);
	_Bool result=!strcmp(returnValue, "L");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed40AndReturnsXL)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(40, returnValue);
	_Bool result=!strcmp(returnValue, "XL");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed80AndReturnsLXXX)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(80, returnValue);
	_Bool result=!strcmp(returnValue, "LXXX");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed9AndReturnsIX)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(9, returnValue);
	_Bool result=!strcmp(returnValue, "IX");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed5AndReturnsV)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(5, returnValue);
	_Bool result=!strcmp(returnValue, "V");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed4AndReturnsIV)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(4, returnValue);
	_Bool result=!strcmp(returnValue, "IV");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed8AndReturnsVIII)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(8, returnValue);
	_Bool result=!strcmp(returnValue, "VIII");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed3888AndReturnsMMMDCCCLXXXVIII)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(3888, returnValue);
	_Bool result=!strcmp(returnValue, "MMMDCCCLXXXVIII");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed1999AndReturnsMCMXCIX)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(1999, returnValue);
	_Bool result=!strcmp(returnValue, "MCMXCIX");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed2444AndReturnsMMCDXLIV)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(2444, returnValue);
	_Bool result=!strcmp(returnValue, "MMCDXLIV");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed3333AndReturnsMMMCCCXXXIII)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(3333, returnValue);
	_Bool result=!strcmp(returnValue, "MMMCCCXXXIII");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST

//Next getTokens from a passed Roman Numberal
START_TEST(whengetTokensFromRomanisPassedMAndReturnsQty1)
{
	unsigned char Tokens[TOKEN_QTY][TOKEN_SIZE]={0};
	int qty=getTokensFromRoman("M", &Tokens);
	_Bool result=1; //Assume result is fine
	if (qty != 1) {
		result=0; 
	}
	ck_assert_msg(result, "Failure, qty='%d'\r\n", qty);
}
END_TEST
START_TEST(whengetTokensFromRomanisPassedMAndReturnsQty1AndM)
{
	unsigned char Tokens[TOKEN_QTY][TOKEN_SIZE]={0};
	int qty=getTokensFromRoman("M", &Tokens);
	_Bool result=1; //Assume result is fine
	if (qty != 1) {
		result=0; 
	} else {
		if (strcmp(Tokens[0], "M")) {
			result=0;
		}
	}
	ck_assert_msg(result, "Failure, qty='%d', Value='%s'\r\n", qty, Tokens[0]);
}
END_TEST
START_TEST(whengetTokensFromRomanisPassedMCLAndReturnsQty3AndM_C_L)
{
	unsigned char Tokens[TOKEN_QTY][TOKEN_SIZE]={0};
	int qty=getTokensFromRoman("MCL", &Tokens);
	_Bool result=1; //Assume result is fine
	if (qty != 3) {
		result=0; 
	} else {
		if (strcmp(Tokens[0], "M")) {
			result=0;
		}
		if (strcmp(Tokens[1], "C")) {
			result=0;
		}
		if (strcmp(Tokens[2], "L")) {
			result=0;
		}
	}
	ck_assert_msg(result, "Failure, qty='%d', Values='%s','%s','%s'\r\n", qty, Tokens[0], Tokens[1], Tokens[2]);
}
END_TEST

Suite * RomanCalculator_suite(void)
{
    Suite *s;
    TCase *tc_core;
    TCase *tc_limits;

    s = suite_create("RomanCalculatorSuite");

    /* Core test case */
    tc_core = tcase_create("Core");

    //tcase_add_checked_fixture(tc_core, setup, teardown);
    tcase_add_test(tc_core, whenconvertIntToRomanisPassed1000AndReturnsM);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed3000AndReturnsMMM);
    tcase_add_test(tc_core, whenconvertIntToRomanisPassed4000AndReturnsERROR);
    tcase_add_test(tc_core, whenconvertIntToRomanisPassed0AndReturnsERROR);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed900AndReturnsCM);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed500AndReturnsD);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed400AndReturnsCD);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed800AndReturnsDCCC);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed90AndReturnsXC);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed50AndReturnsL);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed40AndReturnsXL);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed80AndReturnsLXXX);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed9AndReturnsIX);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed5AndReturnsV);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed4AndReturnsIV);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed8AndReturnsVIII);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed3888AndReturnsMMMDCCCLXXXVIII);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed1999AndReturnsMCMXCIX);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed2444AndReturnsMMCDXLIV);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed3333AndReturnsMMMCCCXXXIII);
	tcase_add_test(tc_core, whengetTokensFromRomanisPassedMAndReturnsQty1);
	tcase_add_test(tc_core, whengetTokensFromRomanisPassedMAndReturnsQty1AndM);
	tcase_add_test(tc_core, whengetTokensFromRomanisPassedMCLAndReturnsQty3AndM_C_L);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = RomanCalculator_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
