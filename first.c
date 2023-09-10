
 #include<stdio.h>
 int main(){
     char x[10];
     printf("enter ur name\n");
     scanf("%s",x);
     printf("your name is:%s",&x);
     return 0;

 }


 #include<stdio.h>
 int main(){
     int x;
     printf("enter your roll nmbr");
     scanf("%d",&x);
     printf("your roll number is:%d",x);
    
     return 0;

 }

 #include<stdio.h>
 int main(){
     int x,y,z;
     printf("enter any two numbers");
     scanf("%d%d",&x,&y);
     z=x+y;
     printf("your sum is:%d",z);
     return 0;
    
 }

 #include<stdio.h>
 int main(){
    int sec,days,hours,min,seconds;
     printf("enter no. of sec");
     scanf("%d",&sec);
     days=sec/86400;
     sec=sec%86400;
     hours= sec/3600;
     sec=sec%3600;
     min= sec/60;
     seconds=sec;
     printf("\ndays:%d",days);
     printf("\nhours:%d",hours);
     printf("\nmins:%d",min);
     printf("\nsec:%d",seconds);
  return 0;
  }
 #include<stdio.h>
 int main(){
     int x,y,z;
     printf("enter a no");
     scanf("%d",&x);
     y=x/10;
     z=x%10;
     printf("\n1st digit is%d",y);
     printf("\n2nd digit is%d",z);
     return 0;
 }

 #include<stdio.h>
 int main(){
     int x,sum=0,r;
     printf("enter any nmbr");
     scanf("%d",&x);
     while (x>0)
     {
        
     r=x%10;

     sum=sum+r;
     x=x/10;
    
     }
     printf("sum of indivisual numbers is :%d",sum);
    
    
     return 0;
 }

 #include<stdio.h>
 int main(){
     int p,t,r;
     float si;
     printf("inter your principal,time and rate");
     scanf("%d%d%d",&p,&t,&r);
     si=(float)(p*t*r)/100;  //type casting...
     printf("your intrest is :%f",si);
 }



 #include <stdio.h>

 int main()
 {
     float principle, time, rate, SI;

    
     printf("Enter principle (amount): ");
     scanf("%f", &principle);

     printf("Enter time: ");
     scanf("%f", &time);

     printf("Enter rate: ");
     scanf("%f", &rate);

    
     SI = (principle * time * rate) / 100;

    
     printf("Simple Interest = %f", SI);

     return 0;
 }


 #include<stdio.h>
 #define pi 3.14

 int main (){
    
     float r;
     int area;
    
     printf("enter the raidus of ur circle");
     scanf("%f",&r);
     area=pi*r*r;
     printf("area of ur circle is %d",area);
     return 0;

    
 }



 #include<stdio.h>
 #include<time.h>
 #include<conio.h>
 #include<dos.h>

 int main(){

     time_t t;
     time(&t);
     printf("%s",ctime(&t));
 return 0;
 }


 #include<stdio.h>
 int main(){
     int age, sec;
     printf("tapai ko age halnuhos:");
     scanf("%d",&age);
     sec=31536000*age;
     printf("tapai le aile smma dharti ma aaera %d",sec);printf(" seconds waste garesaknu bhaesakyo");
     return 0;

 }

 #include<stdio.h>
 #include<conio.h>
 #include<dos.h>
 void main ()
 {
     clrscr ();
     int i;
  textcolor(255,0,0);
 textbackground(255,255,255);
 for(i=1;i<=120;i++)
 {
     cprintf("  hiiii  ");
     delay(200);
 }
 getch();
 }


 #include<stdio.h>
 #define y 2079
 int main(){
     int year,month,days,hours,day,month_,sec;
     printf("enter your birth year\n");
     scanf("%d",&year);
     year=y-year;
     printf("you are %d",year);printf("years old\n");
     printf("enter your birth month\n");
     scanf("%d",&month);
     month_=year*12+month;
     printf("your are %d",month_);printf(" months old ");
     printf("\nenter your birth day date");
     scanf("%d",&day);
     day=(year*365)+(month*30)+day;
     printf("you are %d",day);printf(" days old\n\n");
     sec=day*24*3600;
 printf("CONGRATUALTIONS, YOU HAVE SUCESSFULLY WASTED YOUR %d\n",sec);
 printf(" SECONDS OF YOUR LIFE,now please go and do somthing productive");
     
     return 0;
 }

 #include<stdio.h>
 int main(){
     int x;
  printf("enter a no.");
  scanf("%d",&x);
  if (x>=0)
  { printf("%d",x); printf("\tis a postive number");
   
  }
  else{
  printf("%d",x);
  printf("\t is a negative no ");
  }
 
 }
 #include<stdio.h>
 int main(){
    int x;
    printf("enter a no");
    scanf("%d",&x);
    if (x%5==0)
    {
    printf("the no is divisible by 5");
    }
    else{
     printf("the no is not divisible by 5");
    }

 }

 #include<stdio.h>
 int main(){
     int x;
     printf("enter a no.");
     scanf("%d",&x);
 if (x%5==0&& x%10!=0)
 {
  printf("the no.is divisible by 5 but not by 10");
 }
 else {printf("it is either divisible by both of the no. or none of the no.");
 }

 }

 #include<stdio.h>
 int main(){
     int x,p,z;
     printf("enter any no");
     scanf("%d %d %d",&x,&p,&z);
     if (x>y&&x>z)
     {
         printf("%d is the greatest among all inputs",x);
     }
     else if (y>x&&y>z)
     {
        printf(" the greatest no is:%d",y);
     }
     else if (z>x&&z>y)
     {
      printf("%d the greatest no ",z);
     }
    
    
    
 }

 #include<stdio.h>
 int main(){
    int x;
    printf("enter a no");
    scanf("%d",&x);
    if (x>=0)
    {
     if (x%10==0)

     {
         printf("%d is a poisive no and divisible by 10",x);
     }
     else{
         printf("%d is a positive no but not divisiblbe by 10",x);
     }
    }
    else{
     printf("%d is not positive no",x);
    }
   }

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);

    printf("Enter your choice:\n1. Add\n2. Subtract\n3. Multiply\n");
    scanf("%d", &c);

    switch (c) {
        case 1:
            printf("Sum = %d\n", a + b);
            break;
        case 2:
            printf("Difference = %d\n", a - b);
            break;
        case 3:
            printf("Product = %d\n", a * b);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }

    return 0;
}


 #include <stdio.h>

 int main() {
     int n, i;
     printf("Enter a number: ");
     scanf("%d", &n);
     for (i = 2; i <= n*2; i += 2) {
         printf("%d ", i);
     }
     return 0;
 }

 #include<stdio.h>
 int main(){
     int i,n;
     printf("enter any number");
     scanf("%d",&n);
    for ( i = n; i>=0; i--)
    {
      printf("%d\n", i);
    }
     return 0;
 }
 #include<stdio.h>
 int main(){
 int i=0,n=5;
 for ( i = 0; i <=13; i++)
 {
     printf("%d\n",n);
     n+=4;
 }
  return 0;
 }
 #include<stdio.h>
 int main(){
     int i,n,m;
     printf("enter a number");
     scanf("%d",&n);
     for ( i = 0; i <=10; i++)
     { m=i*n;
         printf("\n%d * %d = %d",n,i,m);
     }
   return 0;
 }


 #include<stdio.h>

 int main(){
 	int i,j,n;
	
 	printf("How many lines : ");
 	scanf("%d", &n);
	
 	for(i=n; i>=1; i--){
 		for(j=1; j<=i; j++){
 			printf("*");
 		}
 		printf("\n");
 	}
	
 	return 0;
 }

 #include<stdio.h>
 int main(){
     int i,n,j;
     printf("efsdf");
     scanf("%d",&n);
    for ( i = 1; i<=n; i++)
    {
      for ( j = 1; j<=i ; j++)
      {
         printf("%d\t",j);
      }
     
     printf("\n");
    }
   

     return 0;

 }

 #include <stdio.h>

 int main() {
     int i, j,n;
     printf("efsdf");
      scanf("%d",&n);
     for(i = 1; i <= n; i++) {
         for(j = 1; j <= n-i; j++) {
             printf(" ");
         }
         for(j = 1; j <= i; j++) {
             printf("*");
         }
         printf("\n");
     }
     return 0;
 }

 #include<stdio.h>
 int main()
 {
     int i,n,j,z;
     printf("no. of line to print: ");
     scanf("%d",&n);
     for (i = n; i>0; i--)
     {
         for ( j = 1; j <= n-i; j++)
         {
             printf(" ");
         }
         for (z=1;z<=i;z++)
         {
             printf("*");
         }
        
         printf("\n");
     }
  return 0;
 }

