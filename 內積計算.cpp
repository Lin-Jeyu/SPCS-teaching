#include <stdio.h>
main()
{
    int a[5],b[5];
    int ans=0;

    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<5;i++){
        ans+=a[i]*b[i];
    }
    printf("%d",ans);

}
