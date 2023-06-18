#include <stdio.h>
void BasicQue();
void CLanQue();
void GeneralQue();
void Science();
int main()
{
    int ans,bb,i,choice;
    int j=0,k=0,l=0;
    char g,A=0,a=0,B=0, C=0;

     printf("\n Choose qustion type : \n");
     printf("     1) Basic qustions\n     2) C language qustions \n     3) General Knowledge \n     4) science qustions \n \n \n ");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if(choice==1)
    printf("qustion type is Basic quedtions \n");

    else if (choice==2)
    printf("qustion type : C language \n");
    else if (choice==3)
    printf("qustion type : General Knowledge  \n");
    else if (choice==4)
    printf("qustion type : science \n");

    else
    printf("wrong choice");
    printf("************************************************");
    switch(choice)
    {
        case 1:
            BasicQue();
            break;
        case 2:
            CLanQue();
            break;
        case 3:
            GeneralQue();
            break;
        case 4:
            Science();
            break;
        default :
            printf("wrong Iput :(");
    }
  
    return 0;
}


void BasicQue(){
   
    int A=0,a=0;
    char g,B=0, C=0;

     
    
        printf("\n1: Enter name of Developer\n a) shivam \t B) shivansh \t c) megha \t D) naina \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='a')
         {
            printf("ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong \n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n2: Enter cod of nitRA\n a) 801 \t B) 802 \t c) 803 \t D) 805 \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='b')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n3:  who is HOD of 1st year\n a) Parta BAshu \t B) RC Yadav \t c) Saurbh jain \t D) Meghana tyagi \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='d')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n4: who is lab assistant in Elecrical/ Electronics lab: \n a) Dharmendra sir  \t B) mohan sir  \t c) RC yadav\t D) basu sir \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='a')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong\n");
        a=a+1;}
    
    printf(" ------------==================================------------------\n ------------==================================------------------\n");
    printf("     correct answers is : %d\n", A);
    printf("     wrong answers is : %d", a);
     printf("\n ------------==================================------------------\n------------==================================------------------\n");
}

void CLanQue(){
     int A=0,a=0;
    char g,B=0, C=0;

     
    
        printf("\n1: What is c ? \n a) High level language\t B) Generel-purpose language \t c) Middle-level programming language \t D) All \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='d')
         {
            printf("ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong 'All'\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n2: what is compiler\n a) convert high to low level language  \t B) change low to high level language \t c) Direct execute \t D) NA \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='a')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n3: what is  Array\n a)  User can't declara array \t B) It can't  store multiple values \t c) it is data Type \t D) It is a variable that can store multiple values. \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='d')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n4: What is Function in 'C' \n a) user can't write multiple functions  \t B) Group of statements \t c) user can't declara function\t D) can't return value \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='b')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong\n");
        a=a+1;}
    
    printf(" ------------==================================------------------\n ------------==================================------------------\n");
    printf("     correct answers is : %d\n", A);
    printf("     wrong answers is : %d", a);
     printf("\n ------------==================================------------------\n------------==================================------------------\n");
}

void GeneralQue(){
     int A=0,a=0;
    char g,B=0, C=0;

     
    
        printf("\n1: What is the name of the biggest technology company in South Korea? \n a) Lenovo\t B) SONY \t c) Samsung \t D) APPLE \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='c')
         {
            printf("ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong 'Samsung'\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n2: who is prime minister of india Today \n a) Mr. Aditya natha Yogi  \t B) Mr. Rahul Gandhi \t c) Mr. Mulayam Yadav \t D) Mr. Narendra Modi \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='d')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong 'Mr. Narendra Modi'\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n3: Which State celebrates the famous 'Bihu Festival'?\n a)  TamilNadu \t B) GOA \t c) Assam \t D) Jaipur \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='c')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong 'Assam'\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n4: Who was the first Asian to win the Nobel Prize? \n a) Bankim Chandra Chatterjee \t B)  Rabindranath Tagore \t c) Munshi Premcahnd\t D) Lal Bahadur Shastri \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='b')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong 'Rabindranath Tagore' \n");
        a=a+1;}
    
    printf(" ------------==================================------------------\n ------------==================================------------------\n");
    printf("     correct answers is : %d\n", A);
    printf("     wrong answers is : %d", a);
     printf("\n ------------==================================------------------\n------------==================================------------------\n");
}


void Science(){
    int A=0,a=0;
    char g,B=0, C=0;

     
    
        printf("\n1:  What is the chemical symbol for silver?\n a) H \t B) Ag \t c) Li \t D) Pb\n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='b')
         {
            printf("ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong 'Ag'\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n2: What is the nearest planet to the sun? \n a) venus \t B) Jupiter \t c)  Mercury \t D) Mars \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='c')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong 'murcury'\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n3: What is the rarest blood type?\n a)  AB-\t B) B+\t c) A- \t D) A+ \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='a')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong 'AB-'\n");
        a=a+1;}
        printf("**********************************************************************");
        printf("\n4: What planet in our solar system has the most gravity? \n  a) Earth \t B) Jupiter \t c)  Mercury \t D) Mars \n \n");
         printf("Ans: ");
         scanf("%s", &g);
         if(g=='b')
         {
            printf(" ans is right\n");
            A=A+1;

         }
         else
        {printf(" ans is wrong 'Jupiter' \n");
        a=a+1;}
    
    printf(" ------------==================================------------------\n ------------==================================------------------\n");
    printf("     correct answers is : %d\n", A);
    printf("     wrong answers is : %d", a);
     printf("\n ------------==================================------------------\n------------==================================------------------\n");

}