int rc4_S[256];
int rc4_i;
int rc4_j;


void rc4_init(unsigned char * key, unsigned int keylen);

unsigned char rc4_byte(unsigned char input);
