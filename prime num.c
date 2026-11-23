#include<stdio.h>
int main(){
    int a ;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a<=1){
        printf("%d is not a prime number",a);
    }
    else{
        int i,flag=0;
        for(i=2;i<=a/2;i++){
            if(a%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d is a prime number",a);
        }
        else{
            printf("%d is not a prime number",a);
        }
    }
}
    