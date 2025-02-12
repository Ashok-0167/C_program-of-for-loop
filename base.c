#include <stdio.h>
int main(){
	int m1,m2,m3,m4,m5
	
	printf("enter the mark m1");
	scanf("%d,m1");
	
	printf("enter the mark m1");
	scanf("%d,m2");
	
	printf("enter the mark m1");
	scanf("%d,m3");
	
	printf("enter the mark m1");
	scanf("%d,m4");
	
	printf("enter the mark m1");
	scanf("%d,m5");
 
marks=m1+m2+m3+m4+m5;

	if (marks >= 90);
    else if (marks >= 80) return 'A';
    else if (marks >= 70) return 'B' + '+';
    else if (marks >= 60) return 'B';
    else return 'F';


	return 0;

}