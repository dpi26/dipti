#include<stdio.h>
#include<math.h>

// pascal triangle with ncr value

int pascal(){
int n;
printf("Enter the value :");
scanf("%d",&n);
 
 for (int i = 0; i<=n-1; i++)
 {
    int a=1;
     for (int j=n-i-1; j>=0; j--)          //for (int k=0; k<=i; k++) 
    {
        printf("  ");
    } 
     for (int k=0; k<=i; k++)           // for (int j=n-i-1; j>=0; j--)
   {  
    printf("%d   ",a);
     a=a*(i-k)/(k+1);
   }
  
    printf("\n");
  
 }
}

// right pascal triangle

 int right_pascal(){ 
int a=5;
for (int i = 0; i<=a-1; i++)
{
    for (int j=0; j<=i; j++)    
   {
       printf("*");
   }
   printf("\n"); 
}
//-------------------------------
for (int i= a-1; i>=0;i--)
{
    for (int j=0; j<=i-1; j++)
   {
       printf("*");
   }
   printf("\n"); 
}
 }

//oposite  right  pascal_triangle

int oposite(){
int b=5;
for (int i = 0; i<=b-1; i++)
{
  for (int j =0; j <=b-i-1; j++)
  {
    printf(" ");
  }
  for (int k = 0; k<=i; k++)
  {
  printf("*");
  }
  printf("\n");
  
}
//------------------------
for (int i = 0; i<=b-1; i++)
{
  for (int j =0; j <=i+1; j++)
  {
    printf(" ");
  }
  for (int k =1; k<=b-i-1; k++)
  {
  printf("*");
  }
  printf("\n");
  
}
}

// making of damroo  

int damroo(){
  int c=5;
  for (int i = 0; i <=c-1; i++)
  {
    for (int  j= 0; j <=i; j++)
    {
      printf("*");
    }
    
printf("\n");
for (int k = 0; k <=c-i-1; k++)
{
  printf(" ");
}
for (int  j= 0; j <=i; j++)
{
  printf("*");
}
printf("\n");
 }

}



  



int main(){
   damroo();


return 0;

}



