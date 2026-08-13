 #include <stdio.h>
 #include <stdlib.h>
 
 int PDigit(int n){
 	int i,last,now;
 	int sum = 0;
 	for(i = 1;(n/i)!= 0;i = i*10){
 		last = n/i;
 		now = last%10;
 		sum = sum + now;
	 }
	 return sum;
 }
 
 int main(){
 	long long num;
 	printf("input a number here \n");
 	scanf("%d",&num);
 	int z = PDigit(num);
 	printf("the sum digits is %d",z);
 	
 	return 0;
 }
