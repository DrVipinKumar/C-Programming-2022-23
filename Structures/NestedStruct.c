#include"stdio.h"
struct address{
    char street[20];
    char houseName[20];
    int houseNumber;
};
typedef struct Person{
    char name[20];
    struct address add1;
}Emp;
int main(int argc, char const *argv[])
{ 
    //struct address add1;
    Emp e1;
    printf("Enter name\n");
    scanf("%s",e1.name);
    printf("Enter street\n");
    scanf("%s",e1.add1.street);
    printf("Enter house name\n");
    scanf("%s",e1.add1.houseName);
    printf("Enter house number\n");
    scanf("%d",&e1.add1.houseNumber);
    printf("Name=%s, Street=%s, HouseName=%s, House Number=%d",e1.name, e1.add1.street,e1.add1.houseName,e1.add1.houseNumber);
    
    return 0;
}
