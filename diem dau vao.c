#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int bh;
	int bn;
	int lt;
	int th;
	int btl; 
	printf("Nhap so buoi hoc toi da\n");
	scanf("%d",&bh);
	printf("Nhap so buoi nghi\n");
	scanf("%d",&bn);
	if (bn<=bh*0.25){
		printf("du dieu kien thi\n");
		printf("nhap diem ly thuyet\n");
		scanf("%d",lt);
		printf("nhap diem thuc hanh\n");
		scanf("%d",th);
		printf("nhap diem bai tap lon\n");
		scanf("%d",btl);
		if (lt<20*0.4){
			printf("thi lai ly thuyet\n"); 
		} 
		if (th<15*0.4){
			printf("thi lai thuc hanh\n"); 
		} 
		if (btl<10*0.4){
			printf("thi lai bai tap lon"); 
		} 
	} 
	else {
		printf("hoc lai"); 
	} 
	return 0;
}
