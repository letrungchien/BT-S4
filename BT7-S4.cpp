#include<stdio.h>

int main(){
	
	int nam;
	
	printf("moi ban nhap nam \n");
	scanf("%d",&nam);
	
	if(nam % 400 ==0){
		printf("%d la nam nhuan \n",nam);
	}
	else if(nam % 4==0 && nam % 100 !=0){
		printf("%d la nam nhuan \n",nam);	
	}
	else{
		printf("%d khong phai la nam nhuan \n",nam);
	}
	
	
	return 0;
}