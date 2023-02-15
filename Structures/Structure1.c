#include"stdio.h"
//#pragma pack(1)
int main(int argc, char const *argv[])
{
    struct Students{           
            char name;            
            char section;
             int sid;
    }s1;
    printf("%p\n",&s1.name);
    printf("%p",&s1.section);
    //struct Students s1 ={.sid=1,.name="kiet",.section='C'};
    //printf("Student Name=%s",s1.name);
    // struct Students s[2];
    // for(int i=0;i<2;i++){
    // printf("Enter name=\n");
    // scanf("%s",s[i].name);
    // printf("Enter sid=\n");
    // scanf("%d",&s[i].sid);
    // printf("Enter section=\n");
    // fflush(stdin);
    // scanf("%c",&s[i].section);
    // }
    // for(int i=0;i<2;i++){
    // printf("Enter name=%s\n",s[i].name);
    // printf("Enter sid=%d\n",s[i].sid);
    // printf("Enter section=%c\n",s[i].section);
    // printf("\n");
    // }
   

    return 0;
}
