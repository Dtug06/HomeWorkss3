#include<stdio.h> 
int main(){
	int a,b,c,d,abcd,dcba; 
 
printf("nhap so nguyen có 4 chu so");
scanf("%d",&abcd);
if (abcd<=9999 && abcd >=1000){
	a=abcd/1000;
	b=(abcd%1000)/100 ;
	c=(abcd%100)/10;
	d=abcd%10;
	 dcba=1000*d+100*c+10*b+a;
	 printf("chu so nghich dao la %d",dcba) ;
}else {
printf("sai cu phap vui long nhap lai");

}
return 0;
 	 
} 

