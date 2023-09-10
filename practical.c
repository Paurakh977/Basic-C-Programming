// WAP that reads marks of five subjects and calculates total marks and percentage. Also awards the division based on the following criteria.

// Percentage							Division

// P>=75								Distinction
// p>=60 and < 75							First Division
// p>=45 and < 60							Second Division
// p=35 and < 45							Third Division
// Otherwise								Failed

// [Hints: Pass marks and full marks for each subject are 35 and 100 respectively.]

#include <stdio.h>
int main()
{

    int maths, physics, chemistry, coding, computer;
    float sum, percentage;
    printf("Enter the marks of maths, physics, chemistry, coding, computer respecitvely: ");
    scanf("%d %d %d %d %d,", &maths, &physics, &chemistry, &coding, &computer);
    sum = maths + physics + chemistry + coding + computer;
    percentage = (sum / 500) * 100;
    if (percentage >= 75)
    {
        printf("CONGRATULATIONS! You scored %.2f%% and you are awarded with Distinction. ", percentage);
        // yo % f le float target garkoe tara % .2f vaneko float ko 2decimal places matra display gar vaneko...(change)..% .2f paxadi ko % % le(%) symbol display gareko chnage it with word("percentage")
    }
    else if (percentage >= 60 && percentage < 75)
    {
        printf("CONGRATULATIONS! You scored %.2f%% and you are awarded with First Division. ", percentage);
    }
    else if (percentage >= 45 && percentage < 60)
    {
        printf("CONGRATULATIONS! You scored %.2f%% and you are awarded with Second Division. ", percentage);
    }
    else if (percentage >= 35 && percentage < 45)
    {
        printf("CONGRATULATIONS! You scored %.2f%% and you are awarded with Third Division. ", percentage);
    }
    else if (percentage < 35)
    {
        printf("Better Luck Next Time! You scored %.2f%% and you Failed ", percentage);
    }
    return 0;
}

// // WAP which reads any two integer values from the user and calculates difference and product using switch statement.

#include <stdio.h>

int main()
{
    int num_1, num_2, diff, product, choice;
    printf("Enter two integer values: ");
    scanf("%d %d", &num_1, &num_2);
    printf("Select operation:\n");
    printf("1. Difference\n");
    printf("2. Product\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        diff = num_1 - num_2;
        printf("Difference of %d and %d is %d", num_1, num_2, diff);
        break;
    case 2:
        product = num_1 * num_2;
        printf("Product of %d and %d is %d", num_1, num_2, product);
        break;
    default:
        printf(" Your have entered an Invalid choice");
        break;
    }

    return 0;
}

// // WAP to find the given number is divisible by 5 and not by 10 using the nested if else statement.

#include <stdio.h>
int main()
{
    int num_1;
    printf("enter your number please");
    scanf("%d", &num_1);
    if (num_1 % 5 == 0)
    {
        if (num_1 % 10 != 0)
        {
            printf("Your number %d is divisible by 5 but not by 10", num_1);
        }
        else
        {
            printf("Your number %d is divisible by both 5 and 10", num_1);
        }
    }
    else if (num_1 % 10 == 0)
    {
        printf("Your number %d  is not divisible by 5 but by 10 ", num_1);
    }
    else
    {
        printf("your number %d is neither divisible by 5 or 10", num_1);
    }

    return 0;
}

// // WAP to display the name of the day in a week, depending on the number entered by the user using switch statement.

#include <stdio.h>
int main()
{
    int num_;
    printf("Enter a number betwwen 1 to 7");
    scanf("%d", &num_);
    switch (num_)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thrusday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Satudayday");
        break;
    default:
        printf("invalid input");
        break;
    }
    return 0;
}

// // WAP to calculate and display the sum of odd natural numbers up to n.

#include <stdio.h>
int main()
{
    int number, i, sum;
    sum = 0;
    i = 1;
    printf("enter any postive number");
    scanf("%d", &number);
    do
    {
        printf("%d \n", i);
        sum += i;
        i += 2;
    } while (i < number);
    printf("Your sum of odd natural numbers up to %d  is %d", number, sum);
    return 0;
}

// // WAP a program to calculate and display sum of the numbers from 1 to 10.

#include <stdio.h>
int main()
{
    int sum, i;
    sum = 0;
    i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        sum += i;
        i++;
    }
    printf("Your sum of the numbers from 1 to 10 is %d .", sum);
    return 0;
}

