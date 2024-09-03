#include<stdio.h>
int main(){

int n=4;

/*  
for(int i=1;i<=n ;i++)
{
    for(int j=1;j<=i;j++)
    {
      printf("*");
    }
    for (int k=2*n+1-2*i; k >=1; k--)
    {
        printf(" ");
    }

    for(int j=1;j<=i;j++)                             8       8
    {                                                 8 8   8 8  
    printf("*");                                      8 8 8 8 8       
    }                                                 8 8   8 8 
      printf("\n");                                   8       8            
}
//----------------------
for (int l = 1; l <=2*n+1; l++)
 {
    printf("*");
 }
 printf("\n");
//------------------------
 for(int i=1;i<=n+1 ;i++)
{  
    for(int j=1;j<=n-i+1;j++)
    {
      printf("*");
    }
    for (int k= 1; k <=2*i-1; k++)
    {
        printf(" ");
    }

    for(int j=1;j<=n-i+1;j++)
    {
    printf("*");
    }
      printf("\n");
}
*/

for (int i = 0; i < n; i++)
{
  for (int j = 0; j <i; j++)
  {
    printf(" ");
  }
  for (int k = 0; k < n-i; k++)
  {
  printf("* ");
  }
  printf("\n");
}
for (int i = 0; i<n; i++)
{
  for (int j = 0; j<n-i-1; j++)
  {
    printf(" ");
  }
  for (int k = 0; k < i+1; k++)
  {
    printf("* ");
  }
  printf("\n");
  
}



    return 0;

}