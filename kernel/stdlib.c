#include <kernel.h>

int k_strlen(const char* str)
{
int len = 0;
while( *str++ != '\0')
	{
	++len;
	}
return(len);
}

void* k_memcpy(void* dst, const void* src, int len)
{
char* copydst = (char*) dst;
char* copysrc = (char*) src;
while(len>0)
	{
	*copydst++ = *copysrc++;
	len--;
	}
return(dst);
}

int k_memcmp(const void* b1, const void* b2, int len)
{
unsigned char* compare1 = (unsigned char*) b1;
unsigned char* compare2 = (unsigned char*) b2;
while(len>0)
{
	int diff = *compare1++ - *compare2++;
	if(diff!=0)
	{
	return(diff);
	}
	len--;
}
return(0);
}