// // WAP to display 1 6 11 16 ……………..101.

#include <stdio.h>
int main()
{
    int i;
    i = 1;
    while (i <= 101)

    {
        printf("%d\n", i);
        i += 5;
    }
    return 0;
}

// WAP to display 5 9 13…………………. Up to 10th term.

#include <stdio.h>
int main()
{
    int i, count;
    i = 1;
    count = 1;
    while (count <= 10)
    {
        printf("%d\n", i);
        i += 4;
        count += 1;
    }
    return 0;
}

// WAP to display multiplication table of 6 using loop.

#include <stdio.h>
int main()
{
    int i, j;
    i = 0;
    while (i <= 10)
    {
        j = 6 * i;
        printf("6 X %d = %d\n", i, j);
        i++;
    }
    return 0;
}

// WAP to display the multiplication table of any number given by the user.

#include <stdio.h>
int main()
{
    int n, i, j;
    i = 0;
    printf("enter any number");
    scanf("%d", &n);
    while (i <= 10)
    {
        j = n * i;
        printf("%d X %d = %d\n", n, i, j);
        i++;
    }
    return 0;
}

// WAP to calculate and display the factorial of 5.

#include <stdio.h>
int main()
{
    int i, j;
    j = 1;
    for (i = 1; i <= 5; i++)
    {
        j *= i;
    }
    printf("Facotrial of 5 is %d", j);
    return 0;
}

// WAP a program to display the following:
// 1 12 123

#include <stdio.h>
    int
    main()
{
    int i, j;
    i, j = 1;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

// WAP to calculate and display the sum of the digits given by the user.

#include <stdio.h>
int main()
{
    int n, i, j, number;
    int sum = 0;
    j = 0;
    printf("ENter any number");
    scanf("%d", &n);
    number = n;
    number;
    for (i = 0; i < n; i++)
    {
        j = n % 10;
        sum += j;
        n = n / 10;
    }
    printf("The sum of indivisual digits of the number %d is %d", number, sum);
    return 0;
}

// WAP to count the number of digits of the number given by the user.

#include <stdio.h>
int main()
{
    int n, count, i, j;
    count = 0;
    printf("enter any number");
    scanf("%d", &n);
    i = n;
    while (n > 0)
    {
        n /= 10;
        count += 1;
    }
    printf("No. of digits  in the given number %d is %d", i, count);
    return 0;
}

// WAP the check the given number is palindrome or not.

#include <stdio.h>
int main()
{
    int n, i, j, reverse;
    reverse = 0;
    printf("enter any number");
    scanf("%d", &n);
    j = n;
    while (n > 0)
    {
        i = n % 10;
        n /= 10;
        reverse = reverse * 10 + i;
    }
    if (reverse == j)
    {
        printf("The given number %d is palindrome", j);
    }
    else
    {
        printf("The given number %d is not palindrome", j);
    }
    return 0;
}

// WAP to check whether the given string is palindrome or not.

#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[50];
    char rev[50];
    printf("enter your string\t");
    scanf("%s", &str);
    strcpy(rev, str);
    strrev(rev);
    i = strcmp(rev, str);
    if (i == 0)
    {
        printf("The given string %s is palindrome ", str);
    }
    else
    {
        printf("The given string %s is not palindrome", str);
    }
    return 0;
}

// WAP to convert the given decimal number to binary number system.

#include <stdio.h>

int main()
{
    int decimal, binary = 0, base = 1, remainder;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    while (decimal > 0)
    {
        remainder = decimal % 2;
        binary += remainder * base;
        base *= 10;
        decimal /= 2;
    }
    printf("Binary equivalent: %d", binary);
    return 0;
}

// WAP to convert the given binary number into equivalent decimal number system.

#include <stdio.h>
#include <math.h>

int main()
{
    int binary, decimal = 0, power = 0, digit;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary != 0)
    {
        digit = binary % 10;
        decimal += digit * pow(2, power);
        power++;
        binary /= 10;
    }
    printf("Decimal equivalent: %d", decimal);
    return 0;
}

// WAP to check whether the given number is prime or composite.

#include <stdio.h>
int main()
{
    int n, i, count;
    count = 0;
    printf("enter a number\t");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count += 1;
        }
    }
    if (count == 0)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is compostite number", n);
    }

    return 0;
}

