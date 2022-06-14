#include<time.h>
#include <stdio.h>

int main(){
char word[100];
int word1[100];
int s=0;
int q,i,g,p,x;
srand(time(0));
printf("enter the number of bit for p and q\nfor 1 bit 10\n2 bits 100");
scanf("%d",&g);
q=rand()%g;
while(s!=1){
        q=rand()%g;
    for(i=2;i<=q;i++){
        if(q==i){
            if(q>g/10){
               s++;
               }

        }
        else if(q%i==0){
            i=q+1;
        }
    }

}
printf("q=%d\n",q);
s=0;
p=rand()%g;
while(s!=1){
        p=rand()%g;
    for(i=2;i<=q;i++){
        if(p==i){
            if(p!=q&&p>g/10){
              s++;


            }

        }
        else if(p%i==0){
            i=p+1;
        }
    }

}
printf("p=%d\n",p);
int n,f,temp,k=0;
n=p*q;
q--;
p--;
f=p*q;
temp=f;
f=f+1;
int e,d;
int cont=0;
printf("e key choises:         d key choises:\n");
hi:
for(i=2;i<temp;i++){
    if(f%i==0){
            if(i)
            k=f/i;
   cont++;
        printf("%d                      %d\n",i,k);
    }
}

if(cont<2){
    f=f+temp;
    goto hi;
}
f=temp;
printf("chose e key then dkey\n");
scanf("%d",&e);
scanf("%d",&d);
printf("press 1 for text crypto 2 for number crypto\n");
scanf("%d",&g);
if(g==1){
   printf("enter the text\n");
   scanf("%s",&word);
   k=strlen(word);
   for(i=0;i<k;i++){
       word[i]=word[i]-96;
        word1[i]=word[i];
   }

}
else if(g==2){
    printf("enter the count of number that you want to crypto\n");
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d",&word1[i]);}
}
printf("(%d,%d) is your public key\n",n,e);
    printf("(%d,%d) is your private key\n",n,d);
    printf("for crypto press 1\n decrypto press2\n for exit 0:");
    scanf("%d",&temp);
        while(temp!=0){
        if(temp==1){ //crypto operation
            for(i=0;i<k;i++){
                x=word1[i];
                g=x;
                for(s=1;s!=e;s++){
                x=x*g;
                if(x>n){
                   x=x%n;

            }
                }
                word1[i]=x;
                printf("%d\n",x);
                if(x>26){
                    x=x%27;
                }
                x=x+96;
                word[i]=x;
            }
        }
        else if(temp==2){ //decripto operation
            for(i=0;i<k;i++){
                x=word1[i];
                g=x;
                for(s=1;s!=d;s++){
                x=x*g;
                if(x>n){
                    x=x%n;
                }
                }
                printf("%d\n",x);
                word1[i]=x;
                if(x>26){
                        printf("%d\n",x);
                    x=x%27;
                }
                x=x+96;
                word[i]=x;
            }
        }
        puts(word);
        printf("for crypto press 1\n decrypto press2\n for exit 0:");
        scanf("%d",&temp);
        }
}
