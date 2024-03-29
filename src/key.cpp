#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define TTY_PATH "dev/tty"
#define STTY_US "stty raw -echo -F"
#define STTY_DEF "stty -raw echo -F"

static int get_char(){
	fd_set rfds;
	struct timeval tv;
	int ch = -1;

	FD_ZERO(&rfds);
	FD_SET(0,&rfds);
	tv.tv_sec = 0;
	tv.tv_usec = 10;

	if(select(1,&rfds, NULL, NULL, &tv)>0){
		ch = getchar();
	}
	return ch;
}

int main(){
	int ch = 0;
	system(STTY_US TTY_PATH);
	do {
		ch = get_char();
		if(ch)
			printf("key = %d(%c)", ch, ch);
		else
			sleep(10);
	}while(ch!='\n' && ch !='\r');
	system(STTY_DEF TTY_PATH);
	return 0;
}
