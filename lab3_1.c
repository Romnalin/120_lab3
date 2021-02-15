#include <stdio.h>
int main ()
{
   int c,i,j,k,max=0,win=0 ;

   for(i=1;i<=5;i++)
    {
      c=0;
      for(j=0;j<4;j++)
      {
         scanf("%d",&k);
         c+=k;
      }
      if(c>max)
      {
        max=c;
        win=i;
      }
    }
printf("%d %d\n",win,max);
 return 0 ;
}
