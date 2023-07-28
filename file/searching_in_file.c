//file to enter user id,name,address and serach for specific id and print corresponding 
//name and address

#include <stdio.h>

typedef struct{
    char name[20];
    char address[20];
    int id;
    
}data;
int main()
{
    data d[3];
    FILE *fp;
    fp = fopen("demo.txt" ,"w");
    for (int i = 0; i < 3; i++)
    {
        printf("For %d: \n", i+1);
        printf("Enter name: ");
        scanf("%s", d[i].name);
        printf("Enter address: ");
        scanf("%s", d[i].address);
        printf("Enter id: ");
        scanf("%d", &d[i].id);
        fprintf(fp, "%s %s %d", d[i].name,d[i].address,d[i].id);
    }
    fclose(fp);
    fp = fopen("demo.txt", "r");
    
    int searchid;
    printf("Enter any id: ");
    scanf("%d", &searchid);
    int i = 0;
    while(fscanf(fp,"%s %s %d",d[i].name,d[i].address, &d[i].id)!=EOF){
        if(d[i].id == searchid){
            printf("User found!\n");
            printf("Name: %s \t Address: %s\n",d[i].name, d[i].address);
            
        }
        i++;
    }
 fclose(fp);
}