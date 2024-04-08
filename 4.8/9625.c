//https://www.acmicpc.net/problem/9625 BABBA
#include <stdio.h>
int main(){

int N;scanf("%d",&N);

int arr[N+1][2];
arr[0][0] = 1;//A
arr[0][1] = 0;//B

for( int i=1; i<N+1; i++ ){
    arr[i][0] = arr[i-1][1];// f(n) = 의 A의 개수는 f(n-1)의 B의 개수
    arr[i][1] = arr[i-1][0]+arr[i-1][1];// f(n) = 의 B의 개수는 f(n-1)의 A개수+B개수
}

printf("%d %d",arr[N][0],arr[N][1]);
    return 0;
}