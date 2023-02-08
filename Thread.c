#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/types.h>

#define MAIN_PARAMETER_1 1

int32_t sum;

void *runner (void *param);

int32_t
main (int32_t argc, char * argv[])
{
  pthread_t tid;
  pthread_attr_t attr;
  pthread_attr_init (&attr);
  pthread_create (&tid, &attr, runner, argv[MAIN_PARAMETER_1]);
  pthread_join (tid, NULL);
  printf ("Sum = %d\n", sum);
}

void *runner (void *param)
{
  int32_t i = 0;
  int32_t upper = atoi (param);

  sum = 0;

while (upper--)
    {
      i++;
      sum += 5;
      
    }

  pthread_exit (0);

}

