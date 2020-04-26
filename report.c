#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

	char const* const fileName = argv[1];
	FILE* file = fopen(fileName, "r");
	char line[256];

	char *request;
	char *time;
	char *search = " ";

	int procTimeP = 0;
	int procTimeV = 0;

	int portfolioCount = 0;
	int portfolioSum = 0;
	float portfolioAverage = 0.00;

	int videosCount = 0;
	int videosSum = 0;
	float videosAverage = 0.00;

	while (fgets(line, sizeof(line), file)){
		request = strtok(line, search);
		time = strtok(NULL, search);

		printf("%s  -> ", request);
		printf("%s", time);

		if(strcmp(request, "/portfolio") == 0){
			portfolioCount ++;

			sscanf(time, "%d", &procTimeP);
			portfolioSum = procTimeP + portfolioSum;
		}
//		else{
	//		videosCount ++;

		//	scanf(time, "%d", &procTimeV);
		//	videosSum = procTimeV + videosSum;
		//}

	}

portfolioAverage = portfolioSum / portfolioCount;
//videosAverage = videosSum / videosCount;


printf("\nPortfolio Count: %d", portfolioCount);
printf("\nPortfolio Sum: %d", portfolioSum);
printf("\nPortfolio Average: %f\n", portfolioAverage);

//printf("\nVideo Count: %d", videosCount);
//printf("\nVideo Sum: %d", videosSum);
//printf("\nVideo Average: %f", videosAverage);




	return 0;

}
