#include <stdio.h>

int main()
{
    int n = 7;
    int k, i;
    for (k=0 ; k<7 ; k++ ){
        printf("%*d",n,8-n);
        for (i=1 ; i<8 - n ; i++){
            printf("%*d",2,8-n);
        }
        printf("\n");
        n--;
    }


    return 0;
}
