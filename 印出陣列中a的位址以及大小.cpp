#include <stdio.h>
main()
{
    int a[10];
    printf("%d\n",sizeof(a[0]));
    printf("%d\n",sizeof(a));

    for(int i=0;i<10;i++)
        printf("%p\n",&a[i]);
    printf("%p\n",&a);
    printf("%p\n",a);

}
