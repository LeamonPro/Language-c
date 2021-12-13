#include <stdio.h>
main()
{
    int t[8] ,i,j,c,p,k;
    printf("t[0]= ");
    scanf("%d",&t[0]);
    i=1;
    while (t[i-1]!=(-1)) {
        printf("t[%d]",i);
        scanf("%d",&t[i]);
        i++;
    }
    j=i-1;
    c=t[j-1];
    p=1;
    for (k=j-2;k>=0;k--){
        p=p*2;
        c+=t[k]*p;


    }
    for(i=0;i<j;i++){
        printf("%d",t[i]);

    }
    printf(" =%d",c);
}
