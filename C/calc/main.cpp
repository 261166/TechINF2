{\rtf1\ansi\ansicpg1250\cocoartf2822
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
\
int main() \{\
    printf("Simple calc\\n");\
    while (1) \{\
        printf("Enter the first number \\n");\
        int number1 = 0;\
        int number2 = 0;\
        scanf("%d", &number1);\
        printf("Enter the second number \\n");\
        scanf("%d", &number2);\
        printf("What operation would you like to conduct? Type '1' for sum, '2' for subtraction, '3' for multiplication, '4' for division, '0' if you want the program to stop:\\n");\
        int user_choice = 0;\
        scanf("%d", &user_choice);\
        if (user_choice == 1) \{\
            printf("%d + %d = %d\\n", number1, number2, number1 + number2);\
        \}\
        else if (user_choice == 2) \{\
            printf("%d - %d = %d\\n", number1, number2, number1 - number2);\
        \}\
        else if (user_choice == 3) \{\
            printf("%d * %d = %d\\n", number1, number2, number1 * number2);\
        \}\
        else if (user_choice == 4) \{\
            if (number2 != 0) \{\
                printf("%d / %d = %d\\n", number1, number2, number1 / number2);\
            \}\
            else \{\
                printf("You can't divide by 0!\\n");\
            \}\
        \}\
        else if (user_choice == 0) \{\
            break;\
        \}\
    \}\
\
    return 0;\
    \}}