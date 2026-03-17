#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc != 3) return 1;
    long long n = atoll(argv[1]), m = atoll(argv[2]), sum = 0, i, j;
    for (i = 0; i < n; i++) for (j = 0; j < n; j++) if (i == j) sum++;
    for (i = 0; i < m; i++) for (j = 0; j < m; j++) if (i == j) sum++;        
    printf("%lld\n", sum);
    return 0;
}