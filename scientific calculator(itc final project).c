#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void menu(){
	printf("\n\n1) Arithematic\n2) Trignometry\n3) Logarithm function\n4) Number conversion\n5) Matrix\n6) Random number generation\n7) Average\n8) x raised to power y \n9) Foctorial\n10)Mean and standard deviation\n");
}
void arithmeticmenu(){
	printf("\na) Addition\nb) Substraction\nc) Multiplication \nd) Division\n");
}
void decitobinary(int no){
	int a[100],i;
	for(i=0;no>0;i++){
		a[i]=no%2;
		no=no/2;
	}
	printf("\n\nBinary form of given no is:\t");
	for(i=i-1;i>=0;i--){
		printf("%d",a[i]);
	}
	printf("\n");
}
void decitohexa(int nu)
{
	int remainder,quotient;
	int i=1,j,temp;
	char hexanumber[100];
	quotient = nu;
	while(quotient!=0) {
		temp = quotient % 16;
		if( temp < 10){
			 temp =temp + 48;
		}
		else{
			temp = temp + 55;
		}
		hexanumber[i++]= temp;
		quotient = quotient / 16;
	}
	printf("\nHexadecimal form of given number is : ");
	for (j=i-1;j>0;j--)
	{
	      printf("%c",hexanumber[j]);
	  }
	  printf("\n");
}
void decitocta(int no)
{
    int quot,remain;
    int octn[100], i = 1, j;
    quot=no;
    while(quot != 0)
    {
        octn[i++]=quot % 8;
        quot=quot/8;
    }
    printf("\nOctal form of given number is :\t");
    for (j=i-1;j>0;j--)
    {
        printf("%d", octn[j]);
	}
	printf("\n");
}
void binarytodesi(int num){
	int rem,sum=0,i=0;
	while(num>0){
		rem=num%10;
		sum=sum+rem*(pow(2,i));
		num=num/10;
		i++;
	}
	printf("\n\nDecimal value of given number is: %d",sum);
}
long int binarytohexa(long int num){
long int remain,i=1,sum=0;
	while(num!=0){
		remain=num%10;
		sum=sum+ remain*i;
		i=i*2;
		num=num/10;
 	}
	return sum;
}
void binarytooctal(long int num )
{
	long int octal = 0, j = 1, remain;
    while (num != 0)
    {
        remain = num % 10;
        octal = octal + remain * j;
        j = j * 2;
        num = num / 10;
    }
    printf("\n\nOctal form of given number is : %lo\n", octal);
}
main(){
	float cont;
	int che;
	printf("          ********\n          WELCOME TO MY CALCULATOR\n          *********\n");
	do{
	printf("\n     MENU\n");
	menu();
	printf("\nEnter your choice:\t");
	scanf("%d",&che);
if(che==1){
		float num1, num2, result;
	char op;
	printf("Enter the operation: ");
	scanf(" %c", &op);
	printf("\nEnter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number: ");
	scanf("%f", &num2);
	switch(op)
	{
		case '+':
		result = num1+num2;
		printf("\nThe sum of %f and %f is: %f",num1,num2,result);
		break;

		case '-':
		result = num1-num2;
		printf("\nThe difference between %f and %f is: %f",num1,num2,result);
		break;

		case '*':
		result = num1*num2;
		printf("\nThe product of %f and %f is: %f",num1,num2,result);
		break;

		case '/':
		result = num1/num2;
		printf("\n%f divided by %f is: %f",num1,num2,result);
		break;

		default :
		printf("The operator or number you entered is not valid");
	}

	}
else if(che==2){
	float deg,pi=3.141592654;
	int che1;
	printf("\nEnter your number in degrees\n");
	    scanf("%f",&deg);
	    printf("\nSelect Operation\n1) sin\n2) cos\n3) tan\n4) sin-1\n5) cos-1\n6) tan-1\n");
	    scanf("%d",&che1);
	if(che1==1){
		printf("The sin of %f is : %f\n",deg,sin(deg*pi/180));
	}
	else if(che1==2){
		printf("The cos of %f is : %f\n",deg,cos(deg*pi/180));
	}
	else if(che1==3){
		printf("The tan of %f is : %f\n",deg,tan(deg*pi/180));
	}
	else if(che1==4){
	printf("The sin inverse of %f is : %f\n",deg,asin(deg)*(180/pi));
	}
	else if(che1==5){
		printf("The cos inverse of %f is : %f\n",deg,acos(deg)*(180/pi));
	}
	else if(che1==6){
		printf("The tan inverse of %f is : %f\n",deg,atan(deg)*(180/pi));
	}
	else{
		printf("Invalid function or operation");
	}
}
else if(che==3){
		float num;
	int che2;
	printf("\nENTER A NUMBER\t");
	scanf("%f",&num);
	printf("\nPlease,select operation:\n1) log\n2) ln\n3) e^x\n");
	scanf("%d",&che2);
	if(che2==1){
		printf("\nlog of %f is %f",num,log10(num));
	}
	else if(che2==2){
		printf("\nln of %f is %f",num,log(num));
	}
	else if(che2==3){
		printf("\nlog of %f is %f",num,exp(num));
	}
	else{
		printf("Invalid number or operation");
	}
}
else if(che==4){
		int uinput,gn,p;
	printf("\nPlease enter the type of input!!!\n1) Decimal\n2) Binary\n");
	scanf("%d",&uinput);
	if(uinput==1){
		printf("\nPlease enter a number you want to convert:\t");
		scanf("%d",&gn);
		printf("\nEntered value is:\t%d",gn);
		decitobinary(gn);
		decitohexa(gn);
		decitocta(gn);
	}
	else if(uinput==2){
		printf("\nPlease enter a number you want to convert:\t");
		scanf("%d",&gn);
		printf("\n\nEntered value is:\t%d",gn);
		binarytodesi(gn);
		printf("\n\nHexadecimal form of given number is: %1X",binarytohexa(gn));
		binarytooctal(gn);
	}
	else{
		printf("\n\nGiven instruction is invalid");
	}
}
else if(che==5){
		int che4;
	printf("\nSelect operation\n1) Addition\n2) Substraction\n3) Multiplication\n");
	scanf("%d",&che4);
	if(che4==1){
	int i,j,r,c,m1[10][10],m2[10][10],m3[10][10];
	printf("\nEnter no of rows:\t");
	scanf("%d",&r);
	printf("Enter no of columns:\t");
	scanf("%d",&c);
	printf("\nEnter elements of first matrix:\t");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("\na%d%d :\t",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter values of second matrix\n");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("\nb%d%d:\t",i,j);
		    scanf("%d",&m2[i][j]);
		}
	}
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			m3[i][j] = m1[i][j]+m2[i][j];
		}
	}
	printf("\nThe sum of given matrices is:\n");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
		printf("%d   ",m3[i][j]);
	}
			printf("\n");
		}
	}
