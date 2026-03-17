#include <stdio.h> 
#include <stdlib.h>

long long epic(long long depth) {
    if (depth <= 0) return 1;
    return epic(depth - 1) + epic(depth - 1) - 1;}

int main(int argc, char **argv){
    if(argc != 3) return 1;
    long long n = atoll(argv[1]), m = atoll(argv[2]), sum = 0, i;
    for (i = 0; i < n; i++, sum += epic(n));
    for (i = 0; i < m; i++, sum += epic(m));
    printf("%lld\n", sum);
    return 0;
}