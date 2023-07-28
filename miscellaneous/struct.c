/*

define a structure named employee that has Name, department, position,
salary and year of service as members. use this structure to read and 
display records of 100 employees. write array of structure, display the
record on screen in the ascending order of the year of service of 100 employee


*/
#include <stdio.h>

typedef struct{
    char name[20];
    char department[20];
    char position[22];
    float salary;
    int yos;
}employee;
int main(int argc, char const *argv[])
{
    employee e[3];
    for (int i = 0; i < 3; i++)
    {
        printf("For employee %d: ",i+1);
        printf("Name: ");
        scanf(" %s", e[i].name);
        printf("department: ");
        scanf(" %s", e[i].department);
        printf("position: ");
        scanf(" %s", e[i].position);
        printf("salary: ");
        scanf("%f", &e[i].salary);
        printf("Year of service: ");
        scanf("%d", &e[i].yos);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d\n", i+1);
        printf("Name: %s \t Department: %s \t Position: %s \t salary: %f \t YOS: %d\n", e[i].name,e[i].department,e[i].position,e[i].salary,e[i].yos);
    }
    

    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(e[i].yos>e[j].yos){
                employee temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
        
    }
    printf("AFTER SORT: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d\n", i+1);
        printf("Name: %s \t Department: %s \t Position: %s \t salary: %f \t YOS: %d\n", e[i].name,e[i].department,e[i].position,e[i].salary,e[i].yos);
    }
    return 0;
}
