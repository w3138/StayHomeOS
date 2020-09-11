/*****************************************************************************
 *****************************************************************************
 * @file   echo.c
 * @author TF 141
 *****************************************************************************
 *****************************************************************************/


#include "stdio.h"

//参考UNIX的echo
int main(int argc, char * argv[]) {
	int i;
	for (i = 1; i < argc; i++)
		printf("%s%s", i == 1 ? "" : " ", argv[i]);
	printf("\n");

	return 0;
}
