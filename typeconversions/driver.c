#include <stdio.h>
#include "conversions.h"

int main()
{
	printf("\n******************************\n");
	printf("*   DRIVER FOR CONVERSIONS   *\n");
	printf("******************************\n");

	printf("\n* TYPE 2 CHAR *\n");
	printf("int_2_char(0) = %c\n", int_2_char(0));
	printf("int_2_char(5) = %c\n", int_2_char(5));
	printf("int_2_char(9) = %c\n", int_2_char(9));
	printf("int_2_char(10) = %c\n", int_2_char(10));

	printf("\n* TYPE 2 STRING *\n");
	printf("int_2_string(1234) = %s\n", int_2_string(1234));
	printf("int_2_string(1) = %s\n", int_2_string(1));
	printf("int_2_string(07) = %s\n", int_2_string(07));
	printf("int_2_string(010) = %s (NOTE: starting 0 gives octal!)\n", int_2_string(010));

	printf("\n* TYPE 2 INT *\n");
	printf("char_is_int('a') = %d\n", char_is_int('a'));
	printf("char_is_int('z') = %d\n", char_is_int('z'));
	printf("char_is_int('0') = %d\n", char_is_int('0'));
	printf("char_is_int('9') = %d\n", char_is_int('9'));
	printf("char_is_int('5') = %d\n", char_is_int('5'));
	printf("\n");
	printf("string_is_int(\"hello\") = %d\n", string_is_int("hello"));
	printf("string_is_int(\"12\") = %d\n", string_is_int("12"));
	printf("string_is_int(\"-32\") = %d\n", string_is_int("-32"));
	printf("string_is_int(\"+71\") = %d\n", string_is_int("+71"));
	printf("string_is_int(\"-12d4\") = %d\n", string_is_int("-12d4"));
	printf("\n");
	printf("char_2_int('a') = %d\n", char_2_int('a'));
	printf("char_2_int('1') = %d\n", char_2_int('1'));
	printf("char_2_int('0') = %d\n", char_2_int('0'));
	printf("char_2_int('9') = %d\n", char_2_int('9'));
	printf("\n");
	printf("string_2_int(\"12\") = %d\n", string_2_int("12"));
	printf("string_2_int(\"abc\") = %d\n", string_2_int("abc"));
	printf("string_2_int(\"0\") = %d\n", string_2_int("0"));
	printf("string_2_int(\"-3\") = %d\n", string_2_int("-3"));
	printf("string_2_int(\"01230\") = %d\n", string_2_int("01230"));
	printf("\n");
	printf("char_2_bin('a') = %s\n", char_2_bin('a'));
	printf("char_2_bin('2') = %s\n", char_2_bin('2'));
	printf("char_2_bin('0') = %s\n", char_2_bin('0'));
	printf("char_2_bin('z') = %s\n", char_2_bin('z'));
	printf("char_2_bin('_') = %s\n", char_2_bin('_'));
	printf("\n");
	printf("str_2_bin(\"Hello\") = %s\n", str_2_bin("Hello"));
	printf("str_2_bin(\"What\") = %s\n", str_2_bin("What"));
	printf("str_2_bin(\"1212\") = %s\n", str_2_bin("1212"));
	printf("str_2_bin(\"-+09\") = %s\n", str_2_bin("-+09"));

	printf("\n\n");

	
}
