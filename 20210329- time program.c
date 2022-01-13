#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
 time_t second;
 second=time(NULL);
 printf("second since 1jan 1970 =%ld\n",second);
 return 0;
}
 