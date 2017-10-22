#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<math.h>


int status;
int prima[150];
int primesize;

void* searchprime(void *arg, int awal, int akhir){


    while(status != 1)
    {
    }
    status=1;
    for(int i=awal; i<=akhir; i++)
    {
        if(
    }
    status=0;

        

    return NULL
}

int main()
{
    int i=0;
    int err;    
    int n, t;
    scanf("%d%d",&n,&t);
    pthread_t tid[t];
    int awal=2;
    int bagi=n/t
    status=0;
    while(i<t)
    {
        err = pthread_create(&(tid[i]),NULL,&searchprime(awal,bagi),NULL);
        if(err!=0) printf("\ncan't create thread: [%s]",strerror(err));
    	else printf("\nthread made");
	    sleep(1);
	    i++;
        awal=bagi+1;
        bagi+=bagi;
        if(i==t-1)bagi=n; 
    }     
    for(int j=0; j<t; j++)
    {
        pthread_join(tid[j],NULL);
    } 
        
}



