#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 20
int main(int argc, char* argv[])
{
	int proc_time;
	char* requestPath;
	char const* const fileName = argv[1];
	FILE* file = fopen(fileName, "r");
	char line[256];
	int count = 0;
	int sum = 0;
	int min, max;
	float average;
	int proc_time_array[MAX_ARRAY];
	
	typedef struct {
     char* requestPath;
     int min;
     int max;
     float average;
   }requests;
	
	while (fgets(line, sizeof(line), file))
	{
		char subbuff[11];
		char subbufftwo[11];
		memcpy( subbuff, &line, 8);
		subbuff[8] = '\0';

		requestPath = subbuff;
		printf("%s", requestPath);
		
		memcpy(subbufftwo, &line[9], 8);
		subbufftwo[8] = '\0';

		proc_time = atoi(subbufftwo);
		if(count == 0)
		{
			printf("\n%s", requestPath);
			min = proc_time;
			max = proc_time;
		}
		if(proc_time < min)
		{
			min = proc_time;
		}
		else if(proc_time > max)
		{
			max = proc_time;
		}

		proc_time_array[count] = proc_time;
		count++;
	}
	for(int i = 0; i <= count; ++i)
	{
		sum = sum + proc_time_array[i];
	}
	
	average = (float)sum / count;
	printf("\nShortest time is: %d", min);
	printf("\nFastest time is: %d", max);
	printf("\nAverage time is: %.2f", average);
	printf("\n\nTimes %s has been requested: %d\n", requestPath, count);
	
	return 0;
}
