// std info in binary file


#include <stdio.h>
typedef struct{
    char name[20];
    int roll;
    int marks;
}student;
int main()
{
    FILE *fp;
    fp = fopen("binstd.bin", "wb");
    student s[5];
    
     for (int i = 0; i < 3; i++)
    {
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
        
    }
    fwrite(s,sizeof(student),3,fp);

    fclose(fp);

    fp = fopen("binstd.bin","rb");
    int i = 0;

    while (fread(&s,sizeof(student),3,fp)!=EOF)
    {
        if (s[i].marks>60)
        {
            printf("%s",s[i].name);
        }
        i++;
    }
    fclose(fp);
    

}