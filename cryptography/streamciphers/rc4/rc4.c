unsigned char rc4_S[256];
int rc4_i;
int rc4_j;

void swap_unsigned_char(unsigned char * a, unsigned char * b)
{
	unsigned char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void rc4_init(unsigned char * key, unsigned int keylen)
{
	unsigned int i, j;

	rc4_i = 0;
	rc4_j = 0;

	for(i = 0; i < 256; i++)
	{
		rc4_S[i] = i;
	}

	j = 0;
	for(i = 0; i < 256; i++)
	{
		j = (j + rc4_S[i] + key[i % keylen]) % 256;
		swap_unsigned_char(&rc4_S[i], &rc4_S[j]);
	}
}

//Takes one byte and return the ciphered/deciphered byte
//Must use rc4_init before this function
unsigned char rc4_byte(unsigned char input)	
{
	unsigned char k;

	rc4_i = (rc4_i + 1) % 256;
	rc4_j = (rc4_j + rc4_S[rc4_i]) % 256;

	swap_unsigned_char(&rc4_S[rc4_i], &rc4_S[rc4_j]);
	
	k = rc4_S[(rc4_S[rc4_i] + rc4_S[rc4_j]) % 256];

	return input ^ k;
}



