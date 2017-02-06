#include<stdio.h>
struct student
{
    int student_id;
    int registration_id;
    float fee;
};
int main()
{
    struct student MJ;
    MJ.student_id=101;
    MJ.registration_id=1005;
    MJ.fee=1000.50;
    printf("MJ id=%d\n",MJ.student_id);
    printf("MJ registration id=%d\n",MJ.registration_id);
    printf("MJ free=%f\n",MJ.fee);
    printf("\n");
    struct student Rohit;
    Rohit.student_id=102;
    Rohit.registration_id=1006;
    Rohit.fee=1001.50;
    printf("Rohit id=%d\n",Rohit.student_id);
    printf("Rohit registration id=%d\n",Rohit.registration_id);
    printf("Rohit free=%f\n",Rohit.fee);
    return 0;
}
