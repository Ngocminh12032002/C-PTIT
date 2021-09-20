#include<stdio.h> 
int check(int n){
	int a=0;
	if(n%10==0){
		n=n/10;
		a=1; 
	}
	while(n%10 !=0){ 
		int x =n%10;
		if(x == 0 || x==8 || x==6){ n=n/10; a=1; }
		else{
			return 0; 
		} 
	}
	return a;
} 
int main(){ 
	int i,j,n; 
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){ 
		scanf("%d",&a[i]); 
	} 
	for(i=0;i<n;i++){
		if(check(a[i])==1){ 
			if(i==n-1){
				printf("YES");
			}
			else{
				printf("YES\n"); 
			} 
		}else{ 
			if(i==n-1){
				printf("NO");
			}
			else{
				printf("NO \n");
			}
		}
	}
}
