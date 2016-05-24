#include<stdio.h>
#include<stdlib.h>

static int a[333335]; //=1.27MB

//function permulation 
void swap(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
}


//partitition
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

//function quicksort
void quicksort(int*a,int L,int R){
	int p;
	if(L<R){
		p=partition(a,L,R);
		if(L<p)quicksort(a,L,p-1);
		if(R>p)quicksort(a,p+1,R);
	}
}

//sort 333333 first number and write to sorting1.txt file
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
}

//sort 333333 next number and merge with 333333 first number from sorting1.txt file and write to output.txt file
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


//hanling and write result to output.txt file
void makeoutput(){
	int i;
	FILE*f=fopen("input.txt","r");
	//take the 333333 number from file input.txt
	for(i=0;i<333333;i++) 
	fscanf(f,"%d",&a[i]);
	//use quicksort () to sort 333333 first number
	quicksort(a,0,333332);
	//write 333333 first number is sorted to sorting1.txt
	FILE *f2=fopen("sorting1.txt","w");
	for(i=0;i<333333;i++) 
	fprintf(f2,"%d  ",a[i]);
	fclose(f2);
	//take the 333333 next number from file input.txt
	for(i=0;i<333333;i++) 
	fscanf(f,"%d",&a[i]);
	//use quicksort to sort 333333 number 
	quicksort(a,0,333332);	
	//sort 333333 next number and merge with 333333 first number from sorting1.txt file and write to sorting2.txt file
	merge1();
	//take 333334 last number 	
	for(i=0;i<333334;i++) 
	fscanf(f,"%d",&a[i]);
	//use quicksort() to sort 333334 last number 
	quicksort(a,0,333333);
	//sort 333333 next number and merge with 333333 first number from sorting1.txt file and write to output.txt file
	merge();
	fclose(f);
}

//function make random input.txt ;
void randomlist(){
	int i,j;
	FILE*f=fopen("input.txt","w");
	for(j=0;j<1000000;j++){
		i=5000-rand()%10000; // make random number from -5000 to 5000
		fprintf(f,"%d   ",i);//write i to input.txt file
	}
}

main(){
	makeoutput();
}

