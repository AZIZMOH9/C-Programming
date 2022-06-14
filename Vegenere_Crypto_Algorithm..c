#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{   while(1){
    char w[30],k[30];
    int ks=0;
    int i,l,temp,lk,h;
    printf("for crypto press 1\nfor decrypto press 2\n");
    scanf("%d",&h);
    printf("enter a text\n");
    scanf("%s",&w);
    printf("press 1 for text key\npress 2 for number key\n");
    if(h==1){
        printf("press 3 for random key from our system:\n");
    }
    scanf("%d",&temp);
    if(temp==2){
       printf("enter a long key\n");
    scanf("%d",&lk);
    for(i=0;i<lk;i++){
        printf("enter a %d key\n",i);
        scanf("%d",&temp);
        k[i]=temp+97;
    }
    }
    else if(temp==1){
            printf("write the key text\n");
            scanf("%s",k);
           lk=strlen(k);

    }
    else if(temp==3){
            printf("enter a long key\n");
    scanf("%d",&lk);
         srand(time(0));

    for(int i = 0; i<lk; i++)
     k[i]=rand()%26+97;
     printf("your key:%s\n",k);
    }
    for(i=0;i<strlen(w);i++){
        if(ks==lk){
            ks=0;
        }
        if(h==2){
        temp=w[i]-k[ks++];
        if(temp<0){
             w[i]=123+temp;
        }
        else if(temp<26&&temp>-1){
            temp=temp+97;
        w[i]=temp;
}
        }
        else if(h==1){
        temp=w[i]+k[ks++];
        if(temp>122)
            {temp=(temp-194)%26;
            temp=temp+97;
        }
        w[i]=temp;
        }
    }
    printf("crypto:");
    puts(w);
    printf("\n");
    }
}
