/*
input student details and print the name of those students whose marks is greater than 60

*/

#include <stdio.h>
typedef struct{
    char name[20];
    int roll;
    int marks;
}student;
int main()
{
    student s[5];
    FILE *fp;
   

    fp = fopen("student.txt","w");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
        fprintf(fp, "%s %d %d", s[i].name,s[i].roll,s[i].marks);
    }
    
    
    fclose(fp);
    fp = fopen("student.txt","r");
    printf("student with marks > 60 are: ");
    int i = 0;
    while (fscanf(fp,"%s %d %d", s[i].name,&s[i].roll,&s[i].marks)!=EOF)
    {
        if (s[i].marks> 60)
        {
            printf("%s ",s[i].name);
        }
        i++;
    }
    

fclose(fp);
}