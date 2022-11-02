#include <stdio.h>
int main()
{
    int m, a1[100], n, a2[100], a3[100], i, j;
    printf("enter the memory size for array 1: \n");
    scanf("%d", &m);
    printf("enter the memory size for array 2: \n");
    scanf("%d", &n);
    printf("enter the element in the 1st array: \n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("enter the element in the 2st array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a2[i]);
    }
    for (i = 0; i < m; i++)
    {
        a3[i] = a1[i];
        a3[m + i] = a2[i];
    }
    printf("__This loop is for unsorted array___\n");
    for (i = 0; i < (m + n); i++)
    {
        printf("a3[%d]=%d\n", i, a3[i]);
    }
    //____sorting a3____
    for (i = 0; i < (m + n); i++)
    {
        for (j = i + 1; j < (m + n); j++)
        {
            if (a3[i] > a3[j])
            {
                int temp = a3[i];
                a3[i] = a3[j];
                a3[j] = temp;
            }
        }
    }
    printf("___This loop is for sorted array___\n");
    for (i = 0; i < (m + n); i++)
    {
        printf("a3[%d]=%d\n", i, a3[i]);
    }
    printf("      Thanks Above program ends here!!!      ");
}
