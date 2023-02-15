#include"stdio.h"
#include"string.h"
int main(int argc, char const *argv[])
{
    typedef struct students {
    char sname[20];
    int sid;
    char class[10];
    char section;
    }Student;
    Student s[2];
    for(int i=0;i<2;i++){
        printf("Enter student name=\n");
        fflush(stdin);
        scanf("%s",s[i].sname);
        printf("Enter student id=\n");
        scanf("%d",&s[i].sid);
        printf("Enter student class=\n");
        fflush(stdin);
        scanf("%s",s[i].class);
        printf("Enter student section=\n");
        fflush(stdin);
        scanf("%c",&s[i].section);
    }
    for(int i=0;i<2;i++){
    printf("Student Name:%s ",s[i].sname);
    printf("Student ID:%d ",s[i].sid);
    printf("Student Class:%s ",s[i].class);
    printf("Student Section:%c ",s[i].section);
    printf("\n");
    }
   

    return 0;
}