// WAP to display all the prime numbers from 1 to 100.

#include <stdio.h>
int main()
{
    int number, prime, i;

    for (number = 2; number < 100; number++)
    {
        prime = 1;
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            printf("%d\n", number);
        }
    }
    return 0;
}

// WAP to check whether the password entered by the user is correct or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char orgi_paswrd[12];
    char input_paswrd[12];
    char username[20];
    int x;
    printf("enter your new password\t");
    scanf("%s", &orgi_paswrd);
    printf("enter your username\t ");
    scanf("%s", &username);
    printf("enter your password\t");
    scanf("%s", &input_paswrd);
    x = strcmp(orgi_paswrd, input_paswrd);
    if (x == 0)
    {
        printf("Your password is correct. Welcome to our program %s ", username);
    }
    else
    {
        printf("Your password is inncorrect please try again %s", username);
    }
    return 0;
}

// WAP which reads a string and performs the following:
// Calculate the length of the string.Count the number of vowels present in the string nmd display them.Convert the given string into upper case and lower case.

#include <stdio.h>
#include <string.h>
    int
    main(){
        char in[50];
        char store[2];
        int i, count, len;
        count = 0;
        printf("enter your string\t");
        scanf("%s", in);
        len = strlen(in);
        strlwr(in);
        printf("the length of your string %s is %d.\n", in, len);

        for (i = 0; i < len; i++){
            if (in[i] == 'a' || in[i] == 'e' || in[i] == 'i' || in[i] == 'o' || in[i] == 'u'){
                count += 1;}

} printf(" The number of vowels in your sting %s is %d\n.", in, count);
        strupr(in);
        printf("The conversion of your string into capital form is %s\n", in);
        strlwr(in);
        printf("The conversion of your string into lower form is %s\n", in);
        return 0;

}

// WAP which reads a set of numbers and performs the following:
// Find out the greatest number
    // Print the numbers in ascending order.Display the sum and average of the numbers.

#include <stdio.h>
    int main(){
        int array[100];
        int set, i;
        printf("How many sets of numbers you want to input? ");
        scanf("%d", &set);
        printf("please enter %d numbers", set);
        for (i = 0; i < set; i++){
            scanf("%d", &array[i]);

} int sum = 0,
        avg = 0;
        for (i = 0; i < set; i++){
            sum += array[i];

} avg = sum / set;
        printf("Sum of the numbers is : %d and avg is; %d\n", sum, avg);
        int greatest = array[0];
        for (i = 1; i < set; i++){
            if (array[i] >= greatest){
                greatest = array[i];}

} printf("the greatest number among the inputs is %d\n ", greatest);

        int j, x;

        for (i = 0; i < set; i++){
            for (j = i + 1; j < set; j++){
                if (array[i] > array[j]){
                    x = array[i];
                    array[i] = array[j];
                    array[j] = x;}}} printf("The sorted array is: ");
        for (i = 0; i < set; i++){
            printf("%d ", array[i]);} return 0;}

// WAP to input 5 numbers in an array and display them.
#include <stdio.h>
int main(){int i;
           int array[5];
           printf("enter your 5 inputs: ");
           for (i = 0; i < 5; i++){
               scanf("%d", &array[i]);} for (i = 0; i < 5; i++){
               printf("%d ", array[i]);} return 0;}

// WAP to input 5 numbers with constant values initialization in array to display the sum.

#include <stdio.h>

int main(){
    int array[5] = {100, 0, 900, 4, 50};
    int sum = 0, i;

    for (i = 0; i < 5; i++){
        sum += array[i];}

    printf("Sum of the numbers is: %d\n", sum);

    return 0;}

// WAP to input the age of 20 students and count the number of students having age between 20 to 25.

#include <stdio.h>
int main(){
    int age[20];
    int i, count = 0;
    printf("enter the ages of the students: ");
    for (i = 0; i < 20; i++){
        scanf("%d", &age[i]);} for (i = 0; i < 20; i++){
        if (age[i] >= 20 && age <= 25){
            count += 1;}

} printf("The number of students of  age  between 20 to 25 is : %d", count);

    return 0;}

// WAP to find the largest number among ’n’ numbers in the array.

#include <stdio.h>

