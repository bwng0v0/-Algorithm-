//https://www.acmicpc.net/problem/11899 괄호 끼워넣기
#include <stdio.h>
#include <string.h>
int main(){

char stack[51];
int pointer = 0;
char str[51];

getline(scanf,str);
for( int i=0; i<strlen(str); i++ ){
    if( str[i] == '(' ){//여는괄호는 스택에 쌓음
        stack[pointer] = '(';
        pointer += 1;
    }
    if( str[i] == ')' ){//스택 맨위가 여는 괄호라면 서로 맞아없어짐
        if( stack[pointer-1] == '(' ){
            stack[pointer-1] == '\0';
            pointer -= 1;
        }else{//짝이 안맞으면 스택에 추가
            stack[pointer] = ')';
            pointer += 1;
        }
    }
}

printf("%d",pointer);


    return 0;
}