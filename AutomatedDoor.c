#include <stdio.h>
#include <stdio.h>
#include <string.h>

int automatedDoor(char isHumanExist[]);

char closeCommand [100] = "Door should be close.";
char openCommand [100] = "Door should be open.";
int main(int argc, char **argv)
{
	char isHumanExist[50];
	do
	{
		printf("Does the human existence on the door?");
		printf("\n");
		scanf("%s",&isHumanExist);
	}
	while(automatedDoor(isHumanExist)!=1);
	
	return 0;
}

int automatedDoor(char isHumanExist[])
{
	if(strcmp(isHumanExist,"yes")==0)
	{
		puts(openCommand);
		printf("\n");
		return 0;
	}
	else if (strcmp(isHumanExist,"no")==0)
	{
		puts(closeCommand);
		printf("\n");
		return 0;
	}
	else
	{
		return 1;
	}
}

