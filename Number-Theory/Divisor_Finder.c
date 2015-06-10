#include<stdio.h>
#include<math.h>
#define MAX 100
int main()
{
      int n,tmp,i,size,j;
      int div[MAX]={1};
            for(i=0;i<MAX;i++)
            div[i]=1;

      scanf("%d",&n); // taking input
      size=0;

      int root=sqrt(n);

                                    for(i=2;i<=root;i++){
                                    if(n%i==0){
                                          div[size++]=i;
                                          if(i!=n/i){                 // prevent repetation  of any number
                                          div[size++]=n/i;
                                          }
                              }
            }

            // sort array ( You can sort or not, your wish )

                        for(i=0;i<size-1;i++){
                              for(j=0;j<size-i-1;j++){
                                    if(div[j]>div[j+1]){
                                    tmp=div[j];
                                    div[j]=div[j+1];
                                    div[j+1]=tmp;
                                    }
                              }
                        }

                                    for(i=0;i<size;i++){
                                    printf("%d ",div[i]);
                                    }
                                    printf("\n\nTotal Divisor : %d\n",size);

return 0;
}


