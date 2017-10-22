#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<math.h>


void* searchprime(void *arg){
        
    
}

int main()
{
    int i=0;
    int err;    
    int n, t;
    scanf("%d%d",&n,&t);
    while(i<t)
    {
        err = pthread_create(&(tid[i]),NULL,&copyandcopy,NULL);
        if(err!=0) printf("\ncan't create thread: [%s]",strerror(err));
    	else printf("\nthread made");
	    sleep(1);
	    i++; 
    }     
    for(int j=0; j<t; j++)
    {
        pthread_join(tid[j],NULL);
    } 
        
}



