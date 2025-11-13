#include<stdio.h>
#include<time.h>
#include<stdlib.h>

char* RPS(int r);
int Result(char* p, char* pc);

int main() {
    srand(time(NULL));
    int PC = (rand() % 3);
    int P;
    int pc_score = 0;
    int p_score = 0;
    int i;
    
    for(i = 0; i <= i+1; i++){
    printf("Enter 1 for Rock, 2 for Paper, 3 for Scissors | 0 to end game.\nyour choice = ");
    scanf("%d",&P);
    if(P==0){return 0;}
    printf("You= %s | PC= %s\n",RPS(P),RPS(PC) );
    
    if(Result(RPS(P), RPS(PC)) == 1){
    printf("YOU WON!!!\n");
    p_score++;
    printf("Score = %d:%d (You:PC) | %d games played\n\n", p_score, pc_score, i+1);
    }
    else if(Result(RPS(P), RPS(PC)) == 0) {
    printf("you lost\n");
    pc_score++;
    printf("Score = %d:%d (You:PC) | %d games played\n\n", p_score, pc_score, i+1);
    }
    else {
    printf("Draw\n");
    printf("Score = %d:%d (You:PC) | %d games played\n\n", p_score, pc_score, i+1);
    }
    }
    return 0;
}

 char* RPS(int r){
     if(r == 1) return"Rock";
     else if(r == 2) return "Paper";
     else return "Scissors";
 }
 
 int Result(char* p, char* pc){
     if(p=="Rock"&& pc=="Rock" || p=="Paper"&& pc=="Paper" || p=="Scissors"&& pc=="Scissors") return 2;
     if(p=="Rock"&& pc=="Scissors" || p=="Paper"&& pc=="Rock" || p=="Scissors"&& pc=="Paper") return 1;
     if(p=="Rock"&& pc=="Paper" || p=="Paper"&& pc=="Scissors" || p=="Scissors"&& pc=="Rock") return 0;
 }