#include <stdio.h>
#include <stdlib.h>


/*
void CommissiononHammers (){

 double Sales;
  printf("Enter the Sales\n");
    scanf("%lf",&Sales);
 double SP;
 printf("Enter the Selling price\n");
    scanf("%lf",&SP);

if (Sales<100){
        double commission = 0* SP;
printf("Commission will be %.2lf\n",commission);
}else if (Sales>=100 && Sales<250){
 double commission = 0.05* SP;
printf("Commission will be %.2lf\n",commission);
}else {
 double commission = 0.1* SP;
printf("Commission will be %.2lf\n",commission);
}
}
void CommissiononPliers(){
int selling_price;
printf("Enter the selling price \n");
scanf("%d",&selling_price);
int Sales;
printf("Enter the quantity\n");
scanf("%d",&Sales);
if (Sales<200){
        double commission = 0* selling_price;
printf("Commission on pliers  will be %.2lf\n",commission);
}else if (Sales>=200 && Sales<350){
 double commission = 0.25* selling_price;
printf("Commission on pliers will be %.2lf\n",commission);
}else {
 double commission = 0.1* selling_price;
printf("Commission on pliers will be %.2lf\n",commission);
}

}
void CommisiiononDrills (){
    double sales;
    printf("Enter the Sales\n");
    scanf("%lf",&sales);
    double Sp;
    printf("Enter the Selling price\n");
    scanf("%lf",&Sp);
if (sales<50){
    double Commission = 0*Sp;
     printf("Commission on drills  will be %.2lf\n",Commission);
    }else if(sales>=50 && sales<=350){
    double Commission = 0.15*Sp;
    printf("Commission on drills will be %.2lf\n",Commission);
    }else{
    double Commission = 0.2;
     printf("Commission on drills will be %.2lf\n",Commission);
    }

}
void CommissiononChisels(){
 double Sales;
  printf("Enter the Sales\n");
    scanf("%lf",&Sales);
 double SellingP;
 printf("Enter the Selling price\n");
    scanf("%lf",&SellingP);
    if (Sales<100){
        double commission = 0* SellingP;
printf("Commission on chisels will be %.2lf\n",commission);
}else if (Sales>=100 && Sales<250){
 double commission = 0.05* SellingP;
printf("Commission on chisels will be %.2lf\n",commission);
}else {
 double commission = 0.1* SellingP;
printf("Commission on chisels will be %.2lf\n",commission);
}




}
void CommisiononScrewDrivers(){
double Sales;
  printf("Enter the Sales\n");
    scanf("%lf",&Sales);
 double SP;
 printf("Enter the Selling price\n");
    scanf("%lf",&SP);

if (Sales<100){
        double commission = 0* SP;
printf("Commission on Screw Drivers  will be %.2lf\n",commission);
}else if (Sales>=100 && Sales<250){
 double commission = 0.05* SP;
printf("Commission on Screw Drivers  will be %.2lf\n",commission);
}else {
 double commission = 0.1* SP;
printf("Commission on Screw Drivers will be %.2lf\n",commission);
}
}
void CommissiononTapes(){
double Sales;
  printf("Enter the Sales\n");
    scanf("%lf",&Sales);
 double SP;
 printf("Enter the Selling price\n");
    scanf("%lf",&SP);

if (Sales<100){
        double commission = 0* SP;
printf("Commission on tapes will be %.2lf\n",commission);
}else if (Sales>=100 && Sales<250){
 double commission = 0.05* SP;
printf("Commission on tapes will be %.2lf\n",commission);
}else {
 double commission = 0.1* SP;
printf("Commission on tapes will be %.2lf\n",commission);
}
}
void OtherConstructionMaterials(){
printf("No Commission\n");
}*/
int isEven (int num){

 if (num%2==0){
  return 1;
  printf("It is Even\n",num);
  } else {
  return 0;
  printf("It is odd\n",num);}
}

int max (int a,int b){
if (a>b){
return a;}else {return b;}

}

int signOfNumber(int num){
if (num>0){return 1;
} else if (num<0){return -1;}else {return 0;}
}

char calculateGrade(int score){
if (score<=30){return  'F';} else if (score<=60){return 'D';}else if (score<=70){return 'C';} else if (score<=80){return 'B';}
else if (score>80)  {return 'A';}  else{}

}

 char * temperatureStatus(float temp){
if (temp<0){return "cold"; } else if (temp>0  && temp <=25) {return "warm";} else {return "hot";}
}

int isEligible(int age){
if (age>=18){return 1;}else {return 0;}
}

int isPositive(int num){
if (num>0){ return 1;} else { return 0;}
}






int main()
{
 CommissiononHammers();
 CommisiiononDrills();
CommissiononPliers();
CommissiononChisels();
CommisiononScrewDrivers();
CommissiononTapes();
OtherConstructionMaterials();


int num;

printf("Enter the number\n");
scanf("%d",&num);
if (isEven(num)){
    printf("It is Even\n",num);}else {
     printf("It is odd\n",num);
    }

  int a;
  int b;
  printf("Enter the two numbers\n");
  scanf("%d %d",&a ,&b);
   printf("Max is %d\n",max(a,b));








  int num;
  printf("Enter number\n");
  scanf("%d",&num);
  if (num>0){
        printf("is positive\n",signOfNumber); } else if (num<0){
    printf("is negative\n",signOfNumber(num));
}else {
    printf("is zero\n",signOfNumber(num));
     }

int score;
printf("Enter the score\n");
scanf("%d",&score);
printf("Grade  is %c",calculateGrade(score));


float temp;
printf("Enter the temperature\n");
scanf("%f",&temp);
printf("The temperature is %s\n",temperatureStatus(temp));


int age;
printf("Enter the age\n");
scanf("%d",&age);
if (isEligible(age)){printf("Is eligible to vote\n"); }else  { printf("Is not eligible\n");   }


int num;
printf("Enter the number\n");
scanf("%d",&num);
if (isPositive(num)){printf("Is positive\n");  } else {printf("Is negative\n"); }








    return 0;

  }
