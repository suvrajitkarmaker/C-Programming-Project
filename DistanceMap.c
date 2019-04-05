#include <stdio.h>
#include <string.h>
int Khulna()
{
    int x,n,s;
    char y[20];
    printf("this is the historical place in khulna\n");
    printf("1.Rupsha nodi\n2.Jatisoggho shishupark\n3.rabindhanath's sosurbari\n4.bonbilash chiriyakhana\n");
    printf("\nwhich place distance you whant to see?\n");
    scanf("%d",&x);
    printf("press your location:\n");
    while(1)
    {
        if(s==1)
            break;
        getchar();
        scanf("%s",y);
        s=1;
        if(strcmp(y,"Dhaka")==0)
        {
            n=394;
        }
        else if(strcmp(y,"Khulna")==0)
            n=0;
        else if(strcmp(y,"Sylhet")==0)
        {
            n=498;
        }
        else if(strcmp(y,"Chittagong")==0)
        {
            n=372;
        }
        else if(strcmp(y,"Comilla")==0)
        {
            n=301;
        }
        else
        {
            printf("\nIncorrect spelling\nplease again press your location\n");
            s=0;
        }

    }
    if(x==1)
        printf("\n%s to rupsha nodi distance %dkm\n",y,13+n);
    else if(x==2)
        printf("\n%s to Jatisoggho shishupark distance %dkm\n",y,3+n);
    else if(x==3)
        printf("\n%s to rabindhanath's sosurbari distance %dkm\n",y,161+n);
    else if(x==4)
        printf("\n%s to bonbilash chiriyakhana distance %dkm\n",y,50+n);


}
int Dhaka()
{
    int x,n,s;
    char y[20];
    printf("this is the historical place in Dhaka\n");
    printf("1.Lalbagh\n2.National shishupark\n3.National Zoo\n4.Ahsan Monjil\n");
    printf("\nwhich place distance you whant to see?\n");
    scanf("%d",&x);
    printf("press your location:\n");
    while(1)
    {
        if(s==1)
            break;
        getchar();
        scanf("%s",y);
        s=1;
        if(strcmp(y,"Khulna")==0)
            n=394;
        else if(strcmp(y,"Dhaka")==0)
            n=0;
        else if(strcmp(y,"Sylhet")==0)
            n=239;
        else if(strcmp(y,"Chittagong")==0)
            n=248;
        else if(strcmp(y,"Comilla")==0)
            n=101;
        else
        {
            printf("\nIncorrect spelling\nplease again press your location\n");
            s=0;
        }

    }

    if(x==1)
        printf("\n%s to Lalbagh distance %dkm\n",y,19+n);
    else if(x==2)
        printf("\n%s to National shishupark distance %dkm\n",y,13+n);
    else if(x==3)
        printf("\n%s to National Zoo distance %dkm\n",y,n+11);
    else if(x==4)
        printf("\n%s to Ahsan Monjil distance %dkm\n",y,n+17);


}
int Sylhet()
{
    int x,n,s;
    char y[20];
    printf("this is the historical place in Sylhet\n");
    printf("1.Jaflong\n2.Hazrat Shajalal Mazar Shorif\n3.Lakkatura\n4.Ratargul Swam Forest\n");
    printf("\nwhich place distance you whant to see?\n");
    scanf("%d",&x);
    printf("press your location:\n");
    while(1)
    {
        if(s==1)
            break;
        getchar();
        scanf("%s",y);
        s=1;
        if(strcmp(y,"Dhaka")==0)
            n=239;
        else if(strcmp(y,"Sylhet")==0)
            n=0;
        else if(strcmp(y,"Khulna")==0)
            n=498;
        else if(strcmp(y,"Chittagong")==0)
            n=406;
        else if(strcmp(y,"Comilla")==0)
            n=218;
        else
        {
            printf("\nIncorrect spelling\nplease again press your location\n");
            s=0;
        }

    }

    if(x==1)
        printf("\n%s to Jaflong distance %dkm\n",y,59+n);
    else if(x==2)
        printf("\n%s to Hazrat Shajalal Mazar Sharif distance %dkm\n",y,2+n);
    else if(x==3)
        printf("\n%s to Lakkatura distance %dkm\n",y,n+4);
    else if(x==4)
        printf("\n%s to Ratargul Swam Forest distance %dkmm\n",y,n+24);


}

