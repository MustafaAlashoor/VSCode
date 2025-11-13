#include <stdio.h>

float avg_calc();
char letter_grade(float AG);

int main() {
    float Avg = avg_calc();
    
    printf("The averge is = %.2f\n", Avg);
    printf("the letter grade is = %c", letter_grade(Avg));

    return 0;
}

float avg_calc() {
    int grades[5];
    int i;
    float sum_grades = 0;

    for(i = 0; i < 5; i++){
        printf("Grade %d =", i+1);
        scanf("%d",&grades[i]);
        sum_grades += grades[i];
    }

    float avg = sum_grades / i ;

    return avg; 
}

char letter_grade(float AG){
    if (AG >= 90) return 'A';
    else if(AG >= 80) return 'B';
    else if(AG >= 70) return 'C';
    else if(AG >= 60) return 'D';
    else return 'F';
}
