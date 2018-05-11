#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    clock_t t1, t2;
    t1 = clock();
    int i,j,k;
        for (i=0;i<100;i++){
            for(j=0;j<256;j++){
                for(k=0;k<10;k++) printf("deneme");
            }
        }

       t2 = clock();

       float diff = (((float)t2 - (float)t1) / 1000000.0F ) * 1000;
       printf("%f",diff);

    return 0;
}
