#include<stdio.h>

 int main(){
 	int number;
 	printf("moi ban nhap so\n");
 	scanf("%d",&number);
 	 if(number  > 0){
 	 	printf("%d la so duong\n",number);
	  }
 	else if (number < 0){
    	printf("%d la so am\n",number);	
	 }
 	return 0;
 }
