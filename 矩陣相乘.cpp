#include <stdio.h>
main()
{
    int a[2][3],b[3][4],ans[2][4];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            ans[i][j]=0;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
              ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        printf("\n");
        for(int j=0;j<4;j++){
            printf("%d ",ans[i][j]);
        }
    }
}
