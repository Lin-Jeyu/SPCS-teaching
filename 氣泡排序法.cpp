#include <stdio.h>
main()
{
    int n,a[100],temp;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
