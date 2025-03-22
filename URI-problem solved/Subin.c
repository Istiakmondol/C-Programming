#include <stdio.h>
void main ()
{
  long int a;
  long long int b;
  short int c;
  long double d;
  scanf("%ld %lld %hd %lf",&a,&b,&c,&d);
  printf("The long int value: %ld\n",a);
  printf("The long int value: %lld\n",b);
  printf("The long int value: %hd\n",c);
  printf("The long int value: %Lf\n",d);



}