int Chittagong ()
{
    int x,n,s;
    char y[20];
    printf("this is the historical place in Chittagong\n");
    printf("1.Chittagong niversity\n2.Kalurghat\n3.Pahartoli\n4.Kaptai\n");
    printf("\nwhich place distance you whant to see?\n");
    scanf("%d",&x);
    printf("press your location:\n");
    while(1)
    {
        if(s==1)
            break;
        getchar();
        scanf("%s",y);
        s=1;
        if(strcmp(y,"Dhaka")==0)
            n=248;
        else if(strcmp(y,"Chittagong")==0)
            n=0;
        else if(strcmp(y,"Khulna")==0)
            n=372;
        else if(strcmp(y,"Sylhet")==0)
            n=406;
        else if(strcmp(y,"Comilla")==0)
            n=163;
        else
        {
            printf("\nIncorrect spelling\nplease again press your location\n");
            s=0;
        }

    }

    if(x==1)
        printf("\n%s to  Chittagong University distance %dkm\n",y,n+30);
    else if(x==2)
        printf("\n%s to  Kalurghat distance %dkm\n",y,n+8);
    else if(x==3)
        printf("\n%s to  Pahartoli distance %dkm\n",y,n+6);
    else if(x==4)
        printf("\n%s to  Kaptai distance %dkm\n",y,n+60);

}
int Comilla()
{
    int x,n,s;
    char y[20];
    printf("this is the historical place in Comilla\n");
    printf("1.Lalmai\n2.Comilla Cantonment\n3.Comilla University\n4.Moynamoti\n");
    printf("\nwhich place distance you whant to see?\n");
    scanf("%d",&x);
    printf("press your location:\n");
    while(1)
    {
        if(s==1)
            break;
        getchar();
        scanf("%s",y);
        s=1;
        if(strcmp(y,"Dhaka")==0)
            n=101;
        else if(strcmp(y,"Comilla")==0)
            n=0;
        else if(strcmp(y,"Khulna")==0)
            n=301;
        else if(strcmp(y,"Chittagong")==0)
            n=163;
        else if(strcmp(y,"Sylhet")==0)
            n=218;
        else
        {
            printf("\nIncorrect spelling\nplease again press your location\n");
            s=0;
        }

    }
    if(x==1)
        printf("\n%s to Lalmai distance %dkm\n",y,n+14);
    else if(x==2)
        printf("\n%s to  Comilla Cantonment distance %dkm\n",y,n+9);
    else if(x==3)
        printf("\n%s to  Comilla University distance %dkm\n",y,n+10);
    else if(x==4)
        printf("\n%s to  Moynamoti distance %dkm\n",y,n+14);

}
int main()
{
    printf("\t\t\t\t  Welcome to this program\n");
    printf("\t\t\t\t    Type : Distance Map\n");
    printf("\t\t\tCheck in : Dhaka, Chittagong, Sylhet, Khulna, Comilla\n\n\n");
    int i,s,t=1;
    char a[20];
    while(1)
    {
        printf("which place you want to see?\n");
        scanf("%s",a);
        if(strcmp(a,"Dhaka")==0)
        {
            Dhaka();
        }
        else if(strcmp(a,"Sylhet")==0)
        {
            Sylhet();
        }
        else if(strcmp(a,"Khulna")==0)
        {
            Khulna();
        }
        else if(strcmp(a,"Chittagong")==0)
        {
            Chittagong();
        }
        else if(strcmp(a,"Comilla")==0)
        {
            Comilla();
        }
        else
        {
            printf("Incorrect spelling\n");
            t=0;
        }
        if(t==1)
        {

            printf("\n\nIf you want to continue this program please press 1\nIf you want to stop program please press 2\n");
            scanf("%d",&s);
            if(s==1)
                continue;
            else
                break;
        }
        else
        {
            printf("Again input place name\n");
        }
        t=1;
    }
    printf("\t\t\t\t  program is closed :) Thank's everybody :)\n");
    return 0;
}
