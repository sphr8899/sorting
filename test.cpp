#include<stdio.h>
	char input[100];
int test(){
		int i,j;
		FILE*f=fopen(input,"r");
		fscanf(f,"%d",&i);
		while(!feof(f)){
		fscanf(f,"%d",&j);
		if((i-j)>0) return 0;
		i=j;
	}
	return 1;
	fclose(f);
}

main(){
	int i,j;
	while(1){
		printf("import imput : ");
		gets(input);
		FILE*f=fopen(input,"r");
		if(f) break;
		else printf("file does not exist,please try again "); 
		fclose(f);
	}
	if(test()==1) printf("program is perfect");
	else printf("program is error");
	test();
}
