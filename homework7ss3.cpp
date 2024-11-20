#include<stdio.h> 
int main(){
	int num,total;
	total=0;
	printf("nhap gia tri cua number");
	scanf("%d",&num) ;
if (num >=1000 && num<=9999) {
	total +=num%10;
	num/=10;
	total+=num%10;
	num/=10;
	total+=num%10;
	num/=10;
	total+=num%10;	
	printf("tong cua 4 chu so la %d",total) ;
 }else {
 	printf("moi ban nhap lai do so khon hop le");
 }
return 0; 
} 
