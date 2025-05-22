#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    while(N>0){
        printf("%d\n", N/M);
        N=N/M;
        N++
    }
    
    // Please write your code here.
    
    return 0;
}