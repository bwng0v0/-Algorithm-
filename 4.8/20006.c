//https://www.acmicpc.net/problem/20006 랭킹전 대기열
#include <stdio.h>
#include <string.h>

typedef struct user{
    int level;
    char name[20];
}user;

user arr[301][301];

int main(){

int p,rsize; scanf("%d %d",&p,&rsize);

int rcnt = 0;
user input;
int found;//입장가능 방찾음

for( int i=0; i<p; i++ ){
    
    //입력받고
    scanf("%d %s",&input.level,&input.name);

    found = 0;
    //현재 생성된 모든 방을 돌면서
    for( int j=0; j<rcnt; j++ ){
        if( found==1 )
        break;
        //방에 자리가있고 레벨이 범위내라면 입장
        if( arr[j][rsize-1].level==0 && arr[j][0].level-10 <= input.level && arr[j][0].level+10 >= input.level ){
            for( int k=0; k<rsize; k++ ){
                if( arr[j][k].level==0 )
                { arr[j][k]=input;  found = 1;  break; }
            }
            
        }
    }

    //방을 다 봤는데 자리가 없다면 만들고 입장
    if( found==0 ){
    rcnt += 1;
    arr[rcnt-1][0] = input;
    }
    
}

for( int i=0; i<rcnt; i++ ){
    
    if( arr[i][rsize-1].level == 0 )
    {printf("Waiting!\n");}
    else
    {printf("Started!\n");}
    
    
    int cnt = 0;
    for( int j=0; j<rsize; j++ ){
        if( arr[i][j].level==0 )
        break;

        cnt+=1;
    }

    //잊어버린조건: 방에 있는 플레이어들의 정보는 닉네임이 사전순으로 앞서는 플레이어부터 출력한다.
    for( int j=0; j<cnt; j++ ){
        for( int k=0; k<cnt-1; k++ ){
            if( strcmp(arr[i][k].name,arr[i][k+1].name) > 0 ){
                user tmp = arr[i][k];
                arr[i][k] = arr[i][k+1];
                arr[i][k+1] = tmp;
            }
        }
    }

    for( int j=0; j<cnt; j++ ){
        printf("%d %s\n",arr[i][j].level,arr[i][j].name);
    }
}


    return 0;
}