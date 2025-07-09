#include<stdio.h>
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
void draw()
{
printf("----------------\n");
printf("| %c | %c | %c |\n",a[1],a[2],a[3]);
printf("----------------\n");
printf("| %c | %c | %c |\n",a[4],a[5],a[6]);
printf("----------------\n");
printf("| %c | %c | %c |\n",a[7],a[8],a[9]);
printf("----------------\n");
}
int check()
{
if(a[1]==a[2] && a[2]==a[3] || a[4]==a[5] && a[5]==a[6] || a[7]==a[8] && a[8]==a[9])
{
return 1;
}
else if(a[1]==a[4] && a[4]==a[7] || a[2]==a[5] && a[5]==a[8] || a[3]==a[6] && a[6]==a[9])
{
return 1;
}
else if(a[1]==a[5] && a[5]==a[9] || a[3]==a[5] && a[5]==a[7])
{
return 1;
}
else if(a[1]!='1' && a[2]!='2' && a[3]!='3' && a[4]!='4' && a[5]!='5' && a[6]!=a[6] &&
a[7]!='7' && a[8]!='8' && a[9]!='9')
{
return 2;
}
else
{
return 0;
}
}
int main()
{
draw();
int player=0,ch,i;
char mark;
printf("X is for player 1 and 0 is for Player 2\n");
do
{
player++;
A:
if(player%2!=0){
printf("Player 1:Enter Block number:");
mark='X';
}
else
{
printf("Player 2:Enter Block number:");
mark='0';
}
scanf("%d",&ch);
if(a[ch]=='X' || a[ch]=='0')
{
printf("Invalid Choice");
goto A;
}
a[ch]=mark;
draw();
i=check();
}
while(i==0);
if(i==1)
{
if(player%2==0)
{
printf("Congratulations player 2 won the game\n");
}
else
{
printf("Congratulations Player 1 won the game\n");
}
}
else
{
printf("Tie");
}
draw();
return 0;
}


