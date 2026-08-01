#include<bits/stdc++.h>
using namespace std;
int main()
{
//? if-else
//TODO: Write a Program to take age as input and return adult if age >= 18 else return not an adult  

    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age>=18)
    cout<<"Adult";
    else
    cout<<"Not an adult";
    cout<<"\n\n";

//? if else-if
// TODO: A school has following rules for grading system: 
// TODO: a. Below 25 - F ; 25 to 44 - E ; 45 to 49 - D ; d. 50 to 59 - C ; e. 60 to 79 - B ; f. 80 to 100 - A
// TODO: Ask user to enter marks and print the corresponding grade.
    
    float marks;
    cout<<"Enter marks in subject: ";
    cin>>marks;
    if (marks<25)
    cout<<"Grade: F";
    else if (marks<45)
    cout<<"Grade: E";   
    else if (marks<50)
    cout<<"Grade: D";
    else if (marks<60)
    cout<<("Grade: C");
    else if (marks<80)
    cout<<("Grade: B");
    else if (marks<=100)
    cout<<("Grade: A");
    cout<<"\n\n";

//? If else-if else
//TODO: Take the age from the user and then decide accordingly
//TODO: 1. If age < 18, print -> not eligible for job
//TODO: 2. If age >= 18, print -> "eligible for job"
//TODO: 3. If age >= 55 and age <= 57, print -> "eligible for job, but retirement soon."
//TODO: 4. If age > 57 print -> "retirement time"

    cout<<"Enter age: ";
    cin>>age;
    if (age<18)
    cout<<"Not eligible for job";
    else if (age<=54)
    cout<<"Eligible for job";
    else if(age<=57)
    cout<<"Eligible for job, but retire soon";
    else
    cout<<"Retirement time";
}