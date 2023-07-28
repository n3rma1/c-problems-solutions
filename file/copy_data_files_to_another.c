#include <stdio.h>

int main()
{
    char ch;
    FILE *source, *destination;
    int count = 0;
    source = fopen("file1.txt", "r");
    destination = fopen("file2.txt","w");
    
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch,destination);
        count++;
    }
    printf("%d", count);
    fclose(source);
    fclose(destination);
    return 0;

}
