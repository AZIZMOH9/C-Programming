#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    struct student{
int ticket;
int timein;;
};

void status(struct student list[10][10]){
int i,j;
for(i=0;i<10;i++){
    for(j=0;j<10;j++){
        printf("%d ",list[i][j].ticket);
    }
    printf("\n");

}
}
void add(struct student list[10][10],int secund){
int i=0;
int j=0;
int d=0;
double s=secund/60;
while(list[i][j].ticket>0){
        j=0;
    while(list[i][j].ticket>0&&j<10){
        ++j;
    }
   if(list[i][j].ticket>0)
    if(i<10){
        i++;
    }
}
printf("enter the number of ticket:\n");
list[i][j].timein=s;
scanf("%d",&list[i][j].ticket);

}


int removes(struct student list[10][10]){
int i=0;
int temp;
int j=0;
printf("enter the number that you want to remove");
        scanf("%d",&temp);
while(list[i][j].ticket!=temp){
        j=0;
    while(list[i][j].ticket!=temp){
        ++j;
    }
   if(list[i][j].ticket>0)
    if(list[i][j].ticket!=temp){
        i++;
    }
}
 list[i][j].ticket=-1;
 return list[i][j].timein;

}
int main()
{

struct student park[10][10];
time_t secund;
secund = time(NULL);
int i,j,temp;
    for(i=0;i<10;i++){
    for(j=0;j<10;j++){
       park[i][j].ticket=-1;
    }
    }

    int select;
    printf("enter a comand\nfor park status press 1\nfor adding a new car press 2\nfor remove a care press 3\nfor exit press 0\n");
    scanf("%d",&select);
    while(select!=0){
        switch(select){
        case 1:status(park);
        break;
        secund = time(NULL);
        case 2:add(park,secund);
        break;
        case 3:temp=removes(park);
        secund = time(NULL);
        secund=secund/60;
        secund=secund-temp;
        printf("the price of park:%dtl\n",(secund*5)+15);

        break;



        }
        printf("enter a comand");
        scanf("%d",&select);
    }
    status(park);
}
