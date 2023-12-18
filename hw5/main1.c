#include <stdio.h>

int main()
{
    int n = 7;
    int k, i, j;
    for (k=0 ; k<n ; k++ ){
        for (j=0 ; j < n - k ; j++){
            printf(" ");
        }
        for (i=0 ; i<8 - n ; i++){
            printf("%d ",8 - n);
        }
        printf("\n");
        n--;
        k--;
    }


    return 0;
}
