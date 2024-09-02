#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
struct stu
{
    char fn[40];
    char ln[40];
    char un[40];
    char p[40];
    int m;
};
struct qu
{
    char q[100];
    char wa[10];
};
int lo();
int re();
int tl();
int qu();
int res();
int te(char[], char[], char[]);
int questions;
int main()
{
    int n;
    system("cls");
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    printf("\033[0;32m");
    printf("********************************************WELCOME TO THE EXAM PROGRAM***************************************\n");
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    printf("\n\n\t\t\t\t\t---------------------------------");
    printf("\033[0;32m");
    printf("\n\t\t\t\t\t| 1.For student login \t\t|\n");
    printf("\033[0;33m");
    printf("\t\t\t\t\t---------------------------------\n");
    printf("\033[0;32m");
    printf("\t\t\t\t\t| 2.For creating student login\t|\n");
    printf("\033[0;33m");
    printf("\t\t\t\t\t---------------------------------\n");
    printf("\033[0;32m");
    printf("\t\t\t\t\t| 3.For admin login\t\t|\n");
    printf("\033[0;33m");
    printf("\t\t\t\t\t---------------------------------\n");
    printf("\033[0;32m");
    printf("\t\t\t\t\t| 4.Exit\t\t\t|\n");
    printf("\033[0;33m");
    printf("\t\t\t\t\t---------------------------------\n"); 
    printf("\033[0;32m");
    printf("\t\t\t\t\tPlease select your option\n\t\t\t\t\t");
    printf("\033[0;36m");
    scanf("%d", &n);
    if (n == 1)
    {
        lo();
    }
    if (n == 2)
    {
        re();
    }
    if (n == 3)
    {
        tl();
    }
    if (n == 4)
    {
        exit(0);
    }
    return 0;
}
int re()
{
    system("cls");
    FILE *ptr = fopen("login.txt", "a");
    struct stu t;
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    printf("\033[0;32m");
    printf("*****************************************STUDENT REGISTRATION*************************************************\n");
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    printf("\033[0;33m");
    printf("\n\n\t\t\t\tplease enter first name and last name respectively\n\t\t\t\t");
    printf("\033[0;36m");
    scanf("%s%s", t.fn, t.ln);
    printf("\033[0;33m");
    printf("\n\n\t\t\t\tEnter Your User Name\n\t\t\t\t");
    printf("\033[0;36m");
    scanf("%s", t.un);
    printf("\033[0;33m");
    printf("\n\t\t\t\tenter password\n\t\t\t\t");
    printf("\033[0;36m");
    scanf("%s", t.p);
    fprintf(ptr, "%s\n", t.fn);
    fprintf(ptr, "%s\n", t.ln);
    fprintf(ptr, "%s\n", t.un);
    fprintf(ptr, "%s\n", t.p);
    printf("\033[0;33m");
    printf("\t\t\t\tLoading......\n\t\t\t\tAccount Created Successfully\n\n");
    sleep(3);
    fclose(ptr);
    printf("\t\t\t\tThanks For Resgestration\n\n");
    sleep(3);
    lo();

    return 0;
}
// wrote by swaraj from IT_C 21EG112C23
int lo()
{
    int i, n = 66, z = 0,ch;
    struct stu t[65];
    char un[40], p[40];
    FILE *ptr = fopen("login.txt", "r");

    for (i = 0; i < n; i++)
    {
        fscanf(ptr, "%s", t[i].fn);
        fscanf(ptr, "%s", t[i].ln);
        fscanf(ptr, "%s", t[i].un);
        fscanf(ptr, "%s", t[i].p);
    }
retrya:
    system("cls");
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    printf("\033[0;32m");
    printf("*************************************************STUDENT LOGIN************************************************\n");
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    printf("\033[0;32m");
    printf("\n\n\t\t\t\t\tEnter username and password\n\t\t\t\t\t");
    printf("\033[0;36m");
    scanf("%s", un);
    for (i = 0; i < n; i++)
    {
        if ((strcmp(un, t[i].un)) == 0)
        {
            z++;
            break;
        }
    }
    if (z > 0)
    {
    retry:
        printf("\033[0;33m");
        printf("\n\t\t\t\t\tAccount Found\n\n");
        printf("\033[0;32m");
        printf("\t\t\t\t\tPlease Enter Password\n\t\t\t\t\t");
        printf("\033[0;36m");
        scanf("%s", p);
        if ((strcmp(p, t[i].p)) == 0)
        {
            system("cls");
            printf("\033[0;33m");
            printf("==============================================================================================================\n");
            printf("\033[0;32m");
            printf("****************************************Login Successful******************************************************\n");
            printf("\033[0;33m");
            printf("==============================================================================================================\n");
            printf("\033[0;32m");
            te(t[i].fn, t[i].ln, un);
        }
        else
        {
            printf("wrong password\n");
            goto retry;
        }
    }
    else
    {   printf("\033[0;31m");
        printf("\n\n\t\t\t\t\tACCOUNT NOT FOUND!!!!!!\n\n");
        printf("\033[0;33m");
        printf("\t\t\t\t\tPress\n\n\t\t\t\t\t1.For Creating A Account\n\n\t\t\t\t\tPress Any Number To Retry\n\n\t\t\t\t\t");
        printf("\033[0;36m");
        scanf("%d",&ch);
        if(ch==1)
        {
          re();
        }
        else
        {
        goto retrya;
        }
    }
    z = 0;
    return 0;
}
// wrote by swaraj from IT_C 21EG112C23
int tl()
{
    system("cls");
    int n;
    char iun[40], un[40] = "admin";
    char ips[40], ps[40] = "admin";
retry2:
    system("cls");
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    printf("\033[0;32m");
    printf("************************************************ADMIN LOGIN***************************************************\n");
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    printf("\n\n\t\t\t\t\tEnter The Username\n\t\t\t\t\t");
    printf("\033[0;36m");
    scanf("%s", iun);
    if (strcmp(iun, un) == 0)
    {
    retry3:
        system("cls");
        printf("\033[0;33m");
        printf("\n\n\t\t\t\t\tAccount found\n\n\t\t\t\t\tPlease Enter Password\n\t\t\t\t\t");
        printf("\033[0;36m");
        scanf("%s", ips);
        if (strcmp(ips, ps) == 0)
        {
            system("cls");
            printf("\033[0;33m");
            printf("==============================================================================================================\n");
            printf("\033[0;32m");
            printf("***************************************************ADMIN******************************************************\n");
            printf("\033[0;33m");
            printf("==============================================================================================================\n");    
        sel:
            printf("\n\n");
            printf("\t\t\t\t\t1.For Setting The Question Paper\n\n\t\t\t\t\t2.Checking Results Of The Students\n\n\t\t\t\t\t");
            printf("Enter Your Option\n\t\t\t\t\t");
            printf("\033[0;36m");
            scanf("%d", &n);
            if (n == 1)
            {
                qu();
            }
            else if (n == 2)
            {
                res();
            }
            else
            {
                goto sel;
            }
        }
        else
        {   printf("\033[0;31m");
            printf("\t\t\t\t\tWrong Password\n\n");
            sleep(3);
            goto retry3;
        }
    }
    else
    {   printf("\033[0;31m");
        printf("\t\t\t\t\tPlease Try Again Account Not Found\n\n");
        sleep(3);
        goto retry2;
    }
    return 0;
}
// wrote by swaraj from IT_C 21EG112C23
int qu()
{
    system("cls");
    FILE *a, *q;
    char no[200],ans,op1[100],op2[100],op3[100],op4[100];
    int n, i;
    a = fopen("answer.txt", "w");
    q = fopen("questions1.txt", "w");
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    printf("\033[0;32m");
    printf("***********************************************Question Paper*************************************************\n");
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    if (a == NULL || q == NULL)
    {
        printf("error opening file\n");
    }
    else
    {
        printf("\n\n\t\t\t\t\tenter the number of questions (maximum 10)\n\t\t\t\t\t");
        printf("\033[0;36m");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            fflush(stdin);
        printf("\033[0;33m");
        printf("\t\t\t\t\tEnter The Question\n\t\t\t\t\t");
        printf("\033[0;36m");
        gets(no);
        printf("\033[0;33m");
        printf("\t\t\t\t\tEnter The Options For The Question\n");
        fprintf(q,"%d.%s\n",i+1,no);
        fprintf(q,"The Options Are As Follows\n");
        printf("\t\t\t\t\tOption No 1\n\t\t\t\t\t");
        printf("\033[0;36m");
        gets(op1);
        printf("\033[0;33m");
        printf("\t\t\t\t\tOption No 2\n\t\t\t\t\t");
        printf("\033[0;36m");
        gets(op2);
        printf("\033[0;33m");
        printf("\t\t\t\t\tOption No 3\n\t\t\t\t\t");
        printf("\033[0;36m");
        gets(op3);
        printf("\033[0;33m");
        printf("\t\t\t\t\tOption No 4\n\t\t\t\t\t");
        printf("\033[0;36m");
        gets(op4);
        printf("\033[0;32m");
        printf("\n\t\t\t\t\tThe Correct Option Number\n\t\t\t\t\t");
        printf("\033[0;36m");
        scanf("%c",&ans);
        fprintf(q,"1.%s\n2.%s\n3.%s\n4.%s\n",op1,op2,op3,op4);
        fprintf(a,"%c",ans);
        fprintf(q,"\n");
        // wrote by swaraj from IT_C 21EG112C23
        }
        fclose(a);
        fclose(q);
        printf("\n\n\t\t\t\t\treturning back to main menu in 5 seconds\n");
        sleep(5);
        main();
    }
    return 0;
}
int te(char fn[40], char ln[40], char un[40])
{
    FILE *a, *q, *r;
    int i, z = 0;
    char ch, ians[10], rans[10];
    printf("\033[0;33m");
    printf("\t\t\t\t\tplease confirm your details\n\n");
    printf("\033[0;32m");
    printf("\t\t\t\t\tFirst name-%s\n\n\t\t\t\t\tlast name-%s\n\n\t\t\t\t\tusername-%s\n\n", fn, ln, un);
    printf("\033[0;33m");
    printf("\t\t\t\t\tFor confirming enter 'Y' else 'N' to return Back to menu\n\t\t\t\t\t");
    fflush(stdin);
    printf("\033[0;36m");
    scanf("%c", &ch);
    // wrote by swaraj from IT_C 21EG112C23
    if (ch == 'Y')
    {
        system("cls");
        printf("\033[0;33m");
        printf("==============================================================================================================\n");
        printf("\033[0;31m");
        printf("*********************************************WARNING**********************************************************\n");
        printf("\033[0;33m");
        printf("==============================================================================================================\n");
        printf("\033[0;32m");
        printf("\t\t\t\tEnter in 'Y' will start the exam\n\n\t\t\t\tEntering 'N' will take you back to main screen\n\n\t\t\t\t");
        fflush(stdin);
        printf("\033[0;36m");
        scanf("%c", &ch);
        system("cls");
        if (ch == 'Y')
        {
            r = fopen("results.txt", "a");
            a = fopen("answer.txt", "r");
            q = fopen("questions1.txt", "r");
            if (a == NULL || q == NULL || r == NULL)
            {
                printf("error opening file\n");
            }
            else
            {
                printf("\033[0;33m");
                printf("==============================================================================================================\n");
                printf("\033[0;31m");
                printf("*******************************************INSTRUCTIONS*******************************************************\n");
                printf("\033[0;33m");
                printf("==============================================================================================================\n");
                printf("\n\n\t\t\t\tIf The Answer is\n\n\t\t\t\tfirst question is option 1\n\n\t\t\t\tsecond question 2 is option 3\n\n\t\t\t\tthird question answer option is 4\n\n\t\t\t\tenter '134' as answer\n\n");
                printf("\033[0;31m");
                printf("\t\t\t\tTHE exam is starting in 5 seconds\n");
                printf("\033[0;33m");
                sleep(5);
                printf("*****************************************************************************************************************************\n");
                while ((ch = getc(q)) != EOF)
                {
                    printf("%c", ch);
                }
                printf("***************Enter The Answer In A Single Line Without Spaces And Press Enter After Entering All Answers*******************\n");
                printf("\033[0;36m");
                scanf("%s", ians);
                fscanf(a, "%s", rans);
                for (i = 0; i < strlen(rans); i++)
                {
                    if (ians[i] == rans[i])
                    {
                        z++;
                    }
                }
                printf("\033[0;32m");
                printf("\t\t\t\t%d is your score\n\n", z);
                printf("\033[0;33m");
                printf("\t\t\t\tthanks for attending quiz\n\n");
                printf("\033[0;31m");
                printf("\t\t\t\tgoing back to main menu in 5 seconds\n\n");
                fprintf(r, "\t\t\t\t\tUsername-%s\n\t\t\t\t\tName Of Students-%s %s\n\t\t\t\t\tMarks Scored-%d/%d\n", un, fn, ln, z, strlen(rans));
                fprintf(r, "\t\t\t-------------------------------------------------------\n");
                sleep(7);
                system("cls");
                main();
                // wrote by swaraj from IT_C 21EG112C23
            }
            fclose(a);
            fclose(r);
            fclose(q);
        }
        else
        {
            system("cls");
            main();
        }
    }
    else
    {
        system("cls");
        main();
    }
    return 0;
}
//swaraj's code
int res()
{ 
    system("cls");
    char ch1;
    FILE *r;
    char ch;
    r = fopen("results.txt", "r");
    printf("\033[0;33m");
    printf("==============================================================================================================\n");
    printf("\033[0;32m");
    printf("**************************************************RESULTS*****************************************************\n");
    printf("\033[0;33m");
    printf("==============================================================================================================\n\n\n");
    printf("\033[0;35m");
    if (r == NULL)
    {
        printf("error opening file\n");
    }
    else
    {
        while ((ch = getc(r)) != EOF)
        {
            printf("%c", ch);
        }
    }
    printf("\033[0;33m");
    printf("Enter Y To Return Back To Menu\n");
    fflush(stdin);
    printf("\033[0;36m");
    scanf("%c", &ch1);
    if (ch1 == 'Y' || ch=='y')
    {
        main();
    }

    return 0;
}