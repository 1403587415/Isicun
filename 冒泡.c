#include<stdio.h>
int a[1000];
int n;
int main (){
	printf("请输入将要排序的数字的个数\n");
	scanf("%d",&n);
	printf("请输入想要排序的数，用空格隔开\n");
	int c=0;
		for(int i=0;i<=n-1;i++) {
	 	scanf("%d",&c);
	 	a[i]=c;
	 }
	 printf("\n");
	 for(int i=0;i<=n;i++){
	 	for(int j=0;j<=n-1;j++){
	 		if(a[j]<a[j+1]) {
	 			int b=a[j];
	 			a[j]=a[j+1];
	 			a[j+1]=b;
			 }
		 }
	 }
	 for(int i=0;i<=n-1;i++){
	 	printf("%d ",a[i]);
	 }
	 printf("\n");
	 system("pause");
	 return 0;
}
