//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum=0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    printf("%d",sum);
    return 0;
}

