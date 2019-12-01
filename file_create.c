#include<stdio.h>
int main()
{
    FILE *fp;
    printf("Enter File Name:");
    char filename[20];
    scanf("%s",filename);
    fp = fopen(filename,"w");
    fclose(fp);
    return 0;
}
