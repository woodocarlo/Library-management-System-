#include <stdio.h>
#include <string.h>
int main()
{   
    int switch_case,requested_books_number;
    char book_request[50]; //upgrade this to structure later // 
    home:       //label 1//
    printf("\t\t\t\t\t\t\t LIBRARY PORTAL \t\t\t\n\n");
    printf(" \t\t\t\t\tLogin\t\t\t\t press 1\n \t\t\t\t\tRules Of The Library\t\t press 2\n \t\t\t\t\tNew Member Signup\t\t press 3\n \t\t\t\t\tLost and Found\t\t\t press 4\n \t\t\t\t\tFeedback \t\t\t press 5\n \t\t\t\t\tAbout The Program\t\t press 6\n");
    scanf("%d",&switch_case);
    switch(switch_case)
        
                 {     
                    case 1:   //login page//  
                            {
                                int login,match_pass_customer,match_username_customer,match_pass_administration,match_username_administration;
                                char customer_username[30];
                                char customer_pass[15];
                                char customer_password_original[]="googlegmail";
                                char customer_username_original[]="Agr04062004";
                                char administration_username[30];
                                char administration_pass[15];
                                char administraion_username_original[]="yas04092003";
                                char administration_password_orignal[]="P@ssw0rd!!";
                                printf("\t\t\t\t\t\t\t Login Page \t\t\t\n\n");
                                printf(" Administration login\t press 1\n Customer login\t\t press 2\n");
                            
                                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t Press 0 to return to previous page\n");
                                 scanf("%d",&login);
                                 
                                switch(login)
                                {
                                                    case 1:
                                                         {   
                                                                 printf("\n                                   ADMINISTRATION LOGIN PAGE\n");
                                                                 printf("\n                                Please enter your login credentials\n\n");
                                                                 login_administraion_re:
                                                                 printf("                                       USERNAME: ");
                                                                 scanf("%s",administration_username);
                                                                 printf("\n                                       PASSWORD: ");
                                                                 scanf("%s",administration_pass);
                                                                 match_pass_administration= strcmp(administration_pass,administration_password_orignal);
                                                                 match_username_administration= strcmp(administraion_username_original,administration_username);
                                                                 if(match_pass_administration==0 && match_username_administration==0)
                                                                 {
                                                                    int administration_login_input,return_costs;
                                                                    printf("                                \n\nLOGIN SUCCESSFULL !!!\n");
                                                                    printf("                                    \n WELCOME TO ADMINISTRATION PAGE\n\n\n");
                                                                   administration_page_main: // FURTHER CODE TO BE INSERTED A SWITCH CASE AND PRINTF S //
                                                                    printf("                        Customer Details          Press 1\n");
                                                                    printf("                        Requested Books           Press 2\n");
                                                                    printf("                        Availabality of books     Press 3\n");
                                                                    printf("                        Manage Memberships        Press 4\n");
                                                                    printf("                                                                To Return To The Home Page Press 0\n");
                                                                    switch(administration_login_input)
                                                                    {
                                                                        case 1:
                                                                        {
                                                                            printf("\n\n                            CUSTOMER DETAILS");
                                                                            //enter the code to ask the name of the customer and the display its record//

                                                                            printf("\n\n                                            Press 0 to return to the previous page");
                                                                            error_customer_details:
                                                                            scanf("%d",&return_costs);
                                                                            if(return_costs==0)
                                                                            {
                                                                                goto administration_page_main;
                                                                            }
                                                                            else
                                                                            {
                                                                                printf("                            ERROR !!! INVALID INPUT");
                                                                                goto error_customer_details;
                                                                            }

                                                                        }
                                                                        case 2:
                                                                        {
                                                                            printf("                            REQUESTED BOOKS");
                                                                            // write code to print the books input in the request portal and run a loop to write the serial no. of the books
                                                                             printf("\n\n                                            Press 0 to return to the previous page");
                                                                             error_requested_books:
                                                                            error_customer_details:
                                                                            scanf("%d",&return_costs);
                                                                            if(return_costs==0)
                                                                            {
                                                                                goto administration_page_main;
                                                                            }
                                                                            else
                                                                            {
                                                                                printf("                            ERROR !!! INVALID INPUT");
                                                                                goto error_requested_books;
                                                                            }
                                                                        
                                                                        }
                                                                        case 3:
                                                                        {
                                                                            int book_database_input;
                                                                            printf("\n\n                            BOOKS DATABASE");
                                                                            printf("\n\n                      Issued books            Press 1");
                                                                            printf("\n                       Available Books         Press 2");
                                                                            printf("\n                                              Press 0 to return to the previous page\n");
                                                                            scanf("%d",&book_database_input);
                                                                            switch(book_database_input)
                                                                            {
                                                                                case 1:
                                                                                {
                                                                                    printf("\n                                    Issued Books\n");
                                                                                    // write a program to print the books which have been issued//
                                                                                    
                                                                                }
                                                                            }
                                                                            

                                                                        }
                                                                    }

                                                                    

                                                                 }
                                                                 else
                                                                 {
                                                                    printf("\n\n                                  INCORRECT USERNAME OR PASSWORD");
                                                                    goto  login_administraion_re;
                                                                 }
                                                                    
                                                                 }
                                                                 
                                                                
                                                                 break;
                                                    case 2:
                                                         {       int customer_login_cont,book_count_record,book_count,input_login_portal;
                                                         customer_portal: //label to return //
                                                                 printf("\n\t\t\t\t\t\t\t\tCUSTOMER LOGIN PAGE\n\t\t\t\t\t\t\tlogin with your username and password\n\n\n Note: case sensitive");
                                                                 printf("\n\t\t\t\t\t Username:  ");
                                                                 scanf("%s",&customer_username);
                                                                 printf("\t\t\t\t\t Password:  ");
                                                                 scanf("%s",&customer_pass);
                                                                 match_pass_customer=strcmp(customer_pass,customer_password_original);
                                                                 match_username_customer=strcmp(customer_username,customer_username_original);
                                                                 if(match_pass_customer ==0 && match_username_customer ==0) //se if the password and the username is correct or not//
                                                                 { // code for customer portal//
                                                                 // add the ampersand in the next printf to print the name of the user//
                                                                  
                                                                    printf("\n\n\n                            WELCOME !!!");
                                                                    printf(" \n\n                           Issued books              Press 1");
                                                                    printf(" \n                          Suggested authors         Press 2");
                                                                    printf(" \n                          Book Search               Press 3");
                                                                    printf(" \n                             Book Request Portal       press 4\n");
                                                                    printf(" \n\n                                                                                     To return to the home page press 0\n");
                                                                   scanf("%d",&customer_login_cont);
                                                         
                                                                   switch(customer_login_cont)
                                                                   {
                                                                                              case 1:
                                                                                                   {
                                                                                                         printf("\n\t\t\t\t\t\t\t ISSUED BOOKS");
                                                                                                   printf("s.no. \t\t\t\tName of the book \t\t\t Genre\t\t\t Author's name\t\t\t Book serial no.");
                                                                                                   book_count_record;
                                                                                                   while(book_count_record<=book_count)
                                                                                                   {
                                                                                                                                printf("\n%d \t\t\t (string name here) \t\t\t (string name here) \t\t\t (string name) \t\t\t (string name here)",&book_count);
                                                                                                                                book_count_record++;
                                                                                                                                }
                                                                                                   printf("\n\n\t\t\t\t\t\t\t Press 0 to return to previous page");
                                                                                                   scanf("%d",&input_login_portal);
                                                                                                   if(input_login_portal==0)
                                                                                                   {
                                                                                                                            goto customer_portal;
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                                printf("\n\t\t\t\t\t\tERROR!!! INVALID INPUT");
                                                                                                                            }
                                                                                                                            
                                                                                                   }
                                                                                              case 2:
                                                                                                   {
                                                                                                                                printf("\n\t\t\t\t\t\t\t SUGGESTED AUTHORS");
                                                                                                                                // code to choose any random authors from the genre of which the user has issued the books//
                                                                                                                                                              
                                                                                                   printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Press 0 to return to previous page" );
                                                                                                   scanf("%d",&input_login_portal);
                                                                                                   if(input_login_portal==0)
                                                                                                   {
                                                                                                                                goto customer_portal;
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                                printf("\n\t\t\t\t\t\tERROR!!! INVALID INPUT");
                                                                                                                                }
                                                                                                                              
                                                                                                   }
                                                                                              case 3: //book search//
                                                                                              { 
                                                                                                 int input_book_search;
                                                                                                printf("                             FIND YOUR BOOK\n\n");
                                                                                                printf("               To search by:");
                                                                                                printf("                   The name of author         Press 1\n");
                                                                                                printf("                   The name of book           Press 2\n");
                                                                                                printf("                   Genre                      Press 3\n");
                                                                                                printf("\n                                                          To return to login page    press 0\n");
                                                                                                scanf("%d",input_book_search);
                                                                                        switch(input_book_search)
                                                                                        {
                                                                                                    case 1:
                                                                                                {
                                                                                                    char book_search_author_name[30];
                                                                                                    printf("/n/nPlease enter the name of the author: ");
                                                                                                    scanf("%s",&book_search_author_name);
                                                                                                    // code to print the books by the name of the author- --- logic can be to run a loop and check if
                                                                                                    //for the string compare if any matches are matched then the name of the book should be printed here.
                                                                                                    // do remember to make it case insensitive.
                                                                                                    break;
                                                                                                 }
                                                                                                    case 2:
                                                                                                    {
                                                                                                        char book_search_book_name[30];
                                                                                                        printf("/n/nPlease enter the name of the Book: ");
                                                                                                         gets("book_search_book_name");
                                                                                                         break;
                                                                                                    }
                                                                                                  case 3:
                                                                                                  {
                                                                                                    char book_search_book_genre[30];
                                                                                                        printf("/n/nPlease enter the genre: ");
                                                                                                         gets("book_search_book_genre");
                                                                                                         break;
                                                                                                         }
                                                                                        }
                                                                                              }
                                                                                        
                                                                                                case 4: //book request//
                                                                                                 {   
                                                                                                     int input_login_portal_from_bookrequest;
                                                                                                 printf("                            BOOK REQUEST\n\n");
                                                                                                 printf("Enter the name of the book: ");
                                                                                                 gets(book_request);
                                                                                                 printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Press 0 to return to previous page" );
                                                                                                   scanf("%d",&input_login_portal_from_bookrequest);
                                                                                                   if(input_login_portal_from_bookrequest==0)
                                                                                                   {
                                                                                                                            goto customer_portal;
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                                printf("\n\t\t\t\t\t\tERROR!!! INVALID INPUT");
                                                                                                                            }
                                                                                                 }
                                                                                                 case 0:
                                                                                                 {
                                                                                                     goto home;
                                                                                                 }
                                                                                                 default:
                                                           
                                                                                                 {
                                                                                                  printf("\t\t\t ERROR \t\t\t\n \t\tPlease enter a valid choice");
                                                                                                 goto customer_portal;
                                                                                                }
                                                                   }
                                                                   }
                                                                   else{
                                                                    printf("                                    INCORRECT USERNAME OR PASSWOR\n");
                                                                    goto customer_portal;
                                                                   }
                                                                                                  }
                                                                                                 
                                                                                         
                                                    
                                                           case 0: 
                                                           {
                                                               goto home;
                                                            }
                                }
                                                           
                                                           { printf("\t\t\t ERROR \t\t\t\n \t\tPlease enter a valid choice");
                                                            goto customer_portal;
                                                           }
                                }
                               
                            

    
                        case 2:   //rules of the libray//
                             { 
                                  int key;
                                  printf("\t\t\t\t\t\t\t General Rules \t\t\t\n\n");
                                  printf(" 1.Smoking, eating, sleeping and talking loudly are strictly prohibited in the library\n 2.Mobiles should be kept on silent\n 3.Library membership card is non-transferable.\n 4.Strict silence, decorum and discipline must be maintained in the library.\n 5. No library material can be taken out of the library without  permission\n 6.Readers should not mark, underline, dog-ear, write, tear pages or otherwise damage the library documents.\n 7. Replacing the books on shelves is not encouraged as it may get misplaced.\n 8. Any  one  who  violates  the  rules  and  regulations  of  the  library  would  be  liable  to  lose  the  privilege  of  library membership and may be debarred from using the library facilities.");
                                  printf("\n\n\n\t\t\t\t\t\tPress 0 to return to the home page\n");
                                  scan_input:    //label//
                                  scanf("%d",&key); //to input the return statement//
                                  switch(key)
                                  {        case 0:
                                           goto home;
                                           }
                                           
                                  {
                                      printf("\t\t\t ERROR\n \t\t  INVALID INPUT");
                                      goto scan_input;
                                      }
                                      }
                       case 3: //new member sign up//
                                {
                                     int confirm,compare,length,quit,random;
                                     char name[25];
                                     char dob[10];
                                     char address[30];
                                     char pass[15];
                                     char re_pass[15];
                                     char halfname[25];
                                     char copydob[10];
                                     
                                     
                                     signup:
                                     printf("\t\t\t\t\t\t\tNew Member Sign Up\n");
                                     printf("Please fill the undergiven details\n\n");  //input with string ill add after i study about them//
                                     printf("Full Name:\n");
                                     gets(name);
                                     printf("Date of Birth(dd/mm/yyyy): ");
                                     gets(dob);
                                      
                                     printf("Address: ");
                                     gets(address);
                                     password:
                                     printf("\ncreate password: ");
                                     gets(pass);
                                     printf("re-enter your password: ");
                                     gets(re_pass);
                                     compare=strcmp(pass,re_pass);
                                     length=strlen(pass);
                                     
                                      if(compare==0)   //checking if the 2 passwords entered are same or not and warning if the password is too weak//
                                     {
                                         if(length<9)
                                         {
                                             printf("\n\t\t\t\t\tPASSWORD ENTERED IS TOO WEAK!!\n\t\t\tPLEASE ENTER A PASSWORD OF ATLEAST 9 CHARACTERS");
                                             goto password;
                                         }
                                        else
                                         {
                                         goto endstep;
                                         }
                                     }
                                      else 
                                      {
                                          printf("\n\t\t\t ERROR\n \t\t Password entered does not match\n");
                                          goto password;
                                          }  
                                          endstep:
                                     printf("\t\t\t\t\t\tConfirm And Continue\t press 1\n\t\t\t\t\t\tReset Choices\t\t press 2\n\t\t\t  NOTE: If you continue then you wont be able to change the details again\n");
                                      printf("\t\t\t\t\t\t press 0 to return to the home page\n");
                                     scanf("%d",&confirm);
                                     strcpy(copydob,dob);
                                     strncpy(halfname,name,3);
                                     strcat(halfname,copydob);
                                     switch(confirm)
                                     {
                                                    case 1:
                                                    {
                                                         printf("congrats your account has been successfully made your ID number is %s",halfname);
                                                         break;//enter the name and the dob in the username after the string is created//
                                                         }
                                                    case 2:
                                                         {
                                                             goto signup;
                                                             break;
                                                         }
                                                         
                                                   
                                                    case 0:
                                                         { 
                                                                          goto home;
                                                                            }
                                                    default:
                                                            {
                                                                                printf("\t\t\t ERROR \t\t\t\t\n \t\tPLEASE ENTER A VALID CHOICE ");
                                                                                 printf("\t\t\t\t\t\t press 0 to return to the home page\n");
                                                    break;
                                                    }
                                     }
                                                    end1:
                                                    printf("\t\t\t\t\t\n Press 0 to return to the home page");
                                                    scanf("%d",quit);
                                                    if(quit=0)
                                                                         {
                                                        goto home;
                                                    }
                                                    else
                                                    {
                                                        printf("\n\t\t\t\t\t ERROR!!! UNKNOWN INPUT");
                                                        goto end1;
                                                        
                                                    }
                                                        
                                                    }
                                     
                       case 4:   //lost and found //
                             {   
                                 
                                 printf("\t\t\t\t\t\t\tLost and Found\n\n");
                                 // print with string..... user will input in lost items and it should be visible on the lost items list //
                                 int items;
                                 printf("Found a lost item? Report here.\t\t press1\n");
                                 printf("\t\t\t\t\t\t\n Press 0 to return to the home page\n");
                                 scanf("%d",&items);
                                 
                                 switch(items)        
                                 {
                                              case 1:
                                                 {
                                                       printf("this is a random entry");
                                                 }
                                              case 0:
                                                   {
                                                       goto home;
                                                       }
                                                       }
                             }
                                                       
                       case 5: //feedback
                       {    
                           int return_;
                            printf("\t\t\t\t\t\t\t Feedback\n");
                            scanf("");//input of string 
                            printf("\n\t\t\t\t\t\t press 0 to return to the home page\n");
                            scanf("%d",&return_);
                            if(return_=0)
                            {
                                        goto home;
                                        }
                           else
                           { printf("\t\t\t ERROR \t\t\t\t\n \t\t PLEASE ENTER A VALID CHOICE");
                                                    } 
                                                    }                        
                       
                       case 6: // about the program
                       {
                            printf("\t\t\t\t\t\t\t About\n");
                            int input_number;
                            // information of the code 
                            printf(" to know about the developer\t\t\t press 1");
                            printf("\n login page code \t\t\t\t press 2\n");
                            printf(" administration login page code and logic \t press 21");
                            printf("\n customer login page code and logic \t\t press 22");
                            printf("\n new member signup page code and logic \t\t press 3"); 
                            printf("\n lost and found page code and logic\t\t press 4");
                            printf("\n feedback page code and logic \t\t\t press 5");
                            printf("\n the rules of library page code and logic \t press 6\n");
                            scanf("%d",&input_number);
                            switch(input_number)
                            {
                                                case 1:
                                                     {
                                                     printf(""); // code to be inserted once the whole program is created 
                                                     break;
                                                     }
                                                case 2:
                                                     {
                                                           printf("");
                                                           break;
                                                           }
                                                case 21:
                                                     { 
                                                         printf("");
                                                         break;
                                                         }
                                               case 22:
                                               {
                                                    printf("");
                                                    break;
                                                    }
                                               case 3:
                                                    {
                                                          printf("");
                                                          break;
                                                          }
                                               case 4:
                                                    {
                                                          printf("");
                                                          break;
                                                          }
                                               case 5:
                                                    {
                                                          printf("");
                                                          break;
                                                          }
                                               case 6:
                                                    {
                                                          printf("");
                                                          break;
                                                          }
                                               case 0:
                                                    {
                                                          goto home;
                                                          }
                                               default:
                                                       {
                                                        printf("\t\t\t ERROR \t\t\t\n \t\tPlease enter a valid choice");
                                                       }
                                                       }
                       
                       }}}
    
                                                 

