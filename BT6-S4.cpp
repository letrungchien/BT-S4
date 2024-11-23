#include<stdio.h>

int main(){
	int so_cu;
	int so_moi;

   printf("moi ban nhap so dien cu\n");
   scanf("%d",&so_cu);
   
    printf("moi ban nhap so dien moi\n");
   scanf("%d",&so_moi);
   
   int so_dung=so_moi-so_cu;
     
   if(so_dung  >= 0 && so_dung<50){
   	int tien_dien=so_dung*10000;
   	printf("tien dien thang nay la %d\n",tien_dien);
   
}
   if(so_dung >=50 && so_dung<100){
   	int tien_dien=so_dung*15000;
   	printf("tien dien thang nay la %d\n",tien_dien);
}
   if(so_dung >=100 && so_dung<150){
   	int tien_dien=so_dung*20000;
   	printf("tien dien thang nay la %d\n",tien_dien);
}
   if(so_dung >=150 && so_dung<200){
   	int tien_dien=so_dung*25000;
   	printf("tien dien thang nay la %d\n",tien_dien);
}
   if(so_dung >=200 ){
   	int tien_dien=so_dung*30000;
   	printf("tien dien thang nay la %d\n",tien_dien);
}
   
   	return 0;
   }

