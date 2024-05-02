//https://www.acmicpc.net/problem/2851 슈퍼 마리오
#include <stdio.h>

int main(){

int arr[10];
scanf("%d",arr[0]);
for( int i=1; i<10; i++ ){
    scanf("%d",arr[i]);
    arr[i] += arr[i-1];
}

int res = 0;
for( int i=0; i<10; i++ ){
    if( abs(res-100) >= abs(arr[i]-100) )
    res = arr[i];
}

printf("%d",res);
    return 0;
}