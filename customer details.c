#include<stdio.h>
struct customer
{
    int customer_id;
    int no_of_product_purchased;
    float total_payment;
};
int main()
{
    struct customer Rohit;
    printf("Enter the Customer's Id:\n");
    scanf("%d",&Rohit.customer_id);
    printf("Enter the no. of the product purchased:\n");
    scanf("%d",&Rohit.no_of_product_purchased);
    printf("Enter the total payment:\n");
    scanf("%f",&Rohit.total_payment);
    printf("\n");
    printf("MJ's Id:%d\n",Rohit.customer_id);
    printf("Product purchased:%d\n",Rohit.no_of_product_purchased);
    printf("MJ's Total Payment is :%f\n",Rohit.total_payment);
    return 0;
}
