#include <stdio.h> 
#include <stdlib.h>

long long epic(long long depth, long long n) {
    if (depth <= 0) return 1;
    long long result = 0;
    for (long long i = 0; i < n; i++) if (i == 0) result = epic(depth - 1, n); else epic(depth - 1, n);
    return result;}

int main(int argc, char **argv){
    if(argc != 3) return 1;
    long long n = atoll(argv[1]), m = atoll(argv[2]), sum = 0, i;    
    for (i = 0; i < n; i++, sum += epic(n, n));
    for (i = 0; i < m; i++, sum += epic(m, m));
    printf("%lld\n", sum);
    return 0;}