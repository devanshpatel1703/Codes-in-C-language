#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int C,K,N;
    scanf("%d",&C);
    scanf("%d",&K);
    scanf("%d",&N);
    printf("%.0f",C*pow(K,N));
    return 0;
}
