//https://www.acmicpc.net/problem/4344 평균은 넘겠지
#include <stdio.h>

int main(){

int N;scanf("%d",&N);
for( int i=0; i<N; i++ ){
    
    int c; scanf("%d",&c);
    int arr[c];
    double sum = 0;
    double tops = 0;

    for( int j=0; j<c; j++ ){
        scanf("%d",&arr[j]);
        sum += arr[j];
    }
    double avg = sum/c;

    for( int j=0; j<c; j++ ){
        if( arr[j] > avg ){
        tops += 1;
        }
    }
    printf("%.3lf%%\n",tops/c*100);

}

    return 0;
}