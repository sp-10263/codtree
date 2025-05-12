#include <stdio.h>

int main() {
    // Please write your code here.int a,b;
    int a,b;
    scanf("%d %d", &a,&b);
    for(int i=0; i<b-a+1; i++)
        printf("%d ", b);
        b=b--;
    return 0;
}