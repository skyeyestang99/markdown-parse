#include<stdio.h>
int main()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 6;
  
    // The result is 00001010 
    printf("a<<1 = %d\n", a<<1);
    
    return 0;
}