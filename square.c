#include<stdio.h>
int main(){
int n=5;
for (int  i = 0; i <=n-1; i++)
{
    for (int  j = 0; j <=n-1; j++)
    {
        if(i==0|| i==n-1|| j==0|| j==n-1)

       { printf("%d",n);}
       else{
        printf(" ");
       }

    }
    printf("\n");
}

    return 0;

}