int main(){
    int array[100];
    int i, n;
    printf("enter how many inputs do you want to enter?");
    scanf("%d", &n);
    printf("please enter %d numbers", n);
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);} int great = array[0];
    for (i = 1; i < n; i++){
        if (array[i] >= great){
            great = array[i];}

} printf("the greatest number in the array is : %d", great);

    return 0;}

#include <stdio.h>
int main(){
    int num, i, n;
    printf("enter the number of inputs to give into list");
    scanf("%d", &n);
    int array[n];
    printf("enter %d numbers into the array", n);
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);} printf("enter the number you want to check");
    scanf("%d", &num);
    for (i = 0; i < n; i++){
        if (array[i] == num){
            printf("the number %d is in the array", num);} else {
            printf("number %d is not int he list", n);} return 0;

}

}

// WAP to input ‘n’ numbers and sort them in ascending order.

#include <stdio.h>
int main(){
    int num, i, n, j;
    printf("enter the number of inputs to give into list");
    scanf("%d", &n);
    int array[n];
    printf("enter %d numbers into the array", n);
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);}

    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (array[i] >= array[j]){
                num = array[i];
                array[i] = array[j];
                array[j] = num;

}

}

} printf("the asecding order of the numbers is: \n");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);}

}

// WAP to store 9 numbers with constant values in 2-dimensional array that is 3X3 matrix and print in matrix form.

#include <stdio.h>

int main(){
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    printf("The 3x3 matrix is:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);} printf("\n");}

    return 0;}

// WAP to input data into two dimensional array for example 3X3 matrix and display in matrix form.

#include <stdio.h>

int main(){
    int matrix[3][3];
    int i, j;

    printf("Enter the  data to be entered in3x3 matrix:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);}}

    printf("The 3x3 matrix is:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);} printf("\n");}

    return 0;}

// WAP to input two matrices, add two matrices and display in proper format.

#include <stdio.h>
int main(){
    int matrix_1[3][3];
    int matrix_2[3][3];
    int i, j;
    printf("enter the data to be entered in the 1st matix");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &matrix_1[i][j]);}

} printf("enter the data to be entered in the 2nd matix");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &matrix_2[i][j]);}}

    int matrix_3[3][3];
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            matrix_3[i][j] = matrix_1[i][j] + matrix_2[i][j];}} printf("the resluting sumed matrix is :\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matrix_3[i][j]);} printf("\n");}}

// WAP to find the length of  given string.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int len;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    printf("The length of the string '%s' is %d.", str, len);
    return 0;}

// WAP to reverse the given string.

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("enter your string ");
    scanf("%s", str);
    strrev(str);
    printf("%s", str);}

// WAP to copy one string into another string.

#include <stdio.h>
#include <string.h>
int main(){
    char source[100], destination[100];
    printf("Enter the source string: ");
    scanf("%s", source);
    strcpy(destination, source);
    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);
    return 0;}

// WAP to concatenate two string into one string.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    strcat(str1, str2); // concatenate str2 to str1

    printf("Concatenated string: %s\n", str1);

    return 0;}

// WAP to compare two string.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0){
        printf("The strings are equal.\n");} else {
        printf("The strings are not equal.\n");}

    return 0;}

// WAP to input given set of strings and sort then in alphabetically order.

#include <stdio.h>
#include <string.h>
int main(){
    int i, j, n;
    char str[50][30], x[30];
    printf("how many strings you want to give?");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("\nenter your string %d", i + 1);
        scanf("%s", &str[i]);} for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (strcmp(str[i], str[j]) > 0){
                strcpy(x, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], x);}

}

}

    printf("\nYour sorted data are:\n");
    for (i = 0; i < n; i++){
        printf("%s\n", str[i]);}

    return 0;

}

// WAP to take in n strings from the users and display them

#include <stdio.h>
#include <string.h>
int main(){
    printf("how many strings you want to input? ");
    int n;
    scanf("%d", &n);
    char str[n][20];
    int i;
    printf("enter your string: ");
    for (i = 0; i < n; i++){
        scanf("%s", &str[i]);} printf("your strings are : \n");
    for (i = 0; i < n; i++){
        printf("\t%s\n", &str[i]);}

    return 0;

}

// WAP to calculate and print simple interest (SI) and  net amount (A), given that SI=PTR/100 and A=SI+P.

#include <stdio.h>

