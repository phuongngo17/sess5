#include<stdio.h>
int main(){
	int a =35;
	int b;
	printf("hay nhap so dung\n");
	while(1){
		printf("nhap mot so: ");
		scanf("%d",&b);
		if(b==a){
			printf("ban da doan dung\n");
			break;
			
		}else{
			printf("ban da doan sai \n");
		}
	}
	
	return 0;
}
