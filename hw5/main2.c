#include <stdio.h>

int main()
{
    float PI;
    int a=1,i;
    for(i=1;i<=20000;i++){
        PI+=400000/((2*i-1)*a);
        printf("%.5f\n",PI/100000);
        a*=-1;
        if(PI==314159){
            printf("%d",2*i-1);
            break;
        }
    }


    return 0;
}