else if(che4==2){
	int i,j,r,c,m1[10][10],m2[10][10],m3[10][10];
	printf("\nEnter no of rows:\t");
	scanf("%d",&r);
	printf("Enter no of columns:\t");
	scanf("%d",&c);
	printf("\nEnter elements of first matrix:\t");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("\na%d%d :\t",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter values of second matrix\n");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("\nb%d%d:\t",i,j);
		    scanf("%d",&m2[i][j]);
		}
	}
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			m3[i][j] = m1[i][j]-m2[i][j];
		}
	}
	printf("\nThe difference of given matrices is:\n");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
		printf("%d   ",m3[i][j]);
	}
			printf("\n");
		}
}
else if(che4==3){
	int i,k,j,r,c,m1[10][10],m2[10][10],m3[10][10];
	printf("\nEnter no of rows:\t");
	scanf("%d",&r);
	printf("Enter no of columns:\t");
	scanf("%d",&c);
	printf("\nEnter elements of first matrix:\t");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("\na%d%d :\t",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter values of second matrix\n");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("\nb%d%d:\t",i,j);
		    scanf("%d",&m2[i][j]);
		}
	}
			for(i=1;i<=r;i++){
			for(j=1;j<=c;j++)
			{
				m3[i][j]=0;
			}
		}
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
		for(k=1;k<=c;k++)
			m3[i][j] += m1[i][k]*m2[k][j];
		}
	}

	printf("\nThe multiplication of given matrices is:\n");
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
		printf("%d   ",m3[i][j]);
	}
			printf("\n");
		}

}
else{
	printf("Invalid number or operation");
}
}
else if(che==6){
		int no1,no2,no3,i,ran;
	printf("\nEnter two numbers as a range for random number \t");
	scanf("%d %d",&no1,&no2);
	printf("\nHow many random numbers you want\t");
	scanf("%d",&no3);
	for(i=1;i<=no3;i++){
		ran=(rand()%(no2-no1+1))+no1;
		printf("\n%d",ran);
	}
}
else if(che==7){
		float sum=0,avg[30];
	int tno,i;
	printf("\nEnter total number\t");
	scanf("%d",&tno);
	for(i=1;i<=tno;i++){
		printf("\nEnter %d value \t",i);
		scanf("%f",&avg[i]);
		sum=sum+avg[i];
	}
	printf("\nThe average of given numbers is %f",sum/tno);
}
else if(che==8){
		int i,bse,pow,ans=1;
	printf("\nEnter value base\t");
	scanf("%d",&bse);
	printf("\nEnter power\t");
	scanf("%d",&pow);
	for(i=1;i<=pow;i++){
		ans=ans*bse;
	}
	printf("%d raise to %d is :%d",bse,pow,ans);
}
else if(che==9){
	int b,i,fact=1;
	printf("\nEnter a numbrer of which you you have to find factorial\t");
	scanf("%d",&b);
	for(i=1;i<=b;i++){
		fact=fact*i;
	}
	printf("\nFactoroal of %d is :%d",b,fact);
}
else if(che==10){
		float mean[20],sum=0.0,mn,sum1=0,sd;
	int i,c;
	printf("\nEnter total number:\t");
	scanf("%d",&c);
	for(i=1;i<=c;i++){
		printf("\nEnter %d value:\t",i);
		scanf("%f",&mean[i]);
		sum=sum+mean[i];
	}
	mn=sum/c;
	for(i=1;i<=c;i++){
		sum1=sum1+((mean[i]-mn)*(mean[i]-mn));
	}
	sd=sqrt(sum1/c);
	printf("\nMean of given data is %f",mn);
	printf("\nStandard deviation of given data if %f",sd);

}
else {
	printf("\n'Invalid choice'");
}
	printf("\n\n Do You Want To Continue....\n1) Yes\n2) No\n");
	scanf("%f",&cont);
}
while(cont==1);
printf("\n THANKS FOR USING MY CALCULATOR!!!!!");
}
