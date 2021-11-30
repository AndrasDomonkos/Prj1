

 #include <stdio.h>
int main(void)
{

 int strana1;
    printf("Zadaj prvu stranu:");
    scanf("%i", &strana1);
    

 int strana2;
    printf("Zadaj druhu stranu:");
    scanf("%i", &strana2);
    

 int strana3;
    printf("Zadaj tretiu stranu:");
    scanf("%i", &strana3);
    

 int pravda1 = strana1*strana1+strana2*strana2==strana3*strana3;
 int pravda2 = strana3*strana3==strana1*strana1+strana2*strana2;
 int pravda3 = strana3*strana3==strana1*strana1+strana2*strana2;
 
 if (pravda1) {
     printf("true\n");
 }
     else {
         printf("false\n"); 
     }
 
 if (pravda2) {
     printf("true\n");
 }
 else {
     printf("false\n");
 }
    if (pravda3) {
     printf("true\n");
 } 
 else {
     printf("false\n");
    
 }
}

 
   
