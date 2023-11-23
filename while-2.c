#include<stdio.h>
#include<conio.h>
main(){
		int t=1;
		int n;
		clrscr();
		printf("enter any number :");
		scanf("%d",&n);
		while(t<=n){
			printf("%d\n",n);
			n--;
		}
		getch();
}
