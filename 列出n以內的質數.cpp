#include <stdio.h>
main()
{
    int is_pn[101];
    int n,j=2;
    scanf("%d",&n);
    for(int i=0;i<=100;i++)
        is_pn[i]=1;
    while(j*j<=n){
        while(is_pn[j] == 0){
            j++;
        }
        for(int i=j+j;i<=n;i+=j){   //本身不用 = 0，所以是i=2*j
            is_pn[i]=0;
        }
        j++;//要讓它繼續動啊
    }
    for(int i=2;i<=n;i++){
        if(is_pn[i] == 1){
             printf("%d ",i);
        }
    }
}
