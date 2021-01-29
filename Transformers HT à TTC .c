#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int HT;
  
float TVA, TTC ;

   printf("veuillez entrer la valeur HT :\n");
   scanf("%d",&HT);
    printf("entrer la valeur de TVA :\n");
    scanf("%f",&TVA);
   
   TTC = HT * (TVA /100);
   printf("le prix total TTC = %.2f",TTC);
    return 0;
    
}