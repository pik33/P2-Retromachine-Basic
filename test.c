#include <stdio.h>
struct __using("objtest.spin2") test2;

void main(){
        test2.start();
        printf ("%08x\n",&test2.var2);
        printf ("%08x\n",test2.var2[0]);
        }
