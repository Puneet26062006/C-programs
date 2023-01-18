// #include <stdio.h>
// int main ()
// {
//   int n;
//   scanf("%d",&n);
//   int a[n];
//   for(int i=0;i<n;i++)
//     scanf("%d",&a[i]);
//   for(int i=0;i<n;i++)
    
//     printf("%d",a[i]);
//   return 0;
// }
// #include <stdio.h>
// int main ()
// {
//   int n;
//   scanf("%d",&n);
//   int a[n];
//   for(int i=0;i<n;i++)
//     scanf("%d",&a[i]);
//   for(int i=0;i<n;i++)
//     if(a[i]%2==0)
//     printf("%d",a[i]);
//   return 0;
// }
// #include<stdio.h>
// int main ()
// {
//   int n,b=0,c=0;
//   scanf("%d",&n);
//   int a[n];
//   for (int i=0;i<n;i++)
//     scanf("%d",&a[i]);
//   for(int i=0;i<n;i++)
//     {
//       if(a[i]%2==0)
//         b=b+a[i];
//       else
//         c=c+a[i];
      
//     }
//   printf("%d\n",b);
//   printf("%d\n",c);
//   printf("%d\n",b+c);
//   if(b==c)
//     printf("same");
//   return 0;
// }
//.......check given no. is even or odd using function...
// #include<stdio.h>
// void evenodd(int a){
// if(a%2==0)
//   printf("%d is even\n",a);
//   else
//   printf("%d is odd\n",a);
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   evenodd(n);
//  evenodd(9);
//   evenodd(25);
//   return 0;
// }
// prime no. or not using function...
// #include<stdio.h>
// void prime(int a){
//   int c=0;
//   for(int i=1;i<=a;i++)
// if(a%i==0)
//   c++;
//   if(c==2)
//     printf("%d is prime\n",a);
//   else
//     printf("%d is not prime\n",a);
  

// }
// int main() {
//   int n;
//   scanf("%d",&n);
//   prime(n);
//   prime(22);
//   prime(109);
//   return 0;
// }

// #include<stdio.h>
// int prime(int a){
//   int c=0;
//   for(int i=1;i<=a;i++)
// if(a%i==0)
//   c++;
//   if(c==2)
//   return 1;
//   else
//    return 0;

