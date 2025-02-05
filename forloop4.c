#include<stdio.h>
int main(){
    int n,sum =0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        
        printf("%d\n",i);
        sum =sum+i;
    }
        printf("sum: %d\n",sum);
    return 0;
}