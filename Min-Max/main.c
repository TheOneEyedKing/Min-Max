#include <stdio.h>
int main()
{
    int N,a[1000],min=0,max=0,i,j,k,flag,count=0;
    scanf("%d\n",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d ",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<N;i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    flag=max-min-1;
    if(flag>N-2)
        printf("NO");
    else
    {
        for(i=min+1;i<max;i++)
        {
            k=count;
            for(j=0;j<N;j++)
            {
                if(i==a[j])
                    {
                        count++;
                        break;
                    }
            }
            if(k==count)
            {
                printf("NO");
                break;
            }
        }
    }
    if(count==flag)
        printf("YES");
    return 0;
}
