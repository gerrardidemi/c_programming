#include <stdio.h>
// >= 80 = distinction
// >= 75 && < 80 = A1
// >= 70 && < 75 = A2
// >= 65 && < 70 = B1
// >= 60 && < 65 = B2
// >= 50 && < 60 = C
// < 50 = F
int main() {
int score;
printf("pls enter your score\n");
  scanf("%d", &score);

  if (score >= 80 )
{
 printf("DISTINCTION\n"); 
}
else if ((score >= 75) && score < 80)
{
 printf("A1\n");
}
else if (score >= 70 && score < 75)
{
 printf("A2\n");
} 
else if (score >= 65 && score < 70)
{
 printf("B1\n");
} 
else if (score >= 60 && score < 65)
{
 printf("B2\n");
} 
else if (score >= 50 && score < 60)
{
 printf("C\n");
} 
else
{
 printf("F\n");
} 
  return 0;
}
