#include <stdio.h>
main()
{
    int a[]={4 ,5, 66, 99, 2, 7, 300, 5 ,4,66666,55};
    for(int i=0;i<11;i++)
    printf("%d ",a[i]);

    printf("\n");
    printf("------------------");
    printf("\n");

    for(int i=0;i<11;i++)
    printf("%d\n",a[i]);

    printf("\n");
    printf("------------------");
    printf("\n");

    for(int i=0;i<11;i++)
    printf("%3d ",a[i]);
}
