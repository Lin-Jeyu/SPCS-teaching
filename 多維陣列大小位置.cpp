#include <stdio.h>
main()
{
    int a[2][3][4];

    printf("%d\n",sizeof(a[0][0][0]));
    printf("%d\n",sizeof(a[0][0]));
    printf("%d\n",sizeof(a[0]));

printf("\n");
printf("---------------------");
printf("\n");
printf("\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                printf("%p ",&a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

printf("\n");
printf("---------------------");
printf("\n");
printf("\n");

    for(int i=0;i<2;i++)
        printf("%p ",&a[i][1]);
    printf("\n");
    for(int i=0;i<2;i++)
        printf("%p ",a[i][1]);

printf("\n");
printf("\n");
printf("---------------------");
printf("\n");
printf("\n");

    for(int i=0;i<2;i++)
        printf("%p ",&a[i]);
    printf("\n");
    for(int i=0;i<2;i++)
        printf("%p ",a[i]);

printf("\n");
printf("\n");
printf("---------------------");
printf("\n");
printf("\n");


    printf("%p ",&a);
    printf("\n");
    printf("%p ",a);

printf("\n");
printf("\n");
printf("---------------------");
printf("\n");
printf("\n");
}
