#include <stdio.h>
#include <stdlib.h>
struct item
{
char name[20];
int price;
int code;
int qty;
};
struct item i[5];
int main()
{
struct item i[5];
   input();
   output();
return 0;
}
void input(struct item i[5])
{
int k=0,n;
printf("enter no.of items:\n");
scanf("%d",&n);

for(k=0;k<n;k++)
{
printf("\nEnter Name of item: ");
scanf("%s",&i[k].name);
printf("\nprice: ");
scanf("%d",&i[k].price);
printf("\nEnter code of item: ");
scanf("%d",&i[k].code);
printf("\nquantity of item: ");
scanf("%s",&i[k].qty);
}
}
void output(struct item i[5])
{
int j=0;
for(j=0;j<n;j++)
{
printf("\n\n\n Name: %s \n\n price: %d \n\n code: %d \n\n qty: %d",i[j].name,i[j].price,i[j].code,i[j].qty);
}
}