//  Array
  #include<stdio.h>
  int main(){
     int a[5],i;
     for ( i = 0; i < 5; i++)
     {
         printf("number");
         scanf("%d",&a[i]);
     }
      for ( i = 0; i < 5; i++)
      {
         printf("%d\n",a[i]);
      }
     

  }

 #include<stdio.h>
 int main()
 {
     int a[10],i,n,sum=0;
     printf("no. of values to take in");
     scanf("%d",&n);
     for ( i = 0 ; i < n ; i++)
     {
         printf("enter your number");
         scanf("%d",&a[i]);
     }
     for ( i = 0; i < n; i++)
     {
         sum=sum+a[i];
     }
     printf("the sum is %d",sum);
 }

 #include<stdio.h>
 int main()
 {
     int subjects[5],division,i,sum=0;
     float marks;
     for ( i = 0; i < 5; i++)
     {
         printf("enter the marks in subject");
         scanf("%d",&subjects[i]);
     }
     for ( i = 0; i < 5; i++)
     {
         sum=sum+subjects[i];
     }
    marks=(sum/500.0)*100;
     printf("Percentage: %f",marks);
 
     if (marks <40)
     {
         printf("\nDivision: fail");
     }
     else if (marks >=40 & marks<50)
     {
         printf("\nDivision: third");
     }
     else if (marks>49 & marks<60)
     {
         printf("\n Division: second");
     }
     else if (marks>59 & marks<80)
     {
         printf("D\nivision: first");
     }
     else if (marks>79)
     {
         printf("\nDivision: Distiontion");
     }
     else
     printf("invalid");
     return 0;
 }

  #include<stdio.h>
  int main()
  {
     int i,j,n,k;
     printf("enter the no. of lines to print\t");
     scanf("%d",&n);
     for ( i = 1; i <=n ; i++)
     {
         for ( j = 1; j <= n-i; j++)
         {
             printf(" ");
         }
        
         for (k = 1; k<=i+(i-1);k++)
         {
             printf("*");
            
         }

         printf("\n");
        
     }
     return 0;
  }


 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int i,j=0,l;
 	char name[50];
 	printf("enter your name");
 	scanf("%s",&name);
 	l=strlen(name);
	
 	for(i=0;i<l;i++)
 	{
 		strlwr(name);
 		if (name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
 		{
 		 j++;
 		}
		
 	}
	
 	printf("%d",j);
 	return 0;
 }


 #include <stdio.h>
 #include <string.h>

 int main() {
   char password[20];
   char stored_password[20] = "secret";
  
   printf("Enter password: ");
   scanf("%s", password);
  
   if (strcmp(password, stored_password) == 0) {
     printf("Access granted.\n");
   } else {
     printf("Access denied.\n");
   }
  
   return 0;
 }
 #include <string.h>
 char name[]="abcdef";
 char str[50];

//   strlen():
//   int = strlen(name);
//   strcpy():
//  strcpy(str,name);
//  (iii) strcat():
//  strcat(str,name);
//  (iv)strrev()
//  reverse
//  (v) strcmp
//  compares
//  (vi)strupr()
//  uppercase
//  (vii)strlwr()
//  lowercase
