#include <stdio.h>

int main() {
    int age;
    int income;
    int risk;
    scanf("%d %d %d", &age, &income, &risk);
    // low risk porfolio

    if(age>50 && income>75000 && risk==3){
      printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
      }
    else if(age>50){
      printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if(age<30){
      printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }

    else if(income<=30000 &&( risk==1 || risk==2)){
      printf("Low Risk Portfolio: Suitable for conservative investments.");
    }

    else if(age>=30 && age<=50 && income<=75000 && risk==2){
      printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else if (age >= 30 && age <= 50 && income>75000 && (risk == 2 || risk==1)) {
      printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else if (age >= 30 && age <= 50 && income>75000 && risk == 3){
      printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if (age > 50 && income > 75000 && risk == 3){
      printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }

        return 0;
}