// }
// int main() {
//   int n;
//   scanf("%d",&n);
//   prime(n);
//   prime(22);
//   prime(109);
//   return 0;
// }
//n prime no......
// #include<stdio.h>
// int power(int a,int b){
// int  c=1;
//   for(int i=1;i<=b;i++){
//     c=c*a;}
//   return c;
// }
// int prime(int a){
//   int c=0;
//   for(int i=1;i<=a;i++){
//     if(a%i==0){
//       c++;}}
//   if(c==2)
//   {return 1;}
//   else 
//   {  return 0;}
  
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   for(int i=power(10,n-1);i<power(10,n);i++ ) {
//     if(prime(i)){
//       printf("%d\n",i);}}
//   return 0;
//   }
//exponent....
// #include<stdio.h>
// int power(int a,int b){
//   int c=1;
//   for(int i=1;i<=b;i++)
//     c=c*a;
//   if(b!=0)
//     return c;
//   else
//    return 1;
//   }
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   printf("%d", power(n,2));
//   return 0;
  
// }
//*******duplicacy or remove the element from 1d array
//  #include <stdio.h>

// int main() {

// int i,j,k,size;
// scanf("%d",&size);
// int a[size];
// for(i=0;i<size;i++)
// scanf("%d",&a[i]);
//    for(i=0;i<size;i++){
//       for(j=i+1;j<size;j++){
//          if(a[i]==a[j]){
//             for(k=j;k<size;k++){
//                a[k]=a[k+1];
//             }
//             size--;j--;
//          }
//       }
//    }
// for(i=0;i<size;i++)
// printf("%d ",a[i]);
//     return 0;
// }
//Q6    If 375 correct for 150 unit without tax then



// #include<stdio.h>
// int neofighter()
// {
// float n,a,b,c,d,e,g;
// printf("Enter Consumed Electricity Units=");
// scanf("%f",&n);
// if(n<=100)
// a=n*2;
// else if(n>=201){
// c=n-100;
// e=c-100;
// a=200+350+e*4.50;}
// else{
// d=n-100;
// a=200+d*3.50;}
// b=a/10;
// g=a+b;
// printf("Total Bill=");
// printf("%f",g);
// return 0;
// }
// int main ()
// { ne#include<stdio.h>
// int mofighter()ain()
// {
//   int a,b;
//   int *p1,*p2;
//   p1=&a;
//   p2=&b;
//   a=23;b=27;
//   printf("%d",*p1+*p2);
//   return 0;
  
// }
//#include<stdio.h>
// int main()
// {
//   int a,b;
//   int *p1,*p2;
//   p1=&a;
//   p2=&b;
//   a=23;b=27;
//   printf("%d",*p1+*p2);
//   retofighter()urn 0;
  
// }

// return 0;
// }*#include<stdio.h>

////pointer///
//write a c program to find sum of two variable using pointer.......//
// #include<stdio.h>
// int main()
// {
//   int a,b;
//   int *p1,*p2;
//   p1=&a;
//   p2=&b;
//   a=23;b=27;
//   printf("%d",*p1+*p2);
//   return 0;
  
// }

//write a c program to make a function that will scan two variables which it takes as argument........//
// #include<stdio.h>
// void scan(int *p1,int *p2)
// {
//   scanf("%d %d",p1,p2);
  
// }
// int main()
// {
//   int a,b;
//   scan(&a,&b);
//   printf("%d %d",a,b);
//   return 0;
//   }
//make two function one to sacn array andone two print 1d array.....//





//print the string .........
// #include<stdio.h>
// int main()
// {
//   char str[100];
//   scanf("%[^\n]s",str);
//   printf("%s",str);
//   return 0;
// }
//write a c program to take a string from user and reverse it .................//



//write a c program to take a string from user and check it is pallandrome.......//
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    fgets(a, 100, stdin);
    int f = 0;
    int k = strlen(a);

    for (int i = 0; a[i]; i++)
    {
        if (a[i] != a[k - i - 1])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("not a palindrome ");
    }
    else
    {
        printf("palindrome ");
    }

    return 0;
}
/ #include<stdio.h>
// int main()
// {
//   printf("a\n b\n  c\n   d\n");
//   return 0;
// }
// #include<stdio.h>
// int main ()
// {/
//   int a,b,c;
//   a=5;
//   b=5;
//   c=a*b;
//   return 0;
//   }
// #include<stdio.h>
// int main ()
// {
//   int n;
//   scanf("%d",&n);
//   for(int i=n; i>=1;i--)
//     {
//       for(int j=1;j<=i;j++)
//         { printf("*");}
//         printf("\n");

//       }
//   return 0;
//   }
// #include<stdio.h>    
// int main()
// {
//   int a,b,c,d;
//   printf("enter a");
//   scanf("%d",&a);
//   printf("enter b");
//   scanf("%d",&b);
//   c=a+b;
//   d=c%2;
// printf("%d\n%d",c,d);
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++)
//     { for(int j=0;j<=i;j++)
//       printf(" ");
//   for(int j=n;j>=i;j--)
//   printf("* ");
// printf("\n");}
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter the year");
//     scanf("%i",&a);
//     if(a%4==0)
//     if(a%100==0)
//     { if(a%400==0){
//         printf("it is a leap year");}
//         else{
//             printf("not a leap year");
//         }
//     }
//     else{
//         printf("it is a leap year");
        
//     }
//     else{
//         printf(" not a leap year");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a=3,b=4,c=9,d=6,p;
//   p=++a*b-c%4+d;
//   printf("enter the numeber %d",p);
//   return 0;
// }
// #include<stdio.h>
// int main (){
// for(int i=1;i<=14;i=i+2)
// {
//   for(int j=14;j>=i;j--){
//     printf(" ");
  
