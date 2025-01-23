#include<stdlib.h>
#include<stdio.h>
int main(){
    unsigned char a=0x00;
    a=a|0x01;
    a=a|0x02;
    a=a|0x04;
    a=a|0x08;

        printf("a = %02X\n",a);
    return 0;
}
