// WAP to enter the number and find its cubes sum.  
#include<stdio.h>
int main(){
  	 int i =1, n, sum=0;
	 printf("enter the value of n: ");
	 scanf("%d",&n);
	 do {
		printf ("the number is %d and its cube is %d \n",i,i*i*i);
		i = i + 1;
	 }
	 while (i <= n );
	 
		sum += i*i*i;
		printf("sum is %d",sum);
	return 0;
}
