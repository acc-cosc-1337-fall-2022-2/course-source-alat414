//write include statement for decisions header
#include <decisions.h>

//Write code for function(s) code here  

string get_letter_grade_using_if (int grade)

{
    string result;

     if (grade >= 90 && grade <= 100) 
     {
        return "grade A";
     }
    else if (grade >= 80 && grade <= 89) 
    {
        return "grade = B";
    }
    else if (grade >= 70 && grade <= 79) 
    {
        return "grade = C";
    }
    else if (grade >= 60 && grade <= 69) 
    {
        return "grade = D";
    }
    else if (grade >= 0 && grade <= 59) 
    {
        return "grade = F";
    }
    else
    {
        return "Error!";
    }
}

string get_letter_grade_using_switch (int grade) 

{
    string result; 

    switch (grade)
    {
    case 90 ... 100:
        result = "Grade A";
        break;  
    case 80 ... 89:
        result = "Grade B";
        break;
    case 70 ... 79:
        result = "Grade C";
        break;
    case 60 ... 69:
        result = "Grade D";
        break;
    case 0 ... 59:
        result = "Grade F";
        break;
    default:
        result = "Invalid value";
        break; 
    }        
    return 0;
}
