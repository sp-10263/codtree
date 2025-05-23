#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if((b<a && a<c) || (b>a && a>c))
        printf("%d", a);
    if((a<b && b<c) || (c<b && b<a))
        printf("%d", b);
    if((a<c && c<b) || (b<c && c<a))
        printf("%d", c);
        
    return 0;
}