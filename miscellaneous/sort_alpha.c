// sorting user input names in alphabetical order

#include <stdio.h>
#include <string.h>
#define MAX_NAMES 5
#define MAX_LENGTH 20
int main(int argc, char const *argv[])
{
    char names[MAX_NAMES][MAX_LENGTH],str[100];

    printf("Enter names in any order: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", names[i]);
    }
    
    //sorting
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(strcmp(names[i],names[j])>0){
                strcpy(str,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],str);
            }
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", names[i]);
    }
    
    
   
        return 0;
}
