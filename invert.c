#include<stdio.h>
#include<string.h>

//Fonksiyona bir karakter dizisi gödericez ve fonksiyon bu diziyi ters çeviricek.
//We will send a string to the function, and the function will invert this string.

int main(){
	
	char text [100];
	
	scanf("%s",text);
	
	invert(text);
	

	return 0;
	
	
}

void invert(char name2[]){
	
	int lenght;
	int temp;
	int i;
	
	lenght=strlen(name2);
	
	for(i=0;i<lenght/2;i++){
		
		temp=name2[i];
		name2[i]=name2[lenght-i-1];
		name2[lenght-i-1]=temp;
		
	}
	
	printf("%s",name2);
}

