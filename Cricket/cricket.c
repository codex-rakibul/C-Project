#include<stdio.h>
#include<string.h>
#include<time.h>
#include <ctype.h>

void Start_Game();
void Batting();
void Balling();
void Both();
void About();

void Batting_over();
void Balling_over1();
void Both_over1();

/* **************************************** */
/*               Home Section               */
/* **************************************** */
int main(){
    int n;
    printf("\n\n\n");
    printf("\n\t\t======================================================================================================================");
    printf("\n\t\t|                                                                                                                    |");
    printf("\n\t\t|                                                   CRICKET GAME                                                     |");
    printf("\n\t\t|                                                                                                                    |");
    printf("\n\t\t======================================================================================================================");
    printf("\n\t\t----------------------------------------------------------------------------------------------------------------------");
    printf("\n\t\t|                                            |                                                                       |");
    printf("\n\t\t|                                            |                   **************************************              |");
    printf("\n\t\t|                                            |                  *                                      *             |");
    printf("\n\t\t|                                            |                *     +                                    *           |");
    printf("\n\t\t|      -------------------------             |               *                                             *         |");
    printf("\n\t\t|      |      1. Start Game    |             |              *                +   +          +               *        |");
    printf("\n\t\t|      -------------------------             |             *                      __                         *       |");
    printf("\n\t\t|                                            |            *              +   ----| *|----  (-)                *      |");
    printf("\n\t\t|      -------------------------             |            *                      |  |                    +    *      |");
    printf("\n\t\t|      |      2. About !       |             |            *              +       |  |                         *      |");
    printf("\n\t\t|      -------------------------             |            *                      |  |        +                *      |");
    printf("\n\t\t|                                            |            *                  ----|__|*---                     *      |");
    printf("\n\t\t|      -------------------------             |            *                 +     (-)     +                   *      |");
    printf("\n\t\t|      |      0. Exit          |             |             *                                                 *       |");
    printf("\n\t\t|      -------------------------             |              *                     +                         *        |");
    printf("\n\t\t|                                            |               *                                             *         |");
    printf("\n\t\t|                                            |                *                                           *          |");
    printf("\n\t\t|                                            |                  *                                       *            |");
    printf("\n\t\t|                                            |                    *************************************              |");
    printf("\n\t\t|                                            |                                                                       |");
    printf("\n\t\t----------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\tChoice Your Options[1,2,0] : ");
    scanf("%d",&n);
    switch(n){
        case 1:
            system("cls");
            Start_Game();
            break;

        case 2:
            system("cls");
            About();
            break;

        case 0:
            system("cls");
            printf("\n\n\t\t----------------------------------------");
            printf("\n\t\t|  Thank You Playing For Cricket Games | ");
            printf("\n\t\t|--------------------------------------|");
            getch();
            break;

        default:
            system("cls");
            printf("\n\t\t\t-----------------------------");
            printf("\n\t\t\t You Entered Wrong Choice...");
            printf("\n\t\t\t     Please Try Again ");
            printf("\n\t\t\t-----------------------------\n\n");
            break;
    }
}
/* **************************************** */
/*               Menu Section               */
/* **************************************** */
void Start_Game(){
    int n;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                             CRICKET GAME                        *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1]. Batting Challenge          |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [2]. Balling Challenge          |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [3]. Both                       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [4]. Back      | [0]. Exit      |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\n\t\t\t\tChoice Your Options[1,2,3,4,0] : ");
    scanf("%d",&n);
    switch(n){
        case 1:
            system("cls");
            Batting();
            break;

        case 2:
            system("cls");
            Balling();
            break;

        case 3:
            system("cls");
            Both();
            break;

         case 4:
            system("cls");
            main();
            break;

        case 0:
            system("cls");
            printf("\n\n\t\t----------------------------------------");
            printf("\n\t\t|  Thank You Playing For Cricket Games | ");
            printf("\n\t\t|--------------------------------------|");
            getch();
            break;

        default:
            system("cls");
            printf("\n\t\t\t-----------------------------");
            printf("\n\t\t\t You Entered Wrong Choice...");
            printf("\n\t\t\t     Please Try Again ");
            printf("\n\t\t\t-----------------------------\n\n");
            Start_Game();
            break;
    }
}
/* **************************************** */
/*               About Section              */
/* **************************************** */
void About(){
    int n;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t**                                                               **\n");
    printf("\t\t\t\t**                           CRICKET GAME                        **\n");
    printf("\t\t\t\t**                                                               **\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t**            Developer : MD. RAKIBUL ISLAM                      **\n");
    printf("\t\t\t\t**            Build     : 06-01-2018                             **\n");
    printf("\t\t\t\t**            email     : md.rakibulislam_1@yahoo.com            **\n");
    printf("\t\t\t\t*******************************************************************\n\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t**                [1]. Back      |      [0]. Exit                **\n");
    printf("\t\t\t\t*******************************************************************\n");
    printf("\n\t\t\t\tChoice Your Options[1,0] : ");
    scanf("%d",&n);
       switch(n){
        case 1:
            system("cls");
            main();
            break;

        case 0:
            system("cls");
            printf("\n\n\t\t\t\t----------------------------------------");
            printf("\n\t\t\t\t|  Thank You Playing For Cricket Games | ");
            printf("\n\t\t\t\t|--------------------------------------|");
            getch();
            break;

      default:
            system("cls");
            printf("\n\t\t\t\t-----------------------------");
            printf("\n\t\t\t\t You Entered Wrong Choice...");
            printf("\n\t\t\t\t     Please Try Again ");
            printf("\n\t\t\t\t-----------------------------\n\n");
            About();
            break;
    }
}
/* **************************************** */
/*               Batting Part                */
/* **************************************** */
void Batting()
{
    int n;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                         Batting Challenge                       *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1]. PowerPlay                  |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [2]. 2 Overs                    |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [3]. 3 Overs                    |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [4]. 5 Overs                    |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [5]. Back                       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [6]. Home       | [0]. Exit     |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\n\t\t\t\tChoice Your Options[1,2,3,4,5,6,0] : ");
    scanf("%d",&n);
    switch(n){
        case 1:
            system("cls");
            Batting_over(6);
            break;

        case 2:
            system("cls");
            Batting_over(12);
            break;

        case 3:
            system("cls");
            Batting_over(18);
            break;

        case 4:
            system("cls");
            Batting_over(30);
            break;

        case 5:
            system("cls");
            Start_Game();
            break;

        case 6:
            system("cls");
            main();
            break;

        case 0:
            system("cls");
            printf("\n\n\t\t----------------------------------------");
            printf("\n\t\t|  Thank You Playing For Cricket Games | ");
            printf("\n\t\t|--------------------------------------|");
            getch();
            break;

        default:
            system("cls");
            printf("\n\t\t\t-----------------------------");
            printf("\n\t\t\t You Entered Wrong Choice...");
            printf("\n\t\t\t     Please Try Again ");
            printf("\n\t\t\t-----------------------------\n\n");
            Batting();
            break;
    }
}
/* **************************************** */
/*              Batting Part                */
/* **************************************** */
void Batting_over(int balls){
    int i,j,k,over=0,over1,r,n,n1,n2=0,R,count=0,sum=0,b1=0,b2,b3,b4,b5,b6,s2,s3,s4,s5,s6;
    int a1,a2,a3,a4,a5,a6;
    int r1,r2,r3,r4,r5,r6;
    char T1[10],T2[10];
    char Match1[10],Match2[10];
    printf("\n\t\t========================================================================================\n");
    printf("\t\t|                Your Team                   |             Opposition Team             |\n");
    printf("\t\t|--------------------------------------------|-----------------------------------------|\n");
    printf("\t\t| [1].Afg           | [2].Aus                | [1].Afg            | [2].Aus            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [3].Ban           | [4].Eng                | [3].Ban            | [4].Eng            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [5].Ind           | [6].New                | [5].Ind            | [6].New            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [7].Pak           | [8].RSA                | [7].Pak            | [8].RSA            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [9].Sri           | [10].Win               | [9].Sri            | [10].Win           |\n");
    printf("\t\t========================================================================================\n");
    printf("\n\t\tEnter Your Team Name(Ex:-Ban) : ");
    scanf("%s",&T1);
    printf("\n\t\tEnter Opposition Team name(Ex:-Ind) : ");
    scanf("%s",&T2);
    system("cls");
    printf("\n\t\t*******************************************************************\n");
    printf("\t\t*                                                                 *\n");
    printf("\t\t*                            %s VS %s                           *\n",T1,T2);
    printf("\t\t*                                                                 *\n");
    printf("\t\t*******************************************************************\n\n");
    srand(time(NULL));
    if(balls<=6){
        r=rand()%10+8;
        R=r+1;
    }else if(balls>6 && balls<=12){
        r=rand()%10+30;
        R=r+1;
    }else if(balls>12 && balls<=18){
        r=rand()%10+50;
        R=r+1;
    }else if(balls>18 && balls<=30){
        r=rand()%10+60;
        R=r+1;
    }
    over1=balls/6;
    printf("\n\t\t-------------------------------------------------------------------\n");
    printf("\t\t                        Team %s Score = %d Runs                     ",T2,r);
    printf("\n\t\t-------------------------------------------------------------------");
    printf("\n\t\t                       %s Need %d Runs in %d Over                 ",T1,R,over1);
    printf("\n\t\t-------------------------------------------------------------------\n\n");
    for(i=1;i<=balls;i++){
        printf("\n\t\t%d Ball (Hit The Ball). . .\n\t\t",i);
        system("pause");
        a1=rand()%10;
        if(a1==0){
            r1=0;
        }
        else if(a1==1){
            r1=2;
        }
        else if(a1==2){
            r1=4;
        }
        else if(a1==3){
            n1=6;
        }
        else if(a1==4){
            r1=1;
        }
        else if(a1==5){
            r1=4;
        }
        else if(a1==6){
            printf("\n\t\t. . .Wide Ball. . . ");
            r1=1;
            b1=b1+r1;
            printf("\n\t\t%s Total = %d runs\n\n",T1,b1);
            printf("\n\t\tAgain Hit The %d Ball. . .\n\t\t",i);
            system("pause");
            srand(time(NULL));
            r1=(rand()%4);
        }
        else if(a1==7){
            r1=4;
        }
        else if(a1==8){
            r1=0;
            count++;
            if(balls<6){
                if(count>1){
                    printf("\n\t\t**********************");
                    printf("\n\t\t  You lost all wicket ");
                    printf("\n\t\t**********************");
                    break;
                }
            }
            printf("\n\t\t. . .Wicket. . .Next Batsman. . .");
        }
        else if(a1==9){
            printf("\n\t\t. . .No Ball. . . ");
            r1=1;
            b1=b1+r1;
            printf("\n\t\t%s Total = %d runs\n\n",T1,b1);
            printf("\n\t\t. . .Free Hit Ball. . .");
            printf("\n\t\tAgain Hit The %d Ball. . .\n\t\t",i);
            system("pause");
            srand(time(NULL));
            r1=rand()%4;
        }
        printf("\n\t\t%d Ball : %d run",i,r1);
        b1=b1+r1;
        printf("\n\t\t%s Total %d runs\n\n",T1,b1);
        if(b1>=R){
            printf("\n\n\n\n\n\n");
            printf("\n\t\t*************************************");
            printf("\n\t\t          %s Won The Match ",T1);
            printf("\n\t\t*************************************\n\n\n");
            printf("\t\t---------------------------------------------------\n");
            printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
            printf("\t\t---------------------------------------------------\n");
            int pl;
            printf("\t\tChoice Your Options[1,2,0] : ");
            scanf("%d",&pl);
            switch(pl){
                case 0:
                    system("cls");
                    printf("\n\n\t\t----------------------------------------");
                    printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                    printf("\n\t\t|--------------------------------------|");
                    getch();
                    break;

                case 1:
                    system("cls");
                    main();
                    break;

                case 2:
                    system("cls");
                    Batting_over(balls);
                    break;

                default:
                    system("cls");
                    printf("\n\t\t-----------------------------");
                    printf("\n\t\t You Entered Wrong Choice...");
                    printf("\n\t\t    Please Try Again ");
                    printf("\n\t\t-----------------------------\n\n");
                    system("pause");
                    main();
                    break;
            }
            break;
        }
        if(balls==12){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 6 balls",T1,R-b1);
                printf("\n\t\t*************************************\n\n");
            }
        }
        if(balls==18){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 12 balls",T1,R-b1);
                printf("\n\t\t*************************************\n\n");
            }else if(i==12){
                printf("\n\t\t*************************************");
                printf("\n\t\t             2nd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 6 balls",T1,R-b1);
                printf("\n\t\t*************************************\n\n");
            }
        }
        if(balls==30){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 24 balls",T1,R-b1);
                printf("\n\t\t*************************************\n\n");
             }else if(i==12){
                printf("\n\t\t*************************************");
                printf("\n\t\t             2nd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 18 balls",T1,R-b1);
                printf("\n\t\t*************************************\n\n");
             }else if(i==18){
                printf("\n\t\t*************************************");
                printf("\n\t\t             3rd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 12 balls",T1,R-b1);
                printf("\n\t\t*************************************\n\n");
             }else if(i==24){
                printf("\n\t\t*************************************");
                printf("\n\t\t             4th over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 6 balls",T1,R-b1);;
                printf("\n\t\t*************************************\n\n");
              }
         }
    }
    printf("\n\n\n\n\n\n");
    while(b1==r){
          printf("\n\t\t*************************************");
          printf("\n\t\t              Drawn The Match ");
          printf("\n\t\t*************************************\n\n\n");
           printf("\t\t---------------------------------------------------\n");
          printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
          printf("\t\t---------------------------------------------------\n");
           int pl;
           printf("\t\tChoice Your Options[1,2,0] : ");
           scanf("%d",&pl);
           switch(pl){
                case 1:
                    system("cls");
                    main();
                    break;

                case 2:
                    system("cls");
                    Batting_over(balls);
                    break;

                case 0:
                    system("cls");
                    printf("\n\n\t\t----------------------------------------");
                    printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                    printf("\n\t\t|--------------------------------------|");
                    getch();
                    break;

                default:
                    system("cls");
                    printf("\n\t\t-----------------------------");
                    printf("\n\t\t You Entered Wrong Choice...");
                    printf("\n\t\t    Please Try Again ");
                    printf("\n\t\t-----------------------------\n\n");
                    system("pause");
                    main();
                    break;
            }
        break;
    }
    while(b1<R){
        printf("\n\t\t*************************************");
        printf("\n\t\t            %s Lost The Match ",T1);
        printf("\n\t\t*************************************\n\n\n");
        printf("\t\t---------------------------------------------------\n");
        printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
        printf("\t\t---------------------------------------------------\n");
        int pl;
        printf("\t\tChoice Your Options[1,2,0] : ");
        scanf("%d",&pl);
        switch(pl){
            case 1:
                system("cls");
                main();
                break;

            case 2:
                system("cls");
                Batting_over(balls);
                break;


            case 0:
                system("cls");
                printf("\n\n\t\t----------------------------------------");
                printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                printf("\n\t\t|--------------------------------------|");
                getch();
                break;



            default:
                system("cls");
                printf("\n\t\t-----------------------------");
                printf("\n\t\t You Entered Wrong Choice...");
                printf("\n\t\t    Please Try Again ");
                printf("\n\t\t-----------------------------\n\n");
                system("pause");
                main();
                break;
        }
        break;
    }
}
/* **************************************** */
/*              Balling Part                */
/* **************************************** */
void Balling(){
    int n;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                          Balling Challenge                      *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1]. PowerPlay                  |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [2]. 2 Overs                    |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [3]. 3 Overs                    |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [4]. 5 Overs                    |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [5]. Back                       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [6]. Home       | [0]. Exit     |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\n\t\t\t\tChoice Your Options[1,2,3,4,5,6,0] : ");
    scanf("%d",&n);
       switch(n){
        case 1:
            system("cls");
            Balling_over1(6);
            break;

        case 2:
            system("cls");
            Balling_over1(12);
            break;

        case 3:
            system("cls");
            Balling_over1(18);
            break;

        case 4:
            system("cls");
            Balling_over1(30);
            break;

        case 5:
            system("cls");
            Start_Game();
            break;

        case 6:
            system("cls");
            main();
            break;


        case 0:
            system("cls");
            printf("\n\n\t\t----------------------------------------");
            printf("\n\t\t|  Thank You Playing For Cricket Games | ");
            printf("\n\t\t|--------------------------------------|");
            getch();
            break;

        default:
            system("cls");
            printf("\n\t\t\t-----------------------------");
            printf("\n\t\t\t You Entered Wrong Choice...");
            printf("\n\t\t\t     Please Try Again ");
            printf("\n\t\t\t-----------------------------\n\n");
            Balling();
            break;
    }
}


