#include <stdio.h>


int main(void) {
 int n=10;
 int count=0;
 printf("We will print the number of distinct solutions to the equation: x1 + x2 + x3=10\n");
 for(int i=0;i<=10;i++){
   for(int j=0;j<=10;j++){
      for(int k=0;k<=10;k++){

         if(i+j+k==10){
            count++;
         }
      }

   }


 }
 printf("The number of distinct solutions is %d",count);


return 0;
   }