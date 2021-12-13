#include<stdio.h>
void main()
{
    int t[10],p[10],q[20],max,j,n,m,i,k;
    printf("donner n");
    scanf("%d",&n);
    printf("donner m");
    scanf("%d",&m);
    printf("t[0]= ");
    scanf("%d",&t[0]);
    i=1;
    do{
        do{
            printf("t[%d]= ",i);
            scanf("%d",&t[i]);
        }while(t[i]<t[i-1]);
        i++;
    }while(i<n);
    printf("p[0]= ");
    scanf("%d",&p[0]);
    i=1;
    do{
            do{
                printf("p[%d]= ",i);
                scanf("%d",&p[i]);
            }while(p[i]<p[i-1]);
            i++;
    }while(i<m);

    max=n;
    if (m>n)
        max=m;
   i=0 ;
    j=0 ;
    k=0;
    while (i<n || j<m)
    {
       if(i<n && j<m)
       {
            if (p[j] < t[i])
            {
               q[k]=p[j]   ;
               j++ ;
               k++;
            }
           if (t[i] < p[j])
           {
             q[k]=t[i];
             i++ ;
             k++;
           }
           if (t[i]==p[j])
          {
            q[k]=t[i];
            q[k+1]=p[j];
              i++ ;
              j++ ;
              k+=2;
          }
      }
      if(i==n && j<m)
      {
            q[k]=p[j] ;
            j++ ;
            k++ ;
      }
      if(j==m && i<n)
      {
        q[k]=t[i];
        i++ ;
        k++ ;
      }
   }

    for(i=0;i<n;i++)
        printf("%d \t",t[i]);
    printf("\n");
    for(i=0;i<m;i++)
        printf("%d \t",p[i]);
    printf("\n");
    for(i=0;i<k;i++)
        printf("%d \t",q[i]);
}

