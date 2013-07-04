#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc,char **argv)
{
        DIR *dp;
        struct dirent *dirp;
        if(argc != 2){
                printf("a single argument is required!\n");
                exit(1);
        }
        if((dp = opendir(argv[1])) == NULL){
                printf("can't open %s\n",argv[1]);
                exit(1);
        }
        while((dirp = (readdir(dp))) != NULL)
                printf("%s\n",dirp->d_name);
        closedir(dp);
        exit(0);
}
~
~