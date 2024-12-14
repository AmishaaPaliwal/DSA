#include<stdio.h>
int main(){
    int arr[5] ;
     int sum=0 ;

    for(int i=0;i<5;i++){
        printf("enter array elements") ;
        scanf("%d",&arr[i]) ;
    }


    for(int i=0;i<5;i++){
       
        sum += arr[i] ;

    }

     printf("sum %d is\n",sum) ;
    
     return 0;                   
}