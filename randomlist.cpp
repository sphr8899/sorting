#include<stdio.h>
#include<stdlib.h>
char input[100];
//function make random standard input,value is from -5000 to 5000 ;
void randomlist(){
	int i,j;
	FILE*f=fopen(input,"w");
	for(j=0;j<1000000;j++){
		i=5000-rand()%10000;
		fprintf(f,"%d   ",i);
	}
}

main(){
	printf("enter file name you want to store : ");
	gets(input);
	randomlist();
}
