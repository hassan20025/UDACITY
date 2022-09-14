
#include "embedd systems\header\header.h"
#include "..embedd systems\header\header.h"


struct car_info{
char card_holder_name[30];
 int card_pan;
};

struct card_expiration_date{
short int arr[2];
};

int main(){
float money_want;
int x=0 , clients_account[]={50149853,12427205,20705027},len=sizeof(clients_account)/sizeof(clients_account[0]);

/*card module*/
struct car_info ci;
    printf("please enter card holder name .... \n");
    scanf("%s",&ci.card_holder_name);

    printf("please enter PAN of card ... \n");
    scanf("%d",&ci.card_pan);

struct card_expiration_date ed;
       printf(" card expiration date : enter year and month ...\n");

while(x<2){
        scanf("%d",&ed.arr[x]);
        x++;
        }

if(ed.arr[0]<2022){
    printf("Declined expired card\n");
    exit(0);
}
else if(ed.arr[1]>8){
    printf("Declined expired card\n");
    exit(0);
}
printf("amount you want ... \n");
scanf("%f",&money_want);

int y=0;
/*2-terminal*/
while(y<3){

if(clients_account[y] == ci.card_pan){
       printf("done successfully ...\n");
        break;

}

  if ( y = len){
      printf("Declined invalid account \n");
      exit(0);
}

y++;

   };

/*3-server*/
if(money_want > amount){
    printf("Declined insuffecient funds \n");

    exit(0);
}
if(money_want > max_amount){
    printf("Declined amount exceeding limit");
    exit(0);
}

return 0;

}