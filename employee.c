#include<stdio.h>
#include<string.h>

struct employee
{
    char name[20];
    int id[5];
    int exp[5];
    float salary[8];
};

int main(){
    int i=0;
    struct employee s1;
    for(i=0;i<5;i++){
        printf("\nEnter name: ");
        gets(s1.name);
        printf("\nEnter your id: ");
        scanf("%d", &s1.id[i]);
        printf("\nEnter experience: ");
        scanf("%d", &s1.exp[i]);
        printf("\nEnter salary: ");
        scanf("%f", &s1.salary[i]);
    }
    for(i=0;i<5;i++){
        printf("\nEmployee Name: %s",s1.name);
        printf("\nEmployee ID: %d",s1.id[i]);
        printf("\nEmployee Experience: %d",s1.exp[i]);
        printf("\nEmployee Salary: %f",s1.salary[i]);
    }
    return 0;
    }
    