//https://www.acmicpc.net/problem/14659 한조서열정리하고옴ㅋㅋ
#include <stdio.h>
int main(){

int N;
scanf("%d",&N);
int arr[N];

for ( int i=0; i<N; i++ ){
    scanf("%d",&arr[i]);
}

int cnt=0, maxcnt=0, atker=0;
for (int i=1; i<N; i++){
    if ( arr[atker] < arr[i] ){
        //공격실패하면
        cnt = 0;
        atker = i;
    }else{
        //공격성공
        cnt += 1;
        if ( maxcnt < cnt )
        maxcnt = cnt;
    }
}

printf("%d",maxcnt);

    return 0;
}