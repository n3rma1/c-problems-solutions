// to write and read data from user

#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "w");
    
    char data[100];
    printf("Enter data to be store in fiel: ");
    fgets(data, sizeof(data), stdin);
    
    fprintf(fp, "%s", data);
    
    fclose(fp);
    
    fp = fopen("file.txt","r");
    char ch;
    
    while((ch = fgetc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
}