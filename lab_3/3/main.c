#include <stdio.h>
extern unsigned int crc32d(const char* buf, unsigned long len);
int main()
{
unsigned int res = crc32d("hello, world",12);
printf("%0x\n",res);
return 0;
}
