#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<math.h>
#include<vector>

int status;
vector <int> primes;

bool is_prime(int i)
{
	int u=(int)sqrt(i);
	for (int j=0;primes[j]<=u&&j<primes.size();++j) {
		if (i%primes[j]==0)
		return false;
	}
	return true;
}



void* searchprime(void *arg, int awal, int akhir){


    while(status != 1)
    status=1;
    for(int i=awal; i<=akhir; i++)
    {
       	if (is_prime(i))
	{
	primes.push_back(i);
	    printf("%d\n",i);	
	}
    }
    status=0;
    return NULL;
}

int main()
{
    prima.push_back(2);
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
        if(awal+bagi-1>n)bagi=n; 
    }     
    for(int j=0; j<t; j++)
    {
        pthread_join(tid[j],NULL);
    }         
}



