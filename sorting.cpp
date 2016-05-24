#include<stdio.h>
#include<stdlib.h>

static int a[333335]; //=1.27MB

//ham hoan vi 
void swap(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
}


//ham sap xep cua quicksort
int partition(int*a,int L,int R){
	int i,j,p;
	i=L;j=R+1;p=a[L];
	while(i<j){
		i++;
		while((i<=R)&&a[i]<p) i++;
		j--;
		while((j>=L)&&a[j]>p) j--;
		swap(a[i],a[j]);
	}
	swap(a[i],a[j]);
	swap(a[j],a[L]);
	return j;
}

//ham quicksort sap xep nhanh
void quicksort(int*a,int L,int R){
	int p;
	if(L<R){
		p=partition(a,L,R);
		if(L<p)quicksort(a,L,p-1);
		if(R>p)quicksort(a,p+1,R);
	}
}

//ham de sap xep 333333 phan tu da sap xep vao sorting1.txt va 333333 phan tu tiep theo da sap xep,ghi vao sorting2.txt
void merge1(){
	int j,i=0;
	FILE*f1=fopen("sorting1.txt","r");
	FILE*f2=fopen("sorting2.txt","w");
	fscanf(f1,"%d",&j);
	while( i<333333 && ( !feof(f1) ) ){
		if(j<a[i]){
			fprintf(f2,"%d  ",j);
			fscanf(f1,"%d",&j);
		}
		else {
			fprintf(f2,"%d  ",a[i]);
			i++;
		}
	}
	while(i<333333){
			fprintf(f2,"%d  ",a[i]);
			i++;
	}
	while(!feof(f1)){
			fprintf(f2,"%d  ",j);
			fscanf(f1,"%d",&j);
	}
	fclose(f1);
	fclose(f2);
	printf("chuong trinh da chay xong \n");
}

//ham de sap xep 333333 phan tu da sap xep vao sorting2.txt va 333334 phan tu cuoi cung da sap xep,ghi vao sorting2.txt
void merge(){
	int j,i=0;
	FILE*f1=fopen("sorting2.txt","r");
	FILE*f2=fopen("output.txt","w");
	fscanf(f1,"%d",&j);
	while( i<333334 && ( !feof(f1) ) ){
		if(j<a[i]){
			fprintf(f2,"%d  ",j);
			fscanf(f1,"%d",&j);
		}
		else {
			fprintf(f2,"%d  ",a[i]);
			i++;
		}
	}
	while(i<333334){
			fprintf(f2,"%d  ",a[i]);
			i++;
	}
	while(!feof(f1)){
			fprintf(f2,"%d  ",j);
			fscanf(f1,"%d",&j);
	}
	fclose(f1);
	fclose(f2);
	printf("chuong trinh da chay xong \n");
}


//xu li va tao ra ket qua
void makeoutput(){
	int i;
	FILE*f=fopen("input.txt","r");
	
	for(i=0;i<333333;i++) 
	fscanf(f,"%d",&a[i]);
	
	quicksort(a,0,333332);
	
	FILE *f2=fopen("sorting1.txt","w");
	for(i=0;i<333333;i++) 
	fprintf(f2,"%d  ",a[i]);
	fclose(f2);
	
	for(i=0;i<333333;i++) 
	fscanf(f,"%d",&a[i]);
	quicksort(a,0,333332);	
	merge1();
		
	for(i=0;i<333334;i++) 
	fscanf(f,"%d",&a[i]);	
	quicksort(a,0,333333);
	merge();
	fclose(f);
}

//ham dung de tao ra file input random n phan tu,voi cac gia tri -5000 den 5000	;
void randomlist(){
	int i,j;
	FILE*f=fopen("input.txt","w");
	for(j=0;j<1000000;j++){
		i=5000-rand()%10000;
		fprintf(f,"%d   ",i);
	}
}

main(){
	makeoutput();
}

