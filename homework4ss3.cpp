#include<stdio.h>
int main(){
	float toan,anh,van,total,trungBinh;
	 
	printf("nhap diem toan");
scanf("%f",&toan) ;	
printf("nhap diem van");
scanf("%f",&van) ;
printf("nhap diem anh");
scanf("%f",&anh) ;	
printf("diem toan la %.2f",toan) ;
	printf("diem van la %.2f",van) ;
	printf("diem anh la %.2f",anh) ;
	total=toan+anh+van;
	printf("diem tong la %.2f",total) ;
	trungBinh=total/3;
	printf("diem trung binh la %.2f",trungBinh);
	 return 0;
	  	
} 

