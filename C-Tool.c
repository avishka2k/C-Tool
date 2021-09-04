#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()

 {
  // enter user input of array
     
    /*============================Main Manu==================================*/
    while (1)
{
      
    int manu_no;

    
    printf("\t\n====================MANU====================\n\n");
      
      printf("1. Number sum,Number subtract,number multiplication,Number division\n");
      printf("2. Array sum,Array subtract,Array multiplication,Array division\n");
      printf("3. Birth day calculator\n");
      printf("4. Students Mark(max,min,avg,pass/fail)\n");
      printf("5. Digital clock\n");
      printf("6. STOP Watch\n");
      printf("7. Factorial\n");
      printf("8. Find the number of digits in a value\n");
      printf("\nSwitch Manu: ");
      scanf("%d",&manu_no);

      
 switch (manu_no)
  {
   /*================>>>Number sum,Number subtract,number multiplication,Number division<<<=================*/
        case 1:
          { 
           float no1,no2;
            int ch; 
              printf("\nSum: 1\tSubtract: 2\tMultiplication: 3\tDivision: 4\tAll: 5\n");
                printf("Enter your choice: ");
                  scanf("%d",&ch);
  
                          printf("\nEnter first number: ");
                        scanf("%f",&no1);
                     printf("Enter first number: ");
                   scanf("%f",&no2);
                 printf("\n");
               switch (ch)
               {
                case 5:{
               case 1:
                     printf("Sum: %.2f\n",no1+no2);
                      if(ch!=5)
                         break;
                           case 2:
                            printf("subtract: %.2f\n",no1-no2);
                              if(ch!=5)
                               break;
                               case 3:
                               printf("multiplication: %.2f\n",no1*no2);
                            if(ch!=5)
                         break;
                       case 4:
                    printf("Division: %.2f\n",no1/no2);
                   if(ch!=5)
                 break;
               }
               }
          }break;
           
    /*==========================>>>array sum, subtract, multiplication, division<<==========================*/  
      
        case 2: 
         {
        
 
                    int size;
                    printf("\nEnter array size: ");
                    scanf("%d",&size);

                      float arr1[size],arr2[size],arrsum[size];
                      float arrsub[size],arrmul[size];
                      float arrdiv[size];
                      int i,choice;

                    /*-----------------enter first array----------------*/
                              printf("\nEnter first array:\n");
                                   for(i=0;i<size;i++){
                                     printf("element %d: ",i+1);
                                  scanf("%f",&arr1[i]);
                               }
                    /*---------------enter second array-----------------*/    
                      printf("\nEnter second array:\n");
                      for(i=0;i<size;i++){
                        printf("element %d: ",i+1);
                           scanf("%f",&arr2[i]);
                       }
                            printf("\nSum: 1\tSubtract: 2\tMultiplication: 3\tDivision: 4\tAll: 5\n");
                              printf("Enter your choice (+ - * /): ");
                              scanf("%d",&choice);

                      switch (choice)
                      {
                  /*-------------------------sum-------------------------*/
                        case 5:{
                      case 1: 
                        printf("\nErray sum: ");
                         {
                          for (i = 0; i < size; i++)
                          {
                               arrsum[i]=arr1[i]+arr2[i];  
                               printf("%.0f ",arrsum[i]);
                              }
                          } 
                        if(choice!=5)
                      break;
                  /*---------------------subtract-----------------------*/
                                case 2:
                                  printf("\nErray subtract: ");
                                  {
                                   for (i = 0; i < size; i++)
                                      {
                                           arrsub[i]=arr1[i]-arr2[i];  
                                           printf("%.0f ",arrsub[i]);
                                      }
                                  }
                                  if(choice!=5)
                                break;
                  /*---------------------multiplication-------------------*/
                        case 3:
                        printf("\nErray Multiplication: ");
                        {
                         for (i = 0; i < size; i++)
                            {
                             arrmul[i]=arr1[i]*arr2[i];  
                              printf("%.0f ",arrmul[i]);
                           }
                        }
                      if(choice!=5) 
                        break;
                  /*------------------------divishion---------------------*/
                                case 4:
                                printf("\nErray Division: ");
                                {
                                
                                   for (i = 0; i < size; i++)
                                  {
                                    arrdiv[i]=arr1[i]/arr2[i];  
                                    printf("%.2f ",arrdiv[i]);
                                  }
                                }
                              if(choice!=5)
                                break;
                           } 
                         
                }  

         } break;

    /*=======================================>>>Birth day calculator<<======================================*/ 

        case 3:
          {
               int nday,nmonth,nyear;
               int bday,bmonth,byear;
               int days,monts,years;
               int i;
          
                  printf("Enter date of today(like this YYYY MM DD): ");
                  scanf("%d %d %d",&nyear,&nmonth,&nday);
                  printf("Enter your birth day(like this YYYY MM DD): ");
                  scanf("%d %d %d",&byear,&bmonth,&bday);
                   printf("\n");
             if(bmonth<nmonth)
               {
                     if(bday<nday){
                        monts=nmonth-bmonth;
                          days=nday-bday;
                            years=nyear-byear;    
                             printf("Your Age is %d years %d months %d days",years,monts,days);
                               }
                  
                             if(bday>nday){
                            for(i=0;i<1;i++){
                          nday+=30;
                        nmonth--;
                      monts=nmonth-bmonth;
                    days=nday-bday;
                 years=nyear-byear;
                }                  
             printf("Your Age is %d years %d months %d days",years,monts,days);
                }
              }
            if(bmonth>nmonth)
              {
                     if(bday<nday)
                       for(i=0;i<1;i++){
                         nmonth+=12;
                           nyear--;
                             monts=nmonth-bmonth;
                              days=nday-bday;
                            years=nyear-byear;
                         printf("Your Age is %d years %d months %d days",years,monts,days);
                       }

                 if(bday>nday)
                 for(i=0;i<1;i++){
                   nday+=30;
                     nmonth+=11;
                        nyear--;
                        monts=nmonth-bmonth;
                     days=nday-bday;
                   years=nyear-byear;
                printf("Your Age is %d years %d months %d days",years,monts,days);
                 }

              }
            
          }break;

    /*=============================>>>Students Mark(max,min,avg,pass/fail)<<<===============================*/ 
  
        case 4:
          {
                            float sum=0,avg;
                            int i,no_of_students;
                            int min=0,max=0;
                            int a,b,c,s,f;
                             

                                printf("Enter Number of students: ");
                                scanf("%d",&no_of_students);
                                float mark[no_of_students];
                            { 
                                 printf("\n");
                               for(i=0 ; i < no_of_students ; i++){
                                printf("Student %d mark: ",i+1);
                                    scanf("%f",&mark[i]);
                                      sum=sum+mark[i];                                 
                                          }
                                           for(i=0 ; i < no_of_students ; i++){                                                           
                                             if(mark[i]>max)                    
                                            max=mark[i];
                                          }
                                       min=mark[0];
                                    for(i=0 ; i < no_of_students ; i++){                                                            
                                 if(mark[i]<min)                    
                                    min=mark[i];
                                }
                             avg=sum/no_of_students;
                            printf("\nMinimum mark: %d\n",min);
                         printf("Maximum mark: %d\n",max);
                       printf("The Average mark: %.2f\n",avg);
                            }

                                    a=0;
                                   b=0;
                                  c=0;
                                 s=0;
                                f=0;
                              printf("\n");
                                for(i=0 ; i < no_of_students ; i++){
                                   if(mark[i]>=75)
                                       a++;
                                       else if(mark[i]>=65)
                                         b++;
                                          else if(mark[i]>=55)
                                        c++;
                                       else if(mark[i]>35)
                                     s++;
                                   else
                                       f++;                                 
                                }
                                printf("Number of students with a grade of A: %d\n",a);
                                printf("Number of students with a grade of B: %d\n",b);
                                printf("Number of students with a grade of C: %d\n",c);
                                printf("Number of students with a grade of S: %d\n",s);
                                printf("Number of students with a grade of F: %d\n",f);

          }break;

    /*==========================================>>>Digital clock<<<=========================================*/
          
        case 5:
          {

                   int s,m,h;
                     
                     printf("\nSet Time\n");
                       printf("H: ");
                       scanf("%d",&h);
                       printf("M: ");
                       scanf("%d",&m);
                       printf("S: ");
                       scanf("%d",&s);

                     while (1)
                       {
                         s++;
                          if(s>59){
                            m++;
                             s=0;
                                }
                                if(m>59){
                                  h++;
                                    m=0;
                                   }
                                if(h>=12){
                              h=0;
                            }
                          printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t........................");
                        printf("\n\t\t\t\t\t\t.");
                      printf("\t%.2d:%.2d:%.2d       .",h,m,s);
                     printf("\n\t\t\t\t\t\t........................");

                         Sleep(1000);
                        system("cls");
                       }

          }break;

    /*===========================================>>>Stop Watch<<<===========================================*/

        case 6:
          {

                  int s,m,h;
                      printf("\n");
                       printf("H: ");
                       scanf("%d",&h);
                       printf("M: ");
                       scanf("%d",&m);
                       printf("S: ");
                       scanf("%d",&s);

                     while (1)
                       {
                         s--;
                          if(s==0){
                            m--;
                             s=59;
                              }
                                if(m<0){
                                  h--;
                                  m=59;
                                 }
                               if(h<0){
                             h=0;
                           exit(0);
                          }
                         printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t........................");
                      printf("\n\t\t\t\t\t\t.");
                    printf("\t%.2d:%.2d:%.2d       .",h,m,s);
                  printf("\n\t\t\t\t\t\t........................");

                         Sleep(1000);
                        system("cls");
                       }


          }break;

    /*==========================================>>>Factorial<<<=============================================*/

        case 7:
          {
            float i,number,factorial=1;

              printf("\nEnter number: ");
                  scanf("%f",&number);
 
                    for(i=1;i<=number;i++){
                
                factorial=factorial*i;
              }

                printf("\nNumber of Factorial: %.0f",factorial);
                      
          }break;

    /*=============================>>>Find the number of digits in a value<<<===============================*/
       
       case 8:
          {
                      int num,count=0;

                       printf("\nEnter number: ");
                       scanf("%d",&num);

                          while (num!=0)
                          {
                          num=num/10;
                        count++;
                      }
                      printf("Count of Numbers: %d",count);

                  }break;

    /*===============================>>>Find the number of digits in a value<<<==============================*/
            }
    printf("\n");
      }
 return 0;
}