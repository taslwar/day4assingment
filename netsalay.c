#include<stdio.h>
#include<string.h>
typedef struct EmployeeInfo{
    int id;
    char name[100];
    int basicsallary;
    int hra,da;
}Emp;
  void netSalary(Emp);
int main(void){
    Emp e1;
      int i;
    printf("Enter Employee details");
      for( i=0; i<1;i++){
          printf("Enter the %d employee id\t", i+1);
      scanf("%d",&e1.id);
       fflush(stdin);
       printf("Enter the %d employee name\t", i+1);
       gets(e1.name);
      fflush(stdin);
       scanf("%d",&e1.basicsallary);
       scanf("%d",&e1.hra);
      scanf("%d",&e1.da);
      }
    netSalary(e1);
}
void netSalary(Emp e1){
    int i;
    for( i=0; i<1;i++){
        printf("id of %d Employee= %d\n",i+1,e1.id);
        printf("Name of  %d   Employee= \t %s\n",i+1,e1.name);
        int net_salary=e1.basicsallary+e1.hra+e1.da;
        printf("net salary of the employee =%d",net_salary);

    }
}