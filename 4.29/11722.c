//https://www.acmicpc.net/problem/11722 가장 긴 감소하는 부분 수열
#include <stdio.h>
int main(){

int n; scanf("%d",&n);
int num[n+1]; num[0] = 0;
int len[n+1]; for( int i=0; i<n+1; i++ ) len[i] = 0;

for( int i=1; i<n+1; i++ ) scanf("%d",&num[i]);


int max = 0;
for( int i=1; i<n+1; i++ ){
    for( int j=0; j<i; j++ ){
        if( num[j] > num[i] && len[j] > len[i] )
        len[i] = len[j];
    }
    
    len[i] += 1;
    if( max < len[i] ) max = len[i];
}

printf("%d",max);

    return 0;
}