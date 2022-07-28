#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("/tmp/test.text", "W+");
    fprintf(fp, "This is the text file for fprintf...\n");
    fputs("This is the text from fputs\n", fp);
    fclose(fp);
}