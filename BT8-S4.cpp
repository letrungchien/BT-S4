#include<stdio.h>

int main(){
	int canh_a;
	int canh_b;
	int canh_c;
	
	printf("moi ban nhap canh a\n");
	scanf("%d",&canh_a);
	
	printf("moi ban nhap canh b\n");
	scanf("%d",&canh_b);
	
	printf("moi ban nhap canh c\n");
	scanf("%d",&canh_c);
	
	if(canh_a+canh_b>canh_c){
		printf("la 3 canh trong tam giac\n");
	}
	else if(canh_a+canh_c>canh_b){
		printf("la 3 canh trong tam giac\n");	
	}
	else if(canh_b+canh_c>canh_a){
		printf("la 3 canh trong tam giac\n");	
	}
	else{
		printf("3 canh khong phai la tam giac\n");
	}
	return 0;
}
