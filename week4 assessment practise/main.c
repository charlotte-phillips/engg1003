#include <stdio.h>
#include <stdlib.h>

int main()
{
    float xNm1 = 0.14, xNm2 = 1.47, xN = 0;
    int count = 2;
    printf("0 %f\n", xNm2);
    printf("1 %f\n", xNm1);
    while ((count <=10) || (xN > 10000000000)) {
        xN = (0.8 * xNm1) - (0.2 * xNm2);
        printf("%d %f\n", count, xN);
        xNm2 = xNm1;
        xNm1 = xN;
        count++;
    }
    return 0;
}
