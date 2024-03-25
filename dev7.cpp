#include <stdio.h>
int main (void){
    int j, i, n;
    printf("Vendosni numrin e rreshtave: ");
    scanf("%d",&n);
    for( i = i; i <= n; i ++){
        for( j = 1; j <= n; j ++){
            if( j<=n - i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
