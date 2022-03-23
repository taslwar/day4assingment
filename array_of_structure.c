#include<stdio.h>
#include<string.h>

typedef struct student{
    char name[100];
    char dob[10];
    int stdid;
    float marks[50];

} Std;

     int main(){
     Std s1[5];
     int i, j ,avrage,total;
     printf("Enter Student details");
     for( i=0; i<1; i++) {
      printf("Enter student  %d\n",i+1);
      fflush(stdin);
     printf("Enter student %dname\t",i+1);
      gets(s1[i].name);
      fflush(stdin);
     printf("Enter student%d dob\t",i+1);
      gets(s1[i].dob);
      fflush(stdin);
      printf("Enter student%d id\t ",i+1);
      scanf("%d",&s1[i].stdid);
     printf("Enter marks");
      for( j=0; j<5;j++){
          scanf("%f",&s1[i].marks[j]);
          }

    }

       for( i=0; i<1; i++){
        printf("Name %s ",s1[i].name);
        printf("\nDob%s",s1[i].dob);
        printf("\n%d\n",s1[i].stdid);

        total=0;
        for( j=0; j<5; j++){
            printf("marks %d sub   %lf\n",j+1,s1[i].marks[j]);
          total+=s1[i].marks[j];
        }
        avrage=total/5;
        printf("avarage marksof %d student=%d\n",i+1,avrage);
         if(avrage<50){
           printf("hey %s you have to work hard\n",s1[i].name);

          }
         elseif(avrage>80) {
           printf("%s tusiiii great ho",s1[i].name);

         }
       else{
           printf("hey %s you get good marks\n",s1[i].name);
       }

      }
 
 
}