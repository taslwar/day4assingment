#include <stdio.h>
struct Employee{
        char name[100];
        char address[100];
        double salary;
        char dob[20];
        int empId;
    };


void showEmployeeDetails(struct Employee);

int main(){

    //declaraction of structure
  
    
struct Employee e1;
    //How to create structure variable
   // struct Employee e1={"Tanish","Mumbai",450000,"23/3/1990",101};
printf("enter Employee structure");
gets(e1.name);
gets(e1.address);
scanf("%lf",&e1.salary);
fflush(stdin);
//scanf("%d",&e1.dob);
gets(e1.dob);
scanf("%d",&e1.empId);

showEmployeeDetails (e1);
    //printf("Employee Details %s  %s   %lf  %s  %d\n",e1.name,e1.address,e1.salary,e1.dob,e1.empId);
    







    return 0;
}

void showEmployeeDetails(struct Employee e1){
    printf("Employee Details %s  %s   %lf  %s  %d\n",e1.name,e1.address,e1.salary,e1.dob,e1.empId);
}



