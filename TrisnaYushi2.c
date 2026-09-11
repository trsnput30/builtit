#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
    long long  a,b;
    scanf("%lld" "%lld", &a, &b );

    if (((a  > 0 && b > 0) || (a < 0 && b < 0)) && a!=1 && b!=1) {
        printf ("*");   
    } else if (a > 0 && b < 0)  {
        printf ("-");
    } else  {
        printf ("+"); 
    }
                 
    return 0;
}