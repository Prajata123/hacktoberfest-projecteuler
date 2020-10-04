#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long a[5000001];
int main() 
{
    long long t,i,j,n,cnt,mcnt=1,k,ans;//initialisation
    for(i=1;i<5000001;i++)//loop starts
    {
        cnt=0;
        k=i;
            while(k!=1)//second loop starts
            {
                if(k%2)
                    k=3*k+1;//updation of k
                else
                    k=k/2;//updation of k
              cnt++;//increment
            }
        if(i==1)
           a[i]=1;
        else
        {
            if(cnt>=mcnt)//comparing counts
            {
                mcnt=cnt;
                a[i]=i;//assignment
            }
            else
            {
                a[i]=a[i-1];//reassignment
            }
        }
    }
    scanf("%Ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%Ld",&n);  
        printf("%Ld\n",a[n]);//necessary output
    }
    return 0;
}

