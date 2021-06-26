#include<stdio.h>
int main(){

int n,i;
char Name[20];
printf("Enter your Name:" );
scanf("%s",&Name);
printf("\nNumber of Courses you cleared: ");
scanf("%d",&n);
float Credit[n];
int Grade_point[n];
float Credit_sum=0;
float CreditandGrade_point=0;
printf("\nEnter the credits you earned:" );
for(i=1;i<=n;i++){
    scanf("%f",&Credit[i]);
}
printf("\nEnter the grade:" );
for(i=1;i<=n;i++){
    scanf("%d",&Grade_point[i]);
}


for(i=1;i<=n;i++){
    Credit_sum=Credit_sum+Credit[i];
}

for(i=1;i<=n;i++){
    CreditandGrade_point=CreditandGrade_point+(Credit[i]*Grade_point[i]);
}

float CGPA=(CreditandGrade_point)/(Credit_sum);
printf("\n");
printf("\n%s , Your CGPA is %0.3f",Name,CGPA);
//MY CGPA is 8.599
return 0;
}
