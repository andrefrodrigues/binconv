#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#include"binconv.h"

int binary(Decimal n){
	int i,bits=0,res=0;
	Bit b;
	for(i=1;i<UINT_MAX && bits==0;i++)
	if(pow(2,i)>n)
		bits=i;

	
	for(i=0;i<bits;i++){
		b=(n>>bits-1-i) & MASK;
		res=(res+b)*10;
	}

return res/10;
}

int decimal(Binary n){
	int res=0,i;
	for(i=0;n>0;i++){
		res+=(n%2)*pow(2,i);
		n=n/10;
	}

return res;
}
