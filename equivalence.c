#include <stdio.h>

int main() {
    // Write C code here
    int a[5][5];int n=0,k=0,count1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<n;i++)
    {    k=0;
        for(int j=0;j<n;j++)
        {
            if(i==j&&a[i][j]==1)
            count1++;
            if((a[i][j]==1 && a[j][i]!=1)||a[i][j]!=1 && a[j][i]==1)
            {
            printf("no"); 
                return 0;
            }
            if(a[i][k]==1&&a[k][j]==1)
            {
                if(a[i][j]!=1)
                {
                printf("no");
                return 0;
                }
            }  k++;
        }
    }
    if(count1==n)
    printf("yes");
    else
    printf("no");
    
    printf("Hello world");

    return 0;
}
