#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct keycount {
	char* key;
	int count;
};

struct keycount* wc;

void count_keys(int tokens) 
{

	char* line = NULL;
	size_t n = 0;
	int j;

	while (getline(&line, &n, stdin) > 0) 
	{

		line[strcspn(line, "\n")] = 0;
		char* key = strtok(line, " ");

	
		while (key != NULL) 
		{
			for (j = 0; j < tokens; j++)
			{

				if (strcmp(wc[j].key, key) == 0)
			 	{
			    	  wc[j].count++;
			  	}
			}
		    key = strtok(NULL, " ");
		}
	}
}



int main(int argc, char* argv[]) 
	{
	if (argc < 2)return 0;

	wc = malloc((argc - 1) * sizeof(struct keycount));

	int i = 1, j = 0;

     

	while(i < argc)
	{	wc[j].key = argv[i];
		wc[j].count = 0;
		i++;
		j++;
		
	}

	count_keys(argc - 1);

	for (i = 0; i < argc - 1; i++) {
		printf("%s: %d\n", wc[i].key, wc[i].count);
	}
}