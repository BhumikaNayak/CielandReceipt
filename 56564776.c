//Ciel and Receipt codechef problem
#include<stdio.h>
int main()
{
    int T;//number of testcases;
    scanf("%d",&T);
    //declaration of variables
    int number;
    int step;
    int currentpow;
    
    while(T--)
    {
     step=0;
     scanf("%d",&number);
     for( int i=11;i>=0;i-- )//using for loop
     {
      currentpow=pow(2,i);
      {
        while(number >= currentpow)//using while loop
        {                          //logic
            number=number-currentpow;
            step++;
        }
      }    
     }
      printf("%d\n",step);
    }
    
    return 0;
}
//Code By Bhumika Nayak