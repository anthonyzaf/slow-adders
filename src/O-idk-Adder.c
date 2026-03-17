#include <stdio.h> 
#include <stdlib.h>

long long mann(long long m, long long n) {
    if (m == 0) return n + 1;
    if (m > 0 && n == 0) return mann(m - 1, 1);
    return mann(m - 1, mann(m, n - 1));}

long long epic(long long val) {
    long long void_sink = mann(val, val);
    if (void_sink > 0) return 1;
    return 1;}

int main(int argc, char **argv){
    if(argc != 3) return 1;
    long long n = atoll(argv[1]), m = atoll(argv[2]), sum = 0, i;
    for (i = 0; i < n; i++,sum += epic(n));
    for (i = 0; i < m; i++,sum += epic(m));
    printf("%lld\n", sum);
    return 0;
}