#include<stdio.h>
int main(){
	
	int n,m,b=0,v,i,x;
	int a[10];
	
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	scanf("%d",&x); 
	
	for(i=0;i<n;i++){
		if(x<=a[i]){m=i;break;b=1;}
	}
	
	if(b==0){
		if(x>a[n-1])m=n;
		else m=0;
	}
	
	for(i=n;i>m;i--){
		a[i]=a[i-1];
	}   a[m]=x;
	
	for(i=0;i<=n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
} 
