#include <stdio.h>
int IJK=0, congress=0, aap=0, BJP=0;
void electionResult()
{
    int wonByVote;
    if (IJK > congress && IJK > aap && IJK > BJP)
    {
        printf("\n***IJK won the election***\n\n");
        printf("Total vote of IJK : %d\n",IJK);
        wonByVote=IJK-congress;
        printf("IJK won by %d votes to Congress\n",wonByVote);
        wonByVote=IJK-aap;
        printf("IJK won by %d votes to AAP\n",wonByVote);
        wonByVote=IJK-BJP;
        printf("IJK won by %d votes to BJP\n",wonByVote);
    }
    else if (congress > aap && congress > BJP)
    {
        printf("\n***Congress won the election***\n\n");
        printf("Total vote of Congress : %d\n",congress);
        wonByVote=congress-IJK;
        printf("Congress won by %d votes to IJK\n",wonByVote);
        wonByVote=congress-aap;
        printf("Congress won by %d votes to AAP\n",wonByVote);
        wonByVote=congress-BJP;
        printf("Congress won by %d votes to BJP\n",wonByVote);
    }
    else if (aap > BJP)
    {
        printf("\n***AAP won the election***\n\n");
        printf("Total vote of AAP : %d\n",aap);
        wonByVote=aap-congress;
        printf("AAP won by %d votes to Congress\n",wonByVote);
        wonByVote=aap-IJK;
        printf("AAP won by %d votes to IJK\n",wonByVote);
        wonByVote=aap-BJP;
        printf("AAP won by %d votes to BJP\n",wonByVote);
    }
    else if(IJK == congress && IJK == aap && IJK == BJP)
    {
        printf("\nNo one won the election\n\n");
        printf("            IJK---Congress---AAP---BJP\n");
        printf("Total Vote   %d       %d        %d     %d\n",IJK,congress,aap,BJP);
    }
        
    else
    {
        printf("\n***BJP won the election***\n\n");
        printf("Total vote of BJP : %d\n",BJP);
        wonByVote=BJP-congress;
        printf("BJP won by %d votes to Congress\n",wonByVote);
        wonByVote=BJP-aap;
        printf("BJP won by %d votes to AAP\n",wonByVote);
        wonByVote=BJP-IJK;
        printf("BJP won by %d votes to IJK\n",wonByVote);
    }
}
void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
        IJK+=1;
        break;
    case 2:
        congress+=1;
        break;
    case 3:
        aap+=1;
        break;
    case 4:
        BJP+=1;
        break;
    }
}
void main()
{
    int choose;
    
    
        printf("\n** Welcome to the SIMPLE VOTING SYSTEM PROJECT by YASHRAJ CHAVAN - 879 **\n\n");
        
        
        printf("                         MP ELECTION 2022                        \n\n");
        printf("*************************************************************\n");
        printf("|           1.IJK             |          2.Congress         |\n");
        printf("*************************************************************\n");
        printf("|           3.AAP             |          4.BJP              |\n");
        printf("*************************************************************\n\n");
    do
    {    
        printf("Press 1 to vote IJK\n");
        printf("Press 2 to vote Congress\n");
        printf("Press 3 to vote AAP\n");
        printf("Press 4 to vote BJP\n");
        printf("Press 5 to show election result\n");
        printf("Please choose : ");
        scanf("%d", &choose);
        if (choose==5)
        {
            electionResult();
        }else
        {
            calculateVote(choose);            
        } 
        printf("\n");
    } while (choose != 5);
}







