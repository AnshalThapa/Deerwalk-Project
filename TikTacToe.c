#include<stdio.h>

void output(char x[10]);
int check(char x[10]);
main()
{
    int i,j,n,k,l;
    char x[10] = {'0','1','2','3','4','5','6','7','8','9'};
    char mark;
    printf("1st Player = X & 2nd Player = O\n");

    for(n=1;n<10;++n)
            {
                k=n;
                output(x);
                k = (k%2)?1:2;
                printf("Enter value by Player %d. \n Choose the number: ",k);
                scanf("%d",&i);
                mark = (k==1)?'X':'O';

                if (i==1 && x[1]=='1')
                    x[1] = mark;

                else if (i==2 && x[2]=='2')
                    x[2] = mark;

                else if (i==3 && x[3]=='3')
                    x[3] = mark;

                else if (i==4 && x[4]=='4')
                    x[4] = mark;

                else if (i==5 && x[5]=='5')
                    x[5] = mark;

                else if (i==6 && x[6]=='6')
                    x[6] = mark;

                else if (i==7 && x[7]=='7')
                    x[7] = mark;

                else if (i==8 && x[8]=='8')
                    x[8] = mark;

                else if (i==9 && x[9]=='9')
                    x[9] = mark;

                else
                {
                    printf("Invalid move ");
                    n--;

                }
                l = check(x);
                if (l==1){
                    printf("Player %d win ", k);
                    break;}
                    else if(l==2)
                    {
                        continue;
                    }
                else{
                    printf("Game draw");
                    break;
                }
            }
            printf("\n");
    output(x);
}


void output(char x[10])
{
    int i;
    for(i=1;i<10;i++)
    {
        printf("\t%c\t",x[i]);
        printf("|");
        if(i%3==0){
        printf("\n-------------------------------------------------\n");
        }
    }
}

int check(char x[10])
{
    if (x[1]==x[2] && x[2]==x[3])
        return 1;

    else if (x[4]==x[5] && x[5]==x[6])
        return 1;

    else if (x[7]==x[8] && x[8]==x[9])
        return 1;

    else if (x[1]==x[4] && x[4]==x[7])
        return 1;

    else if (x[2]==x[5] && x[5]==x[8])
        return 1;

    else if (x[3]==x[6] && x[6]==x[9])
        return 1;

    else if (x[1]==x[5] && x[5]==x[9])
        return 1;

    else if (x[3]==x[5] && x[5]==x[7])
        return 1;

    else if (x[1] != '1' && x[2] != '2' && x[3] != '3' &&
        x[4] != '4' && x[5] != '5' && x[6] != '6' && x[7]
        != '7' && x[8] != '8' && x[9] != '9')

        return 0;
    else
        return  2;
}
