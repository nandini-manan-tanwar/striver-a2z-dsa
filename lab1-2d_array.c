#include<stdio.h>
int main()
{
    
    int R,C;
    printf("enter row");
    scanf("%d",&R);
     printf("enter column");
    scanf("%d",&C);
    int i,j;
    int arr [R][C];
   
    printf("enter your elements");
    printf("\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("enter element of index:arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }

    }



    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d ",arr[i][j]);
           
        }
        printf("\n");
    }

    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%p ",&arr[i][j]);
           
        }
        printf("\n");
    }
   int *ba=&arr[0][0];
   for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            int *row_major=(ba+i*C+j);
            printf("%p",row_major);
           
        }
    }
   return 0;
}