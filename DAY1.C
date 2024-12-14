#include<stdio.h>

int max(int arr){
     int maxel = 0 ;
    for(int i=0 ;i<5;i++){
       
        if(arr[maxel] <arr[i])
        {maxi = i ;
    }   
        }
        return maxel ;
            }

int main(){
    int i ,arr[5] ;
    for( i=0 ; i<5 ;i++){
        printf("enter array elements at &d:",i);
        scanf("%d",&arr[i]) ;
    }

    int maxele = max(arr) ;
    printf("max elemnt in array is %d", arr[maxele]) ;
    return 0 ;
}
