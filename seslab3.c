#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

int main () {
	printf("Music Player E11\n");
	//printf("Please Press '1'");
	//int tep;
	char temp[50];
	char msc[50];
	//scanf("%d",&tep);	
	while(1) {
		scanf("%s",temp);
		if(strcmp(temp,"help")==0) {
			printf("List of Menu\n");
			printf("list: Show your song that you have\n");
			printf("play: Play your song\n");
			printf("pause: Pause song\n");
			printf("continue; Continue song\n");
			printf("stop: Stop your played song\n");
		}
		else if (strcmp(temp,"list")==0) {
		system("find /home/farras/SISOP/playlist -name *.mp3");
		}
		//else if(str)
		else if (strcmp(temp,"exit")==0) {
		break;
		}
	}


}