int main(){
    int P, R, T, SI, A;

    printf("Enter principal amount: ");
    scanf("%d", &P);

    printf("Enter rate of interest: ");
    scanf("%d", &R);

    printf("Enter time period: ");
    scanf("%d", &T);

    SI = (P * R * T) / 100;
    A = P + SI;

    printf("Simple Interest = %.2d\n", SI);
    printf("Net Amount = %.2d\n", A);

    return 0;}

// WAP to calculate distance using S=ut+½ at2
#include <stdio.h>

int main(){
    float s, u, a, t;

    printf("Enter Initial Velocity: ");
    scanf("%f", &u);

    printf("Enter Acceleration: ");
    scanf("%f", &a);

    printf("Enter time taken: ");
    scanf("%f", &t);

    s = u * t + 0.5 * a * t * t;

    printf("The distance traveled is: %.2f units", s);

    return 0;}

// WAP to calculate area and circumference of a real circle. Hint: [Radius of a circle is always positive. ] [A=r2] [C=2r]

#include <stdio.h>

int main(){
    float r, a, c;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    a = 3.14159 * r * r;
    c = 2 * 3.14159 * r;

    printf("The area of the circle is: %.2f\n", a);
    printf("The circumference of the circle is: %.2f\n", c);

    return 0;}

// WAP to convert temperature in centigrade (C) into Fahrenheit (F). Hint: F=1.8C+32.

#include <stdio.h>

int main(){
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = 1.8 * c + 32;

    printf("The temperature in Fahrenheit is: %.2f", f);

    return 0;}

// WAP to convert temperature in centigrade (C) into Kelvin [K].
#include <stdio.h>

int main(){
    int c, k;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &c);

    k = c + 273;

    printf("The temperature in Kelvin is: %d", k);

    return 0;}

// WAP to enter the number of days and convert it into years, months and days.
#include <stdio.h>

int main(){
    int days, years, months, remaining_days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    months = (days % 365) / 30;
    remaining_days = (days % 365) % 30;

    printf("%d year(s), %d month(s), %d day(s)", years, months, remaining_days);

    return 0;}

// WAP to input cost price (CP) and selling price (SP) and determine the profit or loss and profit/ loss percentage.
#include <stdio.h>

int main(){
    float cp, sp, prl, prlp;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    prl = sp - cp;

    prlp = (prl / cp) * 100;

    if (prl > 0){
        printf("Profit: %.2f\n", prl);
        printf("Profit percentage: %.2f%%", prlp);} else if (prl < 0){
        printf("Loss: %.2f\n", -prl);
        printf("Loss percentage: %.2f%%", -prlp);} else {
        printf("No profit no loss.");}

    return 0;}

// WAP to input three different numbers and display the middle number.

#include <stdio.h>

int main(){
    int a, b, c, m;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c))
        m = a;
    else if ((b > a && b < c) || (b < a && b > c))
        m = b;
    else m = c;

    printf("The middle number is: %d", m);

    return 0;}

// WAP to  calculate and display the real roots of a quadratic equation. [Hint: check the condition b2-4ac ].
#include <stdio.h>

int main(){
    float a, b, c, d, x1, x2;

    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0){
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are real and distinct: %.2f and %.2f\n", x1, x2);} else if (d == 0){
        x1 = -b / (2 * a);
        printf("The roots are real and equal: %.2f\n", x1);} else {
        printf("The roots are imaginary\n");}

    return 0;}

// WAP to transpose a matrix with size 3X3.

#include <stdio.h>

int main(){
    int m[3][3], transpose[3][3], i, j;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++)
        scanf("%d", &m[i][j]);

    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++)
        transpose[j][i] = m[i][j];

    printf("\nThe transposed matrix is:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            printf("%d\t", transpose[i][j]);
        printf("\n");}

    return 0;}

// WAP to calculate the sum of all the elements of the 3X3 matrix.
#include <stdio.h>

int main(){
    int m[3][3], i, j, sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++)
        scanf("%d", &m[i][j]);

    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++)
        sum += m[i][j];

    printf("\nThe sum of all the elements in the matrix is: %d", sum);

    return 0;}

// WAP to calculate the sum of the diagonal matrix with size 3X3.
#include <stdio.h>

int main(){
    int m[3][3], i, j, sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++)
        scanf("%d", &m[i][j]);

    for (i = 0; i < 3; i++)
        sum += m[i][i];

    printf("\nThe sum of the diagonal elements of the matrix is: %d", sum);

    return 0;}

#include <stdio.h>
int main(){
    puts("hi");}