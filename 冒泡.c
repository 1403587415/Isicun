#include<stdio.h>
int a[1000];
int n;
int main (){
	printf("�����뽫Ҫ��������ֵĸ���\n");
	scanf("%d",&n);
	printf("��������Ҫ����������ÿո����\n");
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
