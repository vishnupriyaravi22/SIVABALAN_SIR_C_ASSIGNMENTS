TWO NUMERS N AND K WHERE N>K AND N IS THE ARRAY.FIND THE Kth LARGEST ELEMENT IN ARRAY

INPUT: 6  3
[10,3,4,30,40,50]

OUTPUT: 10

#include <stdio.h>

int main(void){
	int n,k,i,a[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=0;i<k-1;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;
}