//   }
//   for(int k=1;k<=i;k++)
//     {printf("* ");}
//   printf("\n");
// }
//   return 0;}
// #include<stdio.h>
// int main()
// {
//   int a;
//   scanf("%d",&a);
//   (a&1)&&printf("odd");
//   (a&1)||printf("even");
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a,b;
//   printf("the number is divide by 65");
//   scanf("%d",&a);
//   b=(a>>6);
//   printf("%d",b);
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a;
//   scanf("%d",&a);
//   for(int i=1;i<=a;i++)
//     {
//       for(int j=1;j<=i;j++)
//         printf("%d",j);
//       printf("\n");
//     }
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
// for(int i=1;i<=n;i++)
//   {
//     for(int j=1;j<=i;j++)
//       if((i+j)%2==0)
//         printf("1");
//     else
//         printf("0");
//     printf("\n");
//   }
//   return 0;
// }


// #include<stdio.h>
// int main()
// {
//   printf("a\n b\n  c\n   d\n");
//   return 0;
// }
// #include<stdio.h>
// int main ()
// {/
//   int a,b,c;
//   a=5;
//   b=5;
//   c=a*b;
//   return 0;
//   }
// #include<stdio.h>
// int main ()
// {
//   int n;
//   scanf("%d",&n);
//   for(int i=n; i>=1;i--)
//     {
//       for(int j=1;j<=i;j++)
//         { printf("*");}
//         printf("\n");

//       }
//   return 0;
//   }
// #include<stdio.h>    
// int main()
// {
//   int a,b,c,d;
//   printf("enter a");
//   scanf("%d",&a);
//   printf("enter b");
//   scanf("%d",&b);
//   c=a+b;
//   d=c%2;
// printf("%d\n%d",c,d);
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++)
//     { for(int j=0;j<=i;j++)
//       printf(" ");
//   for(int j=n;j>=i;j--)
//   printf("* ");
// printf("\n");}
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter the year");
//     scanf("%i",&a);
//     if(a%4==0)
//     if(a%100==0)
//     { if(a%400==0){
//         printf("it is a leap year");}
//         else{
//             printf("not a leap year");
//         }
//     }
//     else{
//         printf("it is a leap year");
        
//     }
//     else{
//         printf(" not a leap year");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a=3,b=4,c=9,d=6,p;
//   p=++a*b-c%4+d;
//   printf("enter the numeber %d",p);
//   return 0;
// }
// #include<stdio.h>
// int main (){
// for(int i=1;i<=14;i=i+2)
// {
//   for(int j=14;j>=i;j--){
//     printf(" ");
  
//   }
//   for(int k=1;k<=i;k++)
//     {printf("* ");}
//   printf("\n");
// }
//   return 0;}
// #include<stdio.h>
// int main()
// {
//   int a;
//   scanf("%d",&a);
//   (a&1)&&printf("odd");
//   (a&1)||printf("even");
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a,b;
//   printf("the number is divide by 65");
//   scanf("%d",&a);
//   b=(a>>6);
//   printf("%d",b);
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a;
//   scanf("%d",&a);
//   for(int i=1;i<=a;i++)
//     {
//       for(int j=1;j<=i;j++)
//         printf("%d",j);
//       printf("\n");
//     }
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
// for(int i=1;i<=n;i++)
//   {
//     for(int j=1;j<=i;j++)
//       if((i+j)%2==0)
//         printf("1");
//     else
//         printf("0");
//     printf("\n");
//   }
//   return 0;
// }

/ #include<stdio.h>
// int main()
// {
//   printf("a\n b\n  c\n   d\n");
//   return 0;
// }
// #include<stdio.h>
// int main ()
// {/
//   int a,b,c;
//   a=5;
//   b=5;
//   c=a*b;
//   return 0;
//   }
// #include<stdio.h>
// int main ()
// {
//   int n;
//   scanf("%d",&n);
//   for(int i=n; i>=1;i--)
//     {
//       for(int j=1;j<=i;j++)
//         { printf("*");}
//         printf("\n");

//       }
//   return 0;
//   }
// #include<stdio.h>    
// int main()
// {
//   int a,b,c,d;
//   printf("enter a");
//   scanf("%d",&a);
//   printf("enter b");
//   scanf("%d",&b);
//   c=a+b;
//   d=c%2;
// printf("%d\n%d",c,d);
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++)
//     { for(int j=0;j<=i;j++)
//       printf(" ");
//   for(int j=n;j>=i;j--)
//   printf("* ");
// printf("\n");}
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter the year");
//     scanf("%i",&a);
//     if(a%4==0)
//     if(a%100==0)
//     { if(a%400==0){
//         printf("it is a leap year");}
//         else{
//             printf("not a leap year");
//         }
//     }
//     else{
//         printf("it is a leap year");
        
