#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
int main()
{
    int len;
    int uc;
    int nu;
    int sc;
    int tim;
    int fee;
    srand(time(0));
    char pas;

    printf("=================================================Password Generator=================================================\n");

    PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\17.wav"), NULL, SND_SYNC);

    while (len<8 || len >32)
    {
        printf("\tPlease enter the length of the password: ");
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\1.wav"), NULL, SND_SYNC);
        scanf("%d", &len);
    }
    PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\2.wav"), NULL, SND_SYNC);

    printf("\tDo you need upper cases? [1 for YES or 0 for NO]: ");
    PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\3.wav"), NULL, SND_SYNC);
    scanf("%d", &uc);

    if (uc != 0)
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\4.wav"), NULL, SND_SYNC);
    else
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\5.wav"), NULL, SND_SYNC);

    printf("\tDo you need numbers? [1 for YES or 0 for NO]: ");
    PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\6.wav"), NULL, SND_SYNC);
    scanf("%d", &nu);

    if (nu != 0)
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\7.wav"), NULL, SND_SYNC);
    else
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\8.wav"), NULL, SND_SYNC);

    printf("\tDo you need special characters? [1 for YES or 0 for NO]: ");
    PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\9.wav"), NULL, SND_SYNC);
    scanf("%d", &sc);

    if (sc != 0)
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\10.wav"), NULL, SND_SYNC);
    else
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\11.wav"), NULL, SND_SYNC);

    printf("\tEnter the number of passwords you need : ");
    PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\12.wav"), NULL, SND_SYNC);
    scanf("%d", &tim);


    for(int j=0;j<tim;j++){
            printf("\t%d. \t",(j+1));

    if (uc && !nu && !sc)//1
    {
        int i;
        for(i=0;i<len;i++)
        {
            pas = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[rand()%52];
            printf("%c", pas);
        }
    }
    else if (!uc && nu && !sc)//2
    {
        int i;
        for(i=0;i<len;i++)
        {
             pas = "0123456789abcdefghijklmnopqrstuvwxyz"[rand()%36];
             printf("%c", pas);
        }
    }
    else if (!uc && !nu && sc)//3
    {
        int i;
        for(i=0;i<len;i++)
        {
             pas = "`~!@#$%^&*(){}_+-=[];':\".,<>?|abcdefghijklmnopqrstuvwxyz"[rand()%56];
             printf("%c", pas);
        }
    }
    else if (!uc && !nu && !sc)//4
    {
        int i;
        for(i=0;i<len;i++)
        {
             pas = "abcdefghijklmnopqrstuvwxyz"[rand()%26];
             printf("%c", pas);
        }
    }
    else if (uc && nu && sc)//5
    {
        int i;
        for(i=0;i<len;i++)
        {
             pas = "0123456789`~!@#$%^&*(){}_+-=[];':\".,<>?|ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[rand()%92];
             printf("%c", pas);
        }
    }
    else if (!uc && nu && sc)//6
    {
        int i;
        for(i=0;i<len;i++)
        {
             pas = "0123456789`~!@#$%^&*(){}_+-=[];':\".,<>?|abcdefghijklmnopqrstuvwxyz"[rand()%66];
             printf("%c", pas);
        }
    }
    else if (uc && !nu && sc)//7
    {
        int i;
        for(i=0;i<len;i++)
        {
             pas = "`~!@#$%^&*(){}_+-=[];':\".,<>?|ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[rand()%82];
             printf("%c", pas);
        }
    }
    else if (uc && nu && !sc)//8
    {
        int i;
        for(i=0;i<len;i++)
        {
             pas = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[rand()%62];
             printf("%c", pas);
        }
    }

    printf("\n");}

    printf("\n");
    PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\13.wav"), NULL, SND_SYNC);

    printf("\tWould you like to give us a feedback [1 for YES or 0 for NO]: ");
    PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\16.wav"), NULL, SND_SYNC);
    scanf("%d", &fee);

    if (fee != 0)
    {
        char feed[200];
        feed[200] = '\0';

        time_t t;
        time(&t);

        printf("\tPlease enter your feedback [When finished press tab and then enter]: \n");
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\14.wav"), NULL, SND_SYNC);
        printf("\t\t");
        scanf("%[^\t]s ",&feed);

        FILE *app = fopen("C:\\Users\\user\\Desktop\\Password_Generator\\FeedBack.txt","a");

        fprintf(app,"%s", ctime(&t));
        fprintf(app, "\t %s", feed);
        fprintf(app, "\n\n\n\n");

        fclose(app);
    }

    printf("\n\n  *****************************************************************************************************\n");
    Sleep(550);
    Beep(520,550);
    printf("  *  *********** *         *   *******   **        * *        ** *         *   *******   *         *  *\n");
    Sleep(500);
    Beep(520,500);
    printf("  *      ***     *         *  *       *  * *       * *      **   *         *  *       *  *         *  *\n");
    Sleep(450);
    Beep(520,450);
    printf("  *       *      *         * *         * *  *      * *    **     *         * *         * *         *  *\n");
    Sleep(400);
    Beep(520,400);
    printf("  *       *      *         * *         * *   *     * *  **        *       *  *         * *         *  *\n");
    Sleep(350);
    Beep(520,350);
    printf("  *       *      *********** *********** *    *    * ***           *******   *         * *         *  *\n");
    Sleep(300);
    Beep(520,300);
    printf("  *       *      *         * *         * *     *   * *  **           ***     *         * *         *  *\n");
    Sleep(250);
    Beep(520,250);
    printf("  *       *      *         * *         * *      *  * *    **          *      *         * *         *  *\n");
    Sleep(200);
    Beep(520,200);
    printf("  *       *      *         * *         * *       * * *      **        *       *       *   *       *   *\n");
    Sleep(150);
    Beep(520,150);
    printf("  *       *      *         * *         * *        ** *        **      *        *******     *******    *\n");
    Sleep(100);
    printf("  *****************************************************************************************************\n");
    Sleep(50);

    PlaySound(TEXT("C:\\Users\\user\\Desktop\\Password_Generator\\sounds\\15.wav"), NULL, SND_SYNC);

    return 0;
}
