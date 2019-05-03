#include<stdio.h>
#include<stdlib.h>


void you_cant_see_this_its_too_evil(){
    system("sh");
    exit(0);
}

int main(){
    setvbuf(stdout,0,2,0);
    setvbuf(stdin,0,2,0);

    puts( "Are you hacker? Show me your skill :)" );

    char buf[0x30];

    gets( buf );

    return 0;
}