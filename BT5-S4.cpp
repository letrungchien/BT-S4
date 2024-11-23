#include<stdio.h>

int main(){
	int number1;
	int number2;
	int number3;
   printf("moi ban nhap so thu nhat\n");
   scanf("%d",&number1);
   
    printf("moi ban nhap so thu hai\n");
   scanf("%d",&number2);
   
    printf("moi ban nhap so thu ba\n");
   scanf("%d",&number3);
     
   if(number3>number1 && number3<number2){
   	printf("so %d nam trong khoang %d va %d\n",number3,number1,number2);
   }
   else{
   	printf("so %d khong nam tong khoang %d va %d\n",number3,number1,number2);
   }
	return 0;
}