//     }
//     else{
//         printf(" not a leap year");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a=3,b=4,c=9,d=6,p;
//   p=++a*b-c%4+d;
//   printf("enter the numeber %d",p);
//   return 0;
// }
// #include<stdio.h>
// int main (){
// for(int i=1;i<=14;i=i+2)
// {
//   for(int j=14;j>=i;j--){
//     printf(" ");
  
//   }
//   for(int k=1;k<=i;k++)
//     {printf("* ");}
//   printf("\n");
// }
//   return 0;}
// #include<stdio.h>
// int main()
// {
//   int a;
//   scanf("%d",&a);
//   (a&1)&&printf("odd");
//   (a&1)||printf("even");
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a,b;
//   printf("the number is divide by 65");
//   scanf("%d",&a);
//   b=(a>>6);
//   printf("%d",b);
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a;
//   scanf("%d",&a);
//   for(int i=1;i<=a;i++)
//     {
//       for(int j=1;j<=i;j++)
//         printf("%d",j);
//       printf("\n");
//     }
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
// for(int i=1;i<=n;i++)
//   {
//     for(int j=1;j<=i;j++)
//       if((i+j)%2==0)
//         printf("1");
//     else
//         printf("0");
//     printf("\n");
//   }
//   return 0;
// }


// #include<stdio.h>
// int main()
// {
//   printf("a\n b\n  c\n   d\n");
//   return 0;
// }
// #include<stdio.h>
// int main ()
// {/
//   int a,b,c;
//   a=5;
//   b=5;
//   c=a*b;
//   return 0;
//   }
// #include<stdio.h>
// int main ()
// {
//   int n;
//   scanf("%d",&n);
//   for(int i=n; i>=1;i--)
//     {
//       for(int j=1;j<=i;j++)
//         { printf("*");}
//         printf("\n");

//       }
//   return 0;
//   }
// #include<stdio.h>    
// int main()
// {
//   int a,b,c,d;
//   printf("enter a");
//   scanf("%d",&a);
//   printf("enter b");
//   scanf("%d",&b);
//   c=a+b;
//   d=c%2;
// printf("%d\n%d",c,d);
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++)
//     { for(int j=0;j<=i;j++)
//       printf(" ");
//   for(int j=n;j>=i;j--)
//   printf("* ");
// printf("\n");}
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter the year");
//     scanf("%i",&a);
//     if(a%4==0)
//     if(a%100==0)
//     { if(a%400==0){
//         printf("it is a leap year");}
//         else{
//             printf("not a leap year");
//         }
//     }
//     else{
//         printf("it is a leap year");
        
//     }
//     else{
//         printf(" not a leap year");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a=3,b=4,c=9,d=6,p;
//   p=++a*b-c%4+d;
//   printf("enter the numeber %d",p);
//   return 0;
// }
// #include<stdio.h>
// int main (){
// for(int i=1;i<=14;i=i+2)
// {
//   for(int j=14;j>=i;j--){
//     printf(" ");
  
//   }
//   for(int k=1;k<=i;k++)
//     {printf("* ");}
//   printf("\n");
// }
//   return 0;}
// #include<stdio.h>
// int main()
// {
//   int a;
//   scanf("%d",&a);
//   (a&1)&&printf("odd");
//   (a&1)||printf("even");
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a,b;
//   printf("the number is divide by 65");
//   scanf("%d",&a);
//   b=(a>>6);
//   printf("%d",b);
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int a;
//   scanf("%d",&a);
//   for(int i=1;i<=a;i++)
//     {
//       for(int j=1;j<=i;j++)
//         printf("%d",j);
//       printf("\n");
//     }
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
// for(int i=1;i<=n;i++)
//   {
//     for(int j=1;j<=i;j++)
//       if((i+j)%2==0)
//         printf("1");
//     else
//         printf("0");
//     printf("\n");
//   }
//   return 0;
// }