void Balling_over1(int balls2){
    int i,j,k,Target3,over=0,over1,r,n,n1,n2=0,R,count=0,sum=0,b1=0,b2=0,b3=0;
    int a1,a2;
    int r1,r2;
    char T1[10],T2[10];
    printf("\n\t\t========================================================================================\n");
    printf("\t\t|                Your Team                   |             Opposition Team             |\n");
    printf("\t\t|--------------------------------------------|-----------------------------------------|\n");
    printf("\t\t| [1].Afg           | [2].Aus                | [1].Afg            | [2].Aus            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [3].Ban           | [4].Eng                | [3].Ban            | [4].Eng            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [5].Ind           | [6].New                | [5].Ind            | [6].New            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [7].Pak           | [8].RSA                | [7].Pak            | [8].RSA            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [9].Sri           | [10].Win               | [9].Sri            | [10].Win           |\n");
    printf("\t\t========================================================================================\n");
    printf("\n\t\tEnter Your Team Name(Ex:-Ban) : ");
    scanf("%s",&T1);
    printf("\n\t\tEnter Opposition Team name(Ex:-Ind) : ");
    scanf("%s",&T2);
    system("cls");
    printf("\n\t\t*******************************************************************\n");
    printf("\t\t*                                                                 *\n");
    printf("\t\t*                            %s VS %s                           *\n",T1,T2);
    printf("\t\t*                                                                 *\n");
    printf("\t\t*******************************************************************\n\n");
    srand(time(NULL));
    if(balls2<=6){
        r=rand()%10+12;
        R=r+1;
    }else if(balls2>6 && balls2<=12){
        r=rand()%10+30;
        R=r+1;
    }else if(balls2>12 && balls2<=18){
        r=rand()%10+60;
        R=r+1;
    }else if(balls2>18 && balls2<=30){
        r=rand()%10+70;
        R=r+1;
    }
    over1=balls2/6;
    printf("\n\t\t-------------------------------------------------------------------\n");
    printf("\t\t                      Your Team %s Score = %d Runs                ",T1,r);
    printf("\n\t\t-------------------------------------------------------------------");
    printf("\n\t\t                     %s Need %d Runs in %d Over            ",T2,R,over1);
    printf("\n\t\t-------------------------------------------------------------------\n\n");
    for(i=1;i<=balls2;i++){
        printf("\n\t\t%d Ball (Through The Ball). . .\n\t\t",i);
        system("pause");
        a2=rand()%10;

        if(a2==0){
            r2=0;
        }
        else if(a2==1){
            r2=2;
        }
        else if(a2==2){
            r2=4;
        }
        else if(a2==3){
            r2=6;
        }
        else if(a2==4){
            r2=1;
        }
        else if(a2==5){
            r2=4;
        }
        else if(a2==6){
            printf("\n\t\t. . .Wide Ball. . . ");
            r2=1;
            b1=b1+r2;
            printf("\n\t\t%s Total = %d runs\n\n",T2,b1);
            printf("\n\t\tAgain Through %d Ball. . .\n\t\t",i);
            system("pause");
            srand(time(NULL));
            r2=(rand()%6);
        }
        else if(a2==7){
            r2=4;
        }
        else if(a2==8){
            r2=0;
            count++;
            if(balls2<6){
                if(count>1){
                    printf("\n\t\t**********************");
                    printf("\n\t\t   lost all wicket ");
                    printf("\n\t\t**********************");
                    break;
                }
            }
            printf("\n\t\t. . .Wicket. . .Next Batsman. . .");
        }
        else if(a2==9){
            printf("\n\t\t. . .No Ball. . . ");
            r2=1;
            b1=b1+r2;
            printf("\n\t\t%s Total = %d runs\n\n",T2,b1);
            printf("\n\t\t. . .Free Hit Ball. . . ");
            printf("\n\t\tAgain Through %d Ball. . .\n\t\t",i);
            system("pause");
            srand(time(NULL));
            r2=rand()%6;
        }
        printf("\n\t\t%d Ball : %d run",i,r2);
        b1=b1+r2;
        printf("\n\t\t%s Total %d runs\n\n",T2,b1);
        if(b1>=R){
            printf("\n\n\n\n\n\n");
            printf("\n\t\t***********************************************");
            printf("\n\t\t                %s Lost The Match ",T1);
            printf("\n\t\t**********************************************\n\n\n");
            printf("\t\t---------------------------------------------------\n");
            printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
            printf("\t\t---------------------------------------------------\n");
            int pl;
            printf("\t\tChoice Your Options[1,2,0] : ");
            scanf("%d",&pl);
            switch(pl){
                case 1:
                    system("cls");
                    main();
                    break;

                case 2:
                    system("cls");
                    Balling_over1(balls2);
                    break;

                case 0:
                    system("cls");
                    printf("\n\n\t\t----------------------------------------");
                    printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                    printf("\n\t\t|--------------------------------------|");
                    getch();
                    break;

                default:
                    system("cls");
                    printf("\n\t\t-----------------------------");
                    printf("\n\t\t You Entered Wrong Choice...");
                    printf("\n\t\t    Please Try Again ");
                    printf("\n\t\t-----------------------------\n\n");
                    system("pause");
                    main();
                    break;
            }
            break;
        }
        if(balls2==12){
            if(i==6){
                  printf("\n\t\t*************************************");
                  printf("\n\t\t             1st over End            ");
                  printf("\n\t\t-------------------------------------");
                  printf("\n\t\t            Total %d runs",b1);
                  printf("\n\t\t    %s need %d runs of 6 balls",T2,R-b1);
                  printf("\n\t\t*************************************\n\n");
            }
        }
        if(balls2==18){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 12 balls",T2,R-b1);
                printf("\n\t\t*************************************\n\n");
            }else if(i==12){
                printf("\n\t\t*************************************");
                printf("\n\t\t             2nd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 6 balls",T2,R-b1);
                printf("\n\t\t*************************************\n\n");
            }
        }
        if(balls2==30){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 24 balls",T2,R-b1);
                printf("\n\t\t*************************************\n\n");
             }else if(i==12){
                printf("\n\t\t*************************************");
                printf("\n\t\t             2nd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 18 balls",T2,R-b1);
                printf("\n\t\t*************************************\n\n");
             }else if(i==18){
                printf("\n\t\t*************************************");
                printf("\n\t\t             3rd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 12 balls",T2,R-b1);
                printf("\n\t\t*************************************\n\n");
             }else if(i==24){
                printf("\n\t\t*************************************");
                printf("\n\t\t             4th over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t    %s need %d runs of 6 balls",T2,R-b1);;
                printf("\n\t\t*************************************\n\n");
              }
         }
    }
    printf("\n\n\n\n\n\n");
    while(b1==r){
            printf("\n\t\t*************************************");
            printf("\n\t\t            Drawn The Match ");
            printf("\n\t\t*************************************\n\n\n");
            printf("\t\t---------------------------------------------------\n");
            printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
            printf("\t\t---------------------------------------------------\n");
            int pl;
            printf("\t\tChoice Your Options[1,2,0] : ");
            scanf("%d",&pl);
            switch(pl){
                case 0:
                    system("cls");
                    printf("\n\n\t\t----------------------------------------");
                    printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                    printf("\n\t\t|--------------------------------------|");
                    getch();
                    break;

                case 1:
                    system("cls");
                    main();
                    break;

                case 2:
                    system("cls");
                    Balling_over1(balls2);
                    break;

                default:
                    system("cls");
                    printf("\n\t\t-----------------------------");
                    printf("\n\t\t You Entered Wrong Choice...");
                    printf("\n\t\t    Please Try Again ");
                    printf("\n\t\t-----------------------------\n\n");
                    system("pause");
                    main();
                    break;
            }
            break;
    }
    while(b1<R){
        printf("\n\t\t*************************************");
        printf("\n\t\t            %s Won The Match ",T1);
        printf("\n\t\t*************************************\n\n\n");
        printf("\t\t---------------------------------------------------\n");
        printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
        printf("\t\t---------------------------------------------------\n");
        int pl;
        printf("\t\tChoice Your Options[1,2,0] : ");
        scanf("%d",&pl);
        switch(pl){
            case 0:
                system("cls");
                printf("\n\n\t\t----------------------------------------");
                printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                printf("\n\t\t|--------------------------------------|");
                getch();
                break;

            case 1:
                system("cls");
                main();
                break;

            case 2:
                system("cls");
                Balling_over1(balls2);
                break;
            
            default:
                system("cls");
                printf("\n\t\t-----------------------------");
                printf("\n\t\t You Entered Wrong Choice...");
                printf("\n\t\t    Please Try Again ");
                printf("\n\t\t-----------------------------\n\n");
                system("pause");
                main();
                break;
        }
        break;
    }
}
/* **************************************** */
/*                 Both Part                */
/* **************************************** */
void Both(){
    int n;
    printf("\n\t\t\t\t*******************************************************************\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*                              Both Play                          *\n");
    printf("\t\t\t\t*                                                                 *\n");
    printf("\t\t\t\t*******************************************************************\n\n");

    printf("\t\t\t\t-----------------------------------\n");
    printf("\t\t\t\t| [1]. PowerPlay                  |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [2]. 2 Overs                    |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [3]. 3 Overs                    |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [4]. 5 Overs                    |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [5]. Back                       |\n");
    printf("\t\t\t\t|---------------------------------|\n");
    printf("\t\t\t\t| [6]. Home       | [0]. Exit     |\n");
    printf("\t\t\t\t-----------------------------------\n");
    printf("\n\t\t\t\t Choice Your Options[1,2,3,4,5,6,0] : ");
    scanf("%d",&n);
    switch(n){
        case 0:
            system("cls");
            printf("\n\n\t\t----------------------------------------");
            printf("\n\t\t|  Thank You Playing For Cricket Games | ");
            printf("\n\t\t|--------------------------------------|");
            getch();
            break;

        case 1:
            system("cls");
            Both_over1(6);
            break;

        case 2:
            system("cls");
            Both_over1(12);
            break;

        case 3:
            system("cls");
            Both_over1(18);
            break;

        case 4:
            system("cls");
            Both_over1(30);
            break;

        case 5:
            system("cls");
            Start_Game();
            break;

        case 6:
            system("cls");
            main();
            break;

        default:
            system("cls");
            printf("\n\t\t\t-----------------------------");
            printf("\n\t\t\t You Entered Wrong Choice...");
            printf("\n\t\t\t     Please Try Again ");
            printf("\n\t\t\t-----------------------------\n\n");
            Both();
            break;
    }
}
void Both_over1(int balls){
    int toss,toss2,choose,Target,Target3,i,j,k,over=0,over1=0,r,n,m,n1,n2=0,R,count=0,sum=0,b1=0,b2=0,b3=0,b4=0,b5,b6,s2,s3,s4,s5,s6;
    int a1,a2,a3,a4,a5,a6;
    int r1,r2,r3,r4,r5,r6;
    char T1[10],T2[10];
    char Match1[10],Match2[10];
    printf("\n\t\t========================================================================================\n");
    printf("\t\t|                Your Team                   |             Opposition Team             |\n");
    printf("\t\t|--------------------------------------------|-----------------------------------------|\n");
    printf("\t\t| [1].Afg           | [2].Aus                | [1].Afg            | [2].Aus            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [3].Ban           | [4].Eng                | [3].Ban            | [4].Eng            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [5].Ind           | [6].New                | [5].Ind            | [6].New            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [7].Pak           | [8].RSA                | [7].Pak            | [8].RSA            |\n");
    printf("\t\t|-------------------|------------------------|--------------------|--------------------|\n");
    printf("\t\t| [9].Sri           | [10].Win               | [9].Sri            | [10].Win           |\n");
    printf("\t\t========================================================================================\n");
    printf("\n\t\tEnter Your Team Name(Ex:-Abc) : ");
    scanf("%s",&T1);
    printf("\n\t\tEnter Opposition Team name(Ex:-Abc) : ");
    scanf("%s",&T2);
    printf("\n\t\t*******************************************************************\n");
    printf("\t\t*                                                                 *\n");
    printf("\t\t*                            %s VS %s                           *\n",T1,T2);
    printf("\t\t*                                                                 *\n");
    printf("\t\t*******************************************************************\n");
    printf("\t\t*                          Toss the Coin                          *\n");
    printf("\t\t*******************************************************************\n");
    printf("\t\t*               1. Head          |       2. Teal                  *\n");
    printf("\t\t*******************************************************************\n");
    printf("\t\tHead or Teal(type: 1 or 2) : ");
    scanf("%d",&toss);
    printf("\n\t\tThrough the coin. . .\n\t\t");
    system("pause");
    printf("\n\t\t*******************************************************************\n");
    printf("\t\t*                        You Won The Toss                         *\n");
    printf("\t\t*******************************************************************\n");
    printf("\t\t*******************************************************************\n");
    printf("\t\t*         1. Batting First       |      2. Balling First          *\n");
    printf("\t\t*******************************************************************\n");
    printf("\t\tChoose (type: 1 or 2) : ");
    scanf("%d",&choose);
    system("cls");
    if(choose==1){
        printf("\t\t*******************************************************************\n");
        printf("\t\t                   Your Team '%s' Batting First               \n",T1);
        printf("\t\t*******************************************************************\n\n");
        printf("\t\tLets Play. . .\n\t\t");
        system("pause");
        system("cls");

        for(i=1;i<=balls;i++){
        printf("\n\t\t%d Ball (Hit The Ball). . .\n\t\t",i);
        system("pause");
        a1=rand()%10;

        if(a1==0){
            r1=0;
        }
        else if(a1==1){
            r1=2;
        }
        else if(a1==2){
            r1=4;
        }
        else if(a1==3){
            n1=6;
        }
        else if(a1==4){
            r1=1;
        }
        else if(a1==5){
            r1=4;
        }
        else if(a1==6){
            printf("\n\t\tWide Ball. . . ");
            r1=1;
            b1=b1+r1;
            printf("\n\t\t'%s' Total %d runs\n",T1,b1);
            printf("\n\t\tAgain Hit The %d Ball. . .\n\t\t",i);
            system("pause");
            srand(time(NULL));
            r1=(rand()%4);
        }
        else if(a1==7){
            r1=4;
        }
        else if(a1==8){
            r1=0;
            count++;
            if(balls<6){
                if(count>1){
                    printf("\n\t\t**********************");
                    printf("\n\t\t  You lost all wicket ");
                    printf("\n\t\t**********************");
                    break;
                }
            }
            printf("\n\t\t. . .Wicket. . .Next Batsman. . .");
        }
        else if(a1==9){
            printf("\n\t\tNo Ball. . . ");
            r1=1;
            b1=b1+r1;
            printf("\n\t\t'%s' Total %d runs\n",T1,b1);
            printf("\n\t\tFree Hit Ball. . .");
            printf("\n\t\tAgain Hit The %d Ball. . .\n\t\t",i);
            system("pause");
            srand(time(NULL));
            r1=rand()%4;
        }
        printf("\n\t\t%d Ball : %d run",i,r1);
        b1=b1+r1;
        printf("\n\t\t'%s' Total %d runs\n\n",T1,b1);
        if(balls==12){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t*************************************\n\n");
            }
        }
        if(balls==18){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t*************************************\n\n");
            }else if(i==12){
                printf("\n\t\t*************************************");
                printf("\n\t\t             2nd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t*************************************\n\n");
             }
        }
        if(balls==30){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t*************************************\n\n");
            }else if(i==12){
                printf("\n\t\t*************************************");
                printf("\n\t\t             2nd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t*************************************\n\n");
            }else if(i==18){
                printf("\n\t\t*************************************");
                printf("\n\t\t             3rd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t*************************************\n\n");
            }else if(i==24){
                printf("\n\t\t*************************************");
                printf("\n\t\t             4th over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b1);
                printf("\n\t\t*************************************\n\n");
            }
        }
    }
    over1=balls/6;
    Target=b1+1;
    printf("\n\t\t-------------------------------------------------------------------\n");
    printf("\t\t                      Your Team '%s' Score %d Runs                ",T1,b1);
    printf("\n\t\t-------------------------------------------------------------------");
    printf("\n\t\t                     '%s' Need %d Runs in %d Over            ",T2,Target,over1);
    printf("\n\t\t-------------------------------------------------------------------\n\n");
    printf("\t\tInnings Break. . .\n\t\t");
    system("pause");
    system("cls");
    printf("\t\t*******************************************************************\n");
    printf("\t\t                      Now Your Team '%s' Balling               \n",T1);
    printf("\t\t                     '%s' Need %d Runs in %d Over            ",T2,Target,over1);
    printf("\n\t\t*******************************************************************\n\n");
    for(i=1;i<=balls;i++){
        printf("\n\t\t%d Ball (Through The Ball). . .\n\t\t",i);
        system("pause");
        a2=rand()%10;
        if(a2==0){
            r2=0;
        }
        else if(a2==1){
            r2=2;
        }
        else if(a2==2){
            r2=4;
        }
        else if(a2==3){
            r2=6;
        }
        else if(a2==4){
            r2=1;
        }
        else if(a2==5){
            r2=4;
        }
        else if(a2==6){
            printf("\n\t\tWide Ball. . .");
            r2=1;
            b2=b2+r2;
            printf("\n\t\t'%s' Total %d runs\n\n",T2,b2);
            printf("\n\t\tAgain Through %d Ball. . .\n\t\t",i);
            system("pause");
            srand(time(NULL));
            r2=(rand()%4);
        }
        else if(a2==7){
            r2=4;
        }
        else if(a2==8){
            r2=0;
            count++;
            if(balls<6){
                if(count>1){
                    printf("\n\t\t**********************");
                    printf("\n\t\t   lost all wicket ");
                    printf("\n\t\t**********************");
                    break;
                }
            }
            printf("\n\t\t. . .Wicket. . .Next Batsman. . .");
        }
        else if(a2==9){
            printf("\n\t\tNo Ball. . . ");
            r2=1;
            b2=b2+r2;
            printf("\n\t\t'%s' Total %d runs\n\n",T2,b2);
            printf("\n\t\tFree Hit Ball. . .");
            printf("\n\t\tAgain Through %d Ball. . .\n\t\t",i);
            system("pause");
            srand(time(NULL));
            r2=rand()%4;
        }
        printf("\n\t\t%d Ball : %d run",i,r2);
        b2=b2+r2;
        printf("\n\t\t '%s' Total %d runs\n\n",T2,b2);
        if(b2>=Target){
            printf("\n\n\n\n\n\n");
            printf("\n\t\t**********************************************");
            printf("\n\t\t             '%s' Won The Match ",T2);
            printf("\n\t\t----------------------------------------------");
            printf("\n\t\t        Your team '%s' Lost The Match ",T1);
            printf("\n\t\t**********************************************\n\n\n");
            printf("\t\t---------------------------------------------------\n");
            printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
            printf("\t\t---------------------------------------------------\n");
            int pl;
            printf("\t\tChoice Your Options[1,2,0] : ");
            scanf("%d",&pl);
            switch(pl){
                case 0:
                    system("cls");
                    printf("\n\n\t\t----------------------------------------");
                    printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                    printf("\n\t\t|--------------------------------------|");
                    getch();
                    break;

                case 1:
                    system("cls");
                    main();
                    break;

                case 2:
                    system("cls");
                    Both_over1(balls);
                    break;

                default:
                    system("cls");
                    printf("\n\t\t-----------------------------");
                    printf("\n\t\t You Entered Wrong Choice...");
                    printf("\n\t\t    Please Try Again ");
                    printf("\n\t\t-----------------------------\n\n");
                    system("pause");
                    main();
                    break;
            }
            break;
        }
        if(balls==12){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b2);
                printf("\n\t\t    '%s' need %d runs of 6 balls",T2,Target-b2);
                printf("\n\t\t*************************************\n\n");
            }
        }
        if(balls==18){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b2);
                printf("\n\t\t    '%s' need %d runs of 12 balls",T2,Target-b2);
                printf("\n\t\t*************************************\n\n");
            }else if(i==12){
                printf("\n\t\t*************************************");
                printf("\n\t\t             2nd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b2);
                printf("\n\t\t    '%s' need %d runs of 6 balls",T2,Target-b2);
                printf("\n\t\t*************************************\n\n");
            }
        }
        if(balls==30){
            if(i==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b2);
                printf("\n\t\t    '%s' need %d runs of 24 balls",T2,Target-b2);
                printf("\n\t\t*************************************\n\n");
            }else if(i==12){
                printf("\n\t\t*************************************");
                printf("\n\t\t             2nd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b2);
                printf("\n\t\t    '%s' need %d runs of 18 balls",T2,Target-b2);
                printf("\n\t\t*************************************\n\n");
            }else if(i==18){
                printf("\n\t\t*************************************");
                printf("\n\t\t             3rd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b2);
                printf("\n\t\t    '%s' need %d runs of 12 balls",T2,Target-b2);
                printf("\n\t\t*************************************\n\n");
            }else if(i==24){
                printf("\n\t\t*************************************");
                printf("\n\t\t             4th over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b2);
                printf("\n\t\t    '%s' need %d runs of 6 balls",T2,Target-b2);
                printf("\n\t\t*************************************\n\n");
            }
        }
    }
    printf("\n\n\n\n\n\n");
    while(b2==b1){
        printf("\n\t\t*************************************");
        printf("\n\t\t            Drawn The Match ");
        printf("\n\t\t*************************************\n\n\n\n");
        printf("\t\t---------------------------------------------------\n");
        printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
        printf("\t\t---------------------------------------------------\n");
        int pl;
        printf("\t\tChoice Your Options[1,2,0] : ");
        scanf("%d",&pl);
        switch(pl){
            case 0:
                system("cls");
                printf("\n\n\t\t----------------------------------------");
                printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                printf("\n\t\t|--------------------------------------|");
                getch();
                break;

            case 1:
                system("cls");
                main();
                break;

            case 2:
                system("cls");
                Both_over1(balls);
                break;

            default:
                system("cls");
                printf("\n\t\t-----------------------------");
                printf("\n\t\t You Entered Wrong Choice...");
                printf("\n\t\t    Please Try Again ");
                printf("\n\t\t-----------------------------\n\n");
                system("pause");
                main();
                break;
        }
        break;
    }
    while(b2<b1){
        printf("\n\t\t*************************************");
        printf("\n\t\t       Your Team '%s' Won The Match ",T1);
        printf("\n\t\t*************************************\n\n\n\n");
        printf("\t\t---------------------------------------------------\n");
        printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
        printf("\t\t---------------------------------------------------\n");
        int pl;
        printf("\t\tChoice Your Options[1,2,0] : ");
        scanf("%d",&pl);
        switch(pl){
            case 0:
                system("cls");
                printf("\n\n\t\t----------------------------------------");
                printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                printf("\n\t\t|--------------------------------------|");
                getch();
                break;

            case 1:
                system("cls");
                main();
                break;

            case 2:
                system("cls");
                Both_over1(balls);
                break;

            default:
                system("cls");
                printf("\n\t\t-----------------------------");
                printf("\n\t\t You Entered Wrong Choice...");
                printf("\n\t\t    Please Try Again ");
                printf("\n\t\t-----------------------------\n\n");
                system("pause");
                main();
                break;
        }
        break;
    }

}
    if(choose==2){
        printf("\t\t*******************************************************************\n");
        printf("\t\t                       Team '%s' Balling First               \n",T1);
        printf("\t\t*******************************************************************\n");
        printf("\t\t*******************************************************************\n");
        printf("\t\t                            Start Match                            \n",T1);
        printf("\t\t*******************************************************************\n\n");
        for(n=1;n<=balls;n++){
        printf("\n\t\t%d Ball (Through The Ball). . .\n\t\t",n);
        system("pause");
        a3=rand()%10;

        if(a3==0){
            r3=0;
        }
        else if(a3==1){
            r3=2;
        }
        else if(a3==2){
            r3=4;
        }
        else if(a3==3){
            r3=6;
        }
        else if(a3==4){
            r3=1;
        }
        else if(a3==5){
            r3=4;
        }
        else if(a3==6){
            printf("\n\t\tWide Ball. . . ");
            r3=1;
            b3=b3+r3;
            printf("\n\t\t'%s' Total = %d runs\n\n",T2,b3);
            printf("\n\t\tAgain Through %d Ball. . .\n\t\t",n);
            system("pause");
            srand(time(NULL));
            r3=(rand()%4);
        }
        else if(a3==7){
            r3=4;
        }
        else if(a3==8){
            r3=0;
            count++;
            if(balls<6){
                if(count>1){
                    printf("\n\t\t**********************");
                    printf("\n\t\t   lost all wicket ");
                    printf("\n\t\t**********************");
                    break;
                }
            }
            printf("\n\t\t. . .Wicket. . .Next Batsman. . .");
        }
        else if(a3==9){
            printf("\n\t\tNo Ball. . . ");
            r3=1;
            b3=b3+r3;
            printf("\n\t\t'%s' Total = %d runs\n\n",T2,b3);
            printf("\n\t\tFree Hit Ball. . .");
            printf("\n\t\tAgain Through %d Ball. . .\n\t\t",n);
            system("pause");
            srand(time(NULL));
            r3=rand()%4;
        }
        printf("\n\t\t%d Ball : %d run",n,r3);

        b3=b3+r3;
        printf("\n\t\t'%s' Total %d runs\n\n",T2,b3);


        if(balls==12){
            if(n==6){
                  printf("\n\t\t*************************************");
                  printf("\n\t\t             1st over End            ");
                  printf("\n\t\t-------------------------------------");
                  printf("\n\t\t        Team '%s' Total %d runs",T2,b3);
                  printf("\n\t\t*************************************\n\n");
            }
        }
        if(balls==18){
            if(n==6){
                  printf("\n\t\t*************************************");
                  printf("\n\t\t             1st over End            ");
                  printf("\n\t\t-------------------------------------");
                  printf("\n\t\t        Team '%s' Total %d runs",T2,b3);
                  printf("\n\t\t*************************************\n\n");
            }else if(n==12){
                  printf("\n\t\t*************************************");
                  printf("\n\t\t             2nd over End            ");
                  printf("\n\t\t-------------------------------------");
                  printf("\n\t\t       Team '%s' Total %d runs",T2,b3);
                  printf("\n\t\t*************************************\n\n");
             }
        }
        if(balls==30){
            if(n==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t       Team '%s' Total %d runs",T2,b3);
                printf("\n\t\t*************************************\n\n");
             }else if(n==12){
                printf("\n\t\t*************************************");
                printf("\n\t\t             2nd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t       Team '%s' Total %d runs",T2,b3);
                printf("\n\t\t*************************************\n\n");
             }else if(n==18){
                printf("\n\t\t*************************************");
                printf("\n\t\t             3rd over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t       Team '%s' Total %d runs",T2,b3);
                printf("\n\t\t*************************************\n\n");
             }else if(n==24){
                printf("\n\t\t*************************************");
                printf("\n\t\t             4th over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t       Team '%s' Total %d runs",T2,b3);
                printf("\n\t\t*************************************\n\n");
              }
              else if(n==30){
                printf("\n\t\t*************************************");
                printf("\n\t\t             5th over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t       Team '%s' Total %d runs",T2,b3);
                printf("\n\t\t*************************************\n\n");
            }
        }
    }

                printf("\n\t\t*****************************************");
                printf("\n\t\t              Innings Break              ");
                printf("\n\t\t*****************************************");
                printf("\n\t\t Start Match. . .\n\t\t ");
                system("pause");

                system("cls");
                Target3=b3+1;
                printf("\n\t\t*****************************************");
                printf("\n\t\t              Start Innings              ");
                printf("\n\t\t*****************************************");
                printf("\n\t\t     Team '%s' Total Score %d runs   ",T2,b3);
                printf("\n\t\t-----------------------------------------");
                printf("\n\t\t     Your Team '%s' Need %d runs",T1,Target3);
                printf("\n\t\t*****************************************\n\n\n");
                printf("\n\t\t Lets play. . .\n\t\t ");
                system("pause");
                printf("\n\n\n");
                system("cls");

        for(m=1;m<=balls;m++){
        printf("\n\t\t%d Ball (Hit The Ball). . .\n\t\t",m);
        system("pause");
        a4=rand()%10;

        if(a4==0){
            r4=0;
        }
        else if(a4==1){
            r4=2;
        }
        else if(a4==2){
            r4=4;
        }
        else if(a4==3){
            r4=6;
        }
        else if(a4==4){
            r4=1;
        }
        else if(a4==5){
            r4=4;
        }
        else if(a4==6){
            printf("\n\t\tWide Ball. . . ");
            r4=1;
            b4=b4+r4;
            printf("\n\t\t%s Total = %d runs\n\n",T1,b4);
            printf("\n\t\tAgain Hit The %d Ball. . .\n\t\t ",m);
            system("pause");
            srand(time(NULL));
            r4=(rand()%4);
        }
        else if(a4==7){
            r4=4;
        }
        else if(a4==8){
            r4=0;
            count++;
            if(balls<6){
                if(count>1){
                    printf("\n\t\t**********************");
                    printf("\n\t\t  You lost all wicket ");
                    printf("\n\t\t**********************");
                    break;
                }
            }
            printf("\n\t\t. . .Wicket. . .Next Batsman. . .");
        }
        else if(a4==9){
            printf("\n\t\tNo Ball. . . ");
            r4=1;
            b4=b4+r4;
            printf("\n\t\t%s Total %d runs\n\n",T1,b4);
            printf("\n\t\tFree Hit Ball");
            printf("\n\t\tAgain Hit The %d Ball. . .\n\t\t",m);
            system("pause");
            srand(time(NULL));
            r4=rand()%4;
        }
        printf("\n\t\t%d Ball : %d run",m,r4);

        b4=b4+r4;
        printf("\n\t\t%s Total = %d runs\n\n",T1,b4);
        if(b4>=Target3){
              printf("\n\n\n\n\n\n");
              printf("\n\t\t*************************************");
              printf("\n\t\t    Your Team '%s' Won The Match ",T1);
              printf("\n\t\t*************************************\n\n\n");
               printf("\t\t---------------------------------------------------\n");
          printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
          printf("\t\t---------------------------------------------------\n");
           int pl;
           printf("\t\tChoice Your Options[1,2,0] : ");
           scanf("%d",&pl);
           switch(pl){


                case 1:
                system("cls");
                main();
                break;

                case 2:
                system("cls");
                Both_over1(balls);
                break;


                case 0:
                system("cls");
                printf("\n\n\t\t----------------------------------------");
                printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                printf("\n\t\t|--------------------------------------|");
                getch();
                break;



                default:
                system("cls");
                printf("\n\t\t-----------------------------");
                printf("\n\t\t You Entered Wrong Choice...");
                printf("\n\t\t    Please Try Again ");
                printf("\n\t\t-----------------------------\n\n");
                system("pause");
                main();
                break;

           }
          break;
        }

        if(balls==12){
            if(m==6){
                  printf("\n\t\t*************************************");
                  printf("\n\t\t             1st over End            ");
                  printf("\n\t\t-------------------------------------");
                  printf("\n\t\t            Total %d runs",b4);
                  printf("\n\t\t      Team '%s' need %d runs 6 balls",T1,Target3-b4);
                  printf("\n\t\t*************************************\n\n");
            }
        }
        if(balls==18){
            if(m==6){
                  printf("\n\t\t*************************************");
                  printf("\n\t\t             1st over End            ");
                  printf("\n\t\t-------------------------------------");
                  printf("\n\t\t            Total %d runs",b4);
                  printf("\n\t\t      Team '%s' need %d runs 12 balls",T1,Target3-b4);
                  printf("\n\t\t*************************************\n\n");
            }else if(m==12){
                  printf("\n\t\t*************************************");
                  printf("\n\t\t             2nd over End            ");
                  printf("\n\t\t-------------------------------------");
                  printf("\n\t\t            Total %d runs",b4);
                  printf("\n\t\t      Team '%s' need %d runs 6 balls",T1,Target3-b4);
                  printf("\n\t\t*************************************\n\n");
             }
        }
        if(balls==30){
            if(m==6){
                printf("\n\t\t*************************************");
                printf("\n\t\t             1st over End            ");
                printf("\n\t\t-------------------------------------");
                printf("\n\t\t            Total %d runs",b4);
                printf("\n\t\t      Team '%s' need %d runs 24 balls",T1,Target3-b4);
                printf("\n\t\t*************************************\n\n");
             }else if(m==12){
                  printf("\n\t\t*************************************");
                  printf("\n\t\t             2nd over End            ");
                  printf("\n\t\t-------------------------------------");
                  printf("\n\t\t            Total %d runs",b4);
                  printf("\n\t\t      Team '%s' need %d runs 18 balls",T1,Target3-b4);
                  printf("\n\t\t*************************************\n\n");
             }else if(m==18){
                  printf("\n\t\t*************************************");
                  printf("\n\t\t             3rd over End            ");
                  printf("\n\t\t-------------------------------------");
                  printf("\n\t\t            Total %d runs",b4);
                  printf("\n\t\t      Team '%s' need %d runs 12 balls",T1,Target3-b4);
                  printf("\n\t\t*************************************\n\n");
             }else if(m==24){
                  printf("\n\t\t*************************************");
                  printf("\n\t\t             4th over End            ");
                  printf("\n\t\t-------------------------------------");
                  printf("\n\t\t            Total %d runs",b4);
                  printf("\n\t\t      Team '%s' need %d runs 6 balls",T1,Target3-b4);
                  printf("\n\t\t*************************************\n\n");
              }
         }

    }


    printf("\n\n\n\n\n\n");
    while(b4==b3){
          printf("\n\t\t*************************************");
          printf("\n\t\t            Drawn The Match ");
          printf("\n\t\t*************************************\n\n\n");
           printf("\t\t---------------------------------------------------\n");
          printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
          printf("\t\t---------------------------------------------------\n");
           int pl;
           printf("\t\tChoice Your Options[1,2,0] : ");
           scanf("%d",&pl);
           switch(pl){


                case 1:
                system("cls");
                main();
                break;

                case 2:
                system("cls");
                Both_over1(balls);
                break;


                case 0:
                system("cls");
                printf("\n\n\t\t----------------------------------------");
                printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                printf("\n\t\t|--------------------------------------|");
                getch();
                break;



                default:
                system("cls");
                printf("\n\t\t-----------------------------");
                printf("\n\t\t You Entered Wrong Choice...");
                printf("\n\t\t    Please Try Again ");
                printf("\n\t\t-----------------------------\n\n");
                system("pause");
                main();
                break;

           }


    }
    while(b4<b3){
          printf("\n\t\t*************************************");
          printf("\n\t\t   Your Team '%s' Lost The Match ",T1);
          printf("\n\t\t*************************************\n\n\n");
          printf("\t\t---------------------------------------------------\n");
          printf("\t\t| [1]. Home  |  [2]. Play Again  |  [0]. Exit     |\n");
          printf("\t\t---------------------------------------------------\n");
           int pl;
           printf("\t\tChoice Your Options[1,2,0] : ");
           scanf("%d",&pl);
           switch(pl){


                case 1:
                system("cls");
                main();
                break;

                case 2:
                system("cls");
                Both_over1(balls);
                break;


                case 0:
                system("cls");
                printf("\n\n\t\t----------------------------------------");
                printf("\n\t\t|  Thank You Playing For Cricket Games | ");
                printf("\n\t\t|--------------------------------------|");
                getch();
                break;



                default:
                system("cls");
                printf("\n\t\t-----------------------------");
                printf("\n\t\t You Entered Wrong Choice...");
                printf("\n\t\t    Please Try Again ");
                printf("\n\t\t-----------------------------\n\n");
                system("pause");
                main();
                break;

           }
          break;
    }
    }

}



