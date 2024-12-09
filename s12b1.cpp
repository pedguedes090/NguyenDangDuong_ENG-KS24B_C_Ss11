#include<stdio.h>
int tinh_tong(int a ,int b){
	return a + b;
}

int main(){
	int so1,so2,sum;
		printf("nhap so thu 1 ");
	scanf("%d",&so1);
	printf("nap so thu 2 ");
	scanf("%d",&so2);
	sum = tinh_tong(so1,so2);
	printf("tong cua so %d va %d la %d \n",so1,so2,sum);	
	if(sum%2==0) printf("%d la so chan",sum);
		else printf("%d la so le",sum);





return 0;

}

