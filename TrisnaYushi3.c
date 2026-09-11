#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

long long n;
    scanf("%lld", &n);
    for (long long k = 1; k <= n; k++){
        long long hasil = (k * (k - 1) / 2) * k * ( k - 1 );
        printf("%lld\n", hasil);
    }
 return 0;
}