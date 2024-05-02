//https://www.acmicpc.net/problem/2435 기상청 인턴 신현수
#include <stdio.h>

int main(){

int n,k; scanf("%d %d",&n,&k);
int arr[n];
scanf("%d",arr[0]);
for( int i=1; i<n; i++ ){
    scanf("%d",arr[i]);
    arr[i] += arr[i-1];
}

int sarr[n-k+1];
int max = -99999999;
for( int i=0; i<n-k+1; i++ ){
    sarr[i] = arr[i+k-1] - arr[i-1];
    if( max < sarr[i] )
    max = sarr[i];
}


printf("%d",max);

    return 0;
}