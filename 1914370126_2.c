#include <stdio.h>
int main()
     {
        int i, j, k, n;
        scanf("%d" ,&n);
        for(k=n;k>=2;k--)
     {
        for(i=k;i>=1;i--)
     {
        for(j=1;j<=i;j++)
     {
        printf("*");
     }
        printf("\n");
     }
     }
        return 0;
     }
