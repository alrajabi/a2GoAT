#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>


#define N 2
char request1[256];
char pol_type[256];
void *runMyClass(void *k)
{
	long d = (long)k;
	if (d < 4) snprintf(pol_type, 256,"oneH");
	else snprintf(pol_type, 256,"zeroH");
	snprintf(request1, 256,"./runMyClass.sh ~/usb/2015_bin/compton/Butanol/%d /dev/extra/Butanol/%s ~/usb/2015_bin/compton/Butanol/%d/archive AR_Compton",i+1,pol_type,i+1 );
	//snprintf(request1, 256,"./testt.sh salam%s%ld",pol_type,d);
	system(request1);
	pthread_exit(NULL);
}
int main()
{
        pthread_t my_thread[N];

        long id;
        for(id = 1; id <= N; id++) {
                int ret =  pthread_create(&my_thread[id], NULL, &runMyClass, (void*)id);
		printf("thread number %ld is being created\n",id);
                if(ret != 0) {
                        printf("Error: pthread_create() failed\n");
                        exit(EXIT_FAILURE);
                }
        }

        pthread_exit(NULL);
}

