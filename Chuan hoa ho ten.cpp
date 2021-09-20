#include<stdio.h> 
int lenght(char a[]){
	int i;
	for(i=0; i<105; i=i+1){ 
		if(a[i] == '\0') break; 
	}
	return i; 
} 
int main(){
	int i, j, k, h;
	char a[105]; 
	for(i=0; i<105; i=i+1){ 
		scanf("%c", &a[i]);
		if(a[i] == '\n'){
			a[i] = '\0';
			break; 
		}
	} 
	int n = lenght(a);
	char s[105][105]; 
	for(i=0; i<n; i=i+1){
		if(a[i] != ' '){ 
			h = i; 
			break; 
		} 
	} 
	i = 0; j = 0;
	for(k=h; k<=n; k=k+1){
		if(a[k] != ' ' && a[k] != '\0'){
			s[i][j] = a[k]; 
			j = j + 1; }
		if((a[k] == ' ' || a[k] == '\0') && a[k-1] != ' ' && a[k-1] != '\0'){
			s[i][j] = '\0'; i = i + 1; j = 0;
		} 
	}
	int H = i;
	for(i=0; i<H-1; i=i+1){ 
		for(j=0; j<lenght(s[i]); j=j+1){ 
			if(j == 0){
				if(s[i][j] >= 'a' && s[i][j] <= 'z')
					printf("%c", s[i][j]-32); 
				else printf("%c", s[i][j]); 
			}
			if(j > 0){ if(s[i][j] >= 'A' && s[i][j] <= 'Z') printf("%c", s[i][j]+32);
			else printf("%c", s[i][j]);
			}
		} 
		if(i < H-2) printf(" "); 
		if(i == H-2) printf(", ");
	} 
	for(j=0; j<lenght(s[H-1]);
		j=j+1){ 
		if(s[H-1][j] >= 'a' && s[H-1][j] <= 'z')
			printf("%c", s[H-1][j]-32);
		else printf("%c", s[i][j]); 
	}
}

