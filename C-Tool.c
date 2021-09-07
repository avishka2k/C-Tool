#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()

{
  // enter user input of array
     int go;
    /*============================Main Manu==================================*/
    while (1)
{
      
    int manu_no;
   

      printf("\n ====================MANU==================\n");
      printf("|                                           |\n");
      Sleep(200);
      printf("| 1. Calculator                             |\n");
      Sleep(200);
      printf("| 2. Array Calculator                       |\n");
       Sleep(200);
      printf("| 3. Birth day Calculator                   |\n");
       Sleep(200);
      printf("| 4. Number system conversion               |\n");
       Sleep(200);
      printf("| 5. Students Mark(max,min,avg,pass/fail)   |\n");
       Sleep(200);
      printf("| 6. Digital clock                          |\n");
       Sleep(200);
      printf("| 7. STOP Watch                             |\n");
       Sleep(200);
      printf("| 8. Factorial                              |\n");
       Sleep(200);
      printf("| 9. Find the number of digits in a value   |\n");
       Sleep(200);
      /*-------------Add New Tool-------------------------------

                    printf(" ");

      --------------------------------------------------------*/
      printf("| 10.Info                                   |\n");
       Sleep(200);
      printf("| 11.EXIT                                   |\n");
       Sleep(200);
      printf("|                                           |\n");
      printf(" ===========================================\n");
      printf("\nWhat do you want?: ");
      scanf("%d",&manu_no);

      
 switch (manu_no)
  {
   /*================>>>Number sum,Number subtract,number multiplication,Number division<<<=================*/

        case 1:
          { 
           printf("\n--------------------------------------Calculator--------------------------------------\n\n");

            float no1,no2;           
            char go,ch;

            while (1)
            {
               
              printf("Sum: 1\tSubtract: 2\tMultiplication: 3\tDivision: 4\tAll: 5\n");
              printf("Enter your choice: ");
             scanf("%s",&ch);
  
                          printf("\nEnter first number: ");
                          scanf("%f",&no1);
                          printf("Enter first number: ");
                          scanf("%f",&no2);
                          printf("\n");

               switch (ch)
               {
                case '5':{
                  case '1':
                     printf("Sum: %.2f\n",no1+no2);
                      if(ch!='5')
                        break;
                  case '2':
                     printf("subtract: %.2f\n",no1-no2);
                      if(ch!='5')
                        break;
                  case '3':
                    printf("multiplication: %.2f\n",no1*no2);
                      if(ch!='5')
                        break;
                  case '4':
                    printf("Division: %.2f\n",no1/no2);
                      if(ch!='5')
                        break;
                        }
            
           
               }
                printf("\nBack(Y/N): ");
                scanf("%s",&go);
                if(go=='y')
                break;
                           
                 
            
            }
          }break;
           
    /*==========================>>>array sum, subtract, multiplication, division<<==========================*/  
      
        case 2: 
         {
        
             printf("\n--------------------------------------Array calculator--------------------------------------\n\n");
             while (1)
                       {
                    int size;
                    printf("Enter array size: ");
                    scanf("%d",&size);
                  
                      float arr1[size],arr2[size],arrsum[size];
                      float arrsub[size],arrmul[size];
                      float arrdiv[size];
                      int i,choice;
                      char go;

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
                printf("\n\nBack(Y/N): ");
                scanf("%s",&go);
                if(go=='y')
                break;
                       } 

         } break;

    /*=======================================>>>Birth day calculator<<======================================*/ 

        case 3:
          {
               int nday,nmonth,nyear;
               int bday,bmonth,byear;
               int days,monts,years;
               int i;
               char go;
                printf("\n--------------------------------------Birth day calculator--------------------------------------\n\n");
                while (1)
                
               {
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
               printf("\n\nBack(Y/N): ");
                scanf("%s",&go);
                if(go=='y')
                break;
          } 
          }break;
    
    /*===================================>>>Number system conversion<<<=====================================*/

        case 4:
          {   

            printf("\n--------------------------------------Number system conversion--------------------------------------\n\n");
            char go;
              while (1)
              {
                 
                     int conversion;
                     int dec;
                       printf("\n-------------------------"); 
                       printf("\n  1. Decimal To Octal");
                       printf("\n  2. Octal To Decimal");
                       printf("\n  3. Decimal To Hexadecimal");
                       printf("\n  4. Hexadecimal To Decimal");
                       printf("\n  5. Exit");
                          printf("\n\nWhat do you want? ");
                          scanf("%d",&conversion);
                            
                     switch(conversion)
                          {
                          case 1:
                               printf("\nEnter Decimal number: ");
                               scanf("%d",&dec);
                               printf("\nThe Octal value: %o\n",dec);
                            break;                                                 
                          case 2:
                               printf("\nEnter Octal number: ");
                               scanf("%o",&dec);
                               printf("\nThe Decimal value: %d\n",dec);
                            break;
                          case 3:
                               printf("\nEnter Decimal number: ");
                               scanf("%d",&dec);
                               printf("\nThe Hexadicimal value: %x\n",dec);
                            break;  
                          case 4:  
                               printf("\nEnter Hexadicimal number: ");
                               scanf("%x",&dec);
                               printf("\nThe Decimal value: %d\n",dec);
                            break;
                          case 5:
                              exit(0);
                            break;
                          }

                 printf("\n\nBack(Y/N): ");
                scanf("%s",&go);
                if(go=='y')
                break;        

              }       


          }break;

    /*=============================>>>Students Mark(max,min,avg,pass/fail)<<<===============================*/ 
  
        case 5:
          {
                            float sum,avg;
                            int i,no_of_students;
                            int min,max;
                            int a,b,c,s,f;
                             char go;
                  printf("\n--------------------------------------Students Mark--------------------------------------\n");
                  while(1)
                  {
                               
                           min=0,max=0,sum=0;

                                printf("\nEnter Number of students: ");
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


                     printf("\n\nBack(Y/N): ");
                      scanf("%s",&go);
                      if(go=='y')
                       break;
               
                  }

          }break;

    /*==========================================>>>Digital clock<<<=========================================*/
          
        case 6:
          {

                   int s,m,h;
                     printf("\n--------------------------------------Digital clock--------------------------------------\n");
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

        case 7:
          {
                printf("\n--------------------------------------Stop Watch--------------------------------------\n");
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

        case 8:
          {
            float i,number,factorial;
              printf("\n--------------------------------------Factorial--------------------------------------\n");
               while (1)
               {
                factorial=1;
              printf("\nEnter number: ");
                  scanf("%f",&number);
 
                    for(i=1;i<=number;i++){
                
                factorial=factorial*i;
              }

                printf("\nNumber of Factorial: %.0f",factorial);

                printf("\n\nBack(Y/N): ");
                scanf("%s",&go);
                if(go=='y')
                break;
               }       
          }break;

    /*=============================>>>Find the number of digits in a value<<<===============================*/
       
       case 9:
          {
                      int num,count;
                       printf("\n--------------------------Find the number of digits in a value--------------------------\n");
                       while (1)
                       {
                       count=0;
                       printf("\nEnter number: ");
                       scanf("%d",&num);

                          while (num!=0)
                          {
                          num=num/10;
                        count++;
                      }
                      printf("Count of Numbers: %d",count);

                         printf("\n\nBack(Y/N): ");
                         scanf("%s",&go);
                         if(go=='y')
                          break;

                       }
          }break;
    /*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Reserved for friends<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/

                        //Write the code in this section according to your idea

    /*=============================================>>>Info<<<===============================================*/
        case 10:
          {
            char go;

                printf("\n------------------------------------Info------------------------------------\n\n");
                printf("Hi there!\n I am A Prabath. This was written just for practical training and experience\n");
                printf("with a group of friends doing a project. So there may be bugs here.The steps \n");
                printf("here can  be short. So in your  opinion you can  fix the bugs  in it of  add \n");
                printf("somthing new to the manu. Details about the project are given below.\n");
                printf("\n  #Project Link: https://github.com/avishka2k/C-Tool");
                printf("\n\n  If you found this important, please folllow my social media.\n");
                printf("\n\tMy GitHub Profile: https://github.com/avishka2k");
                printf("\n\tTwitter: https://twitter.com/AvishkaPrabath6");
                printf("\n\tlinkdin: https://www.linkedin.com/in/a-prabath-9b3267213\n");

              printf("\nBack(Y/N): ");
                scanf("%s",&go);
                if(go=='y')
                break;


           }break;
               
    /*=============================================>>>EXIT<<<===============================================*/
       case 11:
          {
            system("cls");
            printf("\n\tHave a nice Day!\n\n");
            exit(0);
          }break;
    
       default :
          {
        
          int yn;
            printf("\nSorry, nothing about the number you entered. if possible you can add activation.\n");
            printf("Do you want to make any changes or add any thing to the manu? Check Info (Y: 1/N: 2): ");
            scanf("%d",&yn);
            system("cls");
            if(yn==2)
              { 
                printf("\n\tHave a nice Day!\n\n");
                exit(0);
              }
            else if(yn==1) 
                  {
                printf("\n------------------------------------Info------------------------------------\n\n");
                printf("Hi there!\n I am A Prabath. This was written just for practical training and experience\n");
                printf("with a group of friends doing a project. So there may be bugs here.The steps \n");
                printf("here can  be short. So in your  opinion you can  fix the bugs  in it of  add \n");
                printf("somthing new to the manu. Details about the project are given below.\n");
                printf("\n  #Project Link: https://github.com/avishka2k/C-Tool");
                printf("\n\n  If you found this important, please folllow my social media.\n");
                printf("\n\tMy GitHub Profile: https://github.com/avishka2k");
                printf("\n\tTwitter: https://twitter.com/AvishkaPrabath6");
                printf("\n\tlinkdin: https://www.linkedin.com/in/a-prabath-9b3267213\n");
                exit(0);
                    }

                 }break;
       
             }
  
             while (1)
             {
             printf("\nGo to manu(Y/N): ");
             scanf("%s",&go);
             if(go=='y'){
             break;
             } 
             if(go=='n')
              exit(0);            
             else
              printf("\nInvalide option\n");
             }
       printf("\n");
       }
 return 0;
}