#include<stdio.h>

int main(){
    int number;
       printf("moi ban nhap so\n");
       scanf("%d",&number);
	
	if(number % 2==0){
		printf("la so chan\n");
	}
	else{
		printf("la so le\n");
	}
	return 0;
}
