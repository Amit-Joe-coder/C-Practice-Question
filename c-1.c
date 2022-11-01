#include <stdio.h>
int main()
{
    int a1[3] = {1, 2, 3}, a2[3] = {1, 3, 4}, a3[10], i, j, k = 0;
    for (i = 0; i < 3; i++)
    {
        a3[k] = a1[i];
        k++;
        a3[k] = a2[i];
        k++;
    }
    printf("__This loop is for printing____\n");
    for (i = 0; i < k; i++)
    {
        printf("a3[%d]=%d\n", i, a3[i]);
    }
}
