//https://www.acmicpc.net/problem/11727 2×n 타일링 2
#include <stdio.h>
int main(){

int n;
scanf("%d",&n);

int arr[n+1];
arr[0] = 1;
arr[1] = 1;

for(int i=2; i<=n; i++ ){
    arr[i] = (arr[i-2]*2 + arr[i-1]) % 10007;
}

printf("%d",arr[n]);

    return 0;
}