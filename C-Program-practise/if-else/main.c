 #include<stdio.h>
 // Check a user is eligible for the job or not.
 int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    // Checking the age
    if(age > 18 && age < 35){
        printf("Wow! You are eligible !");
    }
    else{
        printf("So sad! You are not eligible!");
    }
 return 0;
 }
