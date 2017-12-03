#ifndef CONVERSIONS
#define CONVERSIONS 1

/* TYPE 2 CHAR */

char int_2_char(int num);


/* TYPE 2 STRING */

char * int_2_string(int num);


/* TYPE 2 INT */

int char_is_int(char c);
int string_is_int(char * string);

int char_2_int(char c);
int string_2_int(char * string);

int num_digits(int num);


/* BINARY STRINGS */

char * str_2_bin(char * string);
char * char_2_bin(char c);

#endif
