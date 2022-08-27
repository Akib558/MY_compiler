# MY_COMPILER

## Idea :

In CSE 3212 : Compiler Design Laboratory we were assigned to build a compiler for our
own language-like project for this course using Flex and Bison. So hereby I build a compiler using
Flex and Bison. The steps of completing this project is given below :

**Source Code :**

## The programming language that I created has multiple features and various functionalities.

**Lexical Analyzer :**
Lexical Analyzer takes the source code and breaks these syntax into a series of
tokens, by removing any whitespaces or comments in the source code. To perform this task
a lex code is created to read patterns from the source code and create a C program code
version for recognizing all those patterns. If it successfully recognizes codes it creates
tokens. Which are later fed to the syntax analyzer when the syntax analyzer demands a
token. If there is an unrecognized pattern in the source code then it gives an error. The
implementation of the lexical analyzer is written in .l file.

**Syntax Analyzer:**
Syntax Analyzer gets the token from the Lexical Analyzer in the form of token
stream. The parser analyzes token streams created from the source code against the
production rule to detect any error in the code. The implementation of parser is written in
the .y file.


## Token Generation :

```
[ \t]+
"int" return (INT);
"char" return (CHAR);
"float" return (FLOAT);
"while" return (WHILE);
"for" return (fr);
"in" return (in);
"if" return (IF);
"else" return (ELSE);
"else if" return (ELSEIF);
"range" return (range);
"{" return (BS);
"}" return (BE);
"switch" return (SWITCH);
"case" return (CASE);
"break" return (BREAK);
"default" return (DEAF);
"print" return (PRINT);
"poww" return (POWER);
"sin" return (SIN);
"cos" return (COS);
"tan" return (TAN);
"clswitch" return (CS);
"max" return (MAX);
"min" return (MIN);
"_gcd" return (GCD);
"_lcm" return (LCM);
"takeint" return (TAKEIN);

"ll[0] = 1" {
struct node ss ;
ss.arr[ 0 ] = 1 ;
yylval.st = ss;
return myst;
}

[-+ /*<>=,()%^&;:|] {return *yytext;};
{digit_float} {yylval.fl = atof(yytext); return VAR_fl;};
{digit} {yylval.IN = atoi(yytext); return NUM; };
{ID} { yylval.ch = strdup(yytext) ; return VAR;};
{ran_str} { yytext++;
yytext[strlen(yytext)-1] = 0;
yylval.ch = strdup(yytext);
return VAR_ch;};
{commanet} {yytext++;yylval.ch = strdup(yytext); return COMM;}
{multi_comment} {yytext++;yylval.ch = strdup(yytext); return ML_COMM;}

{arr_val} {yylval.ch = strdup(yytext);
return ARR_VAL;};
```
# Manual

### 1. Data Types

<table>
    <tr>
        <th>Type</th>
        <th>Keyword</th>
        <th>Description</th>
    </tr>
    <tr>
        <td>Integer</td>
        <td>int</td>
        <td>To declare Integer data</td>
    </tr>
    <tr>
        <td>Float</td>
        <td>float</td>
        <td>To declare float data</td>
    </tr>
    <tr>
        <td>String</td>
        <td>char</td>
        <td>To declare string type data</td>
    </tr>


</table>

### 2. Variable Types



|**Type**|**Description**|
| - | - |
|Integer|To declare Integer type variable|
|Float|To declare Float data variables|
|String|To declare String type data variables|
```
int i, ii, iii; // int variables
float f, ff, fff; // float variables
char c, cc, ccc; // string variables
```
### 3. Variable Scope

In my language all the declared variables are global variables. So any variable can be changed any
time at any scope.

### 4. Operators

I) Arithmetic Operators

|**Operators**|**Description**|**Operator Type**|**Example**|
| - | - | - | - |
|+|Addition Operator. Adds two operands.|Binary|A(20) + B(30) will give result 50|
|-|Subtraction Operator. Subtract the second operand from the first.|Binary|A(30)-B(20) will give result 10|
|\*|Multiplication Operator. Multiply two operands.|Binary|A(10)\*B(20) will give result 200|
|/|Division Operator. Divide the first operand using the second.|Binary|A(200)/B(10) will give result 20|
|%|Modulus Operator. Give the remainder after integer division.|Binary|A(101)%B(10) will give result 1|
| - | :- | - | :-: |
|++|Increment Operator. Increase the value of the operand by one.|Unary|<p>A(10) will increase the value of A</p><p>New value of A will be 11</p>|
|--|Decrement Operator. Decrease the value of the operand by one.|Unary|A(10) will decrease the value of A New value of B will be 9 |
```
int a, b, c;
a = 1 ;
b = 2 ;

c = a+b;
print(c); // c is 3

c = c/ 3 ;
print(c); // c is 1

c = c-1;
print(c); // c is 0

c = 10 ;
c = c* 10 ;
print(c); // c is 100

c++;
c = c% 10 ;
print(c); // c is 1

c--;
c--;
print(c); // c is -
```
II) Relational Operators
|**Operator**|**Description**|**Example**|
| - | - | - |
|==|Checks if two operands equal or not|10==10 is true|
|!=|Checks if two operands are equal or not. Gives true value if not equal else gives false|10 != 20 is true 10 != 10 is false|
|>|Check if first operand is greater than the second|20 > 10 is true 10 > 20 is false|
||operator||
| :- | - | :- |
|<|Check if first operator is less than the second operator|10 < 20 is true 20 < 10 is false|
|>=|Check if first operand is greater than or equal to second operand|10 >= 20 is false|
|<=|Check if first operand is less than or equal to second operand|10 <= 20 is true|
```
int a, b;
a = 1 ;
b = 2 ;
if ( a == 1 )
{
1 + 2 ;
}

if (a > b)
{
3 + 5 ;
}
else if (a <=b)
{
3 + 6 ; // this statement will execute
}
else
{
3 + 7 ;
}
```
III) Logical Operators
|**Operator**|**Description**|**Example**|
| - | - | - |
|&|Logical AND operator. If two operands is true than it is true else it is false|<p>TRUE & TRUE gives true value</p><p>FALSE & TRUE gives false value</p>|
|\||Logical OR operator. If two operand is false than it is false else it is true|<p>FALSE | FALSE gives false value</p><p>FALSE | TRUE gives true value</p>|
|!|Logical NOT operator. Change the value of the operand. If operand is true than gives false and if operand is false than gives true|!FALSE gives true value !TRUE gives false value|

```
if (( 1 < 2 ) & ( 3 < 4 ))
{
1 + 2 ; // it will execute
}
```
```
if (( 1 < 2 ) & ( 3 > 4 )
{
1 + 2 ; // it won’t execute
}
```
```
if (( 1 > 2 ) | ( 3 > 4 ))
{
1 + 2 ; // it won’t execute
}
```
```
if (( 1 < 2 ) | ( 3 > 4 ))
{
1 + 2 ; // it will execute
}
```
### 5. Loops

1) While Loop:

In my programming language while loop is implement in the format of while( A condition\_operator B){

/*\* This section will iterate as long as the above condition holds\**/

}

2) For Loop :

The for loop in implemented in the format of 

for in range(A)

{

/*\* this section will iterate A time \*/*

}

for in range(A,B) // A is incremented by 1

{

*/\* this section will iterate as long as A is less than B\*/*

}

for in range(A,B,C) // A is incremented by C

{

*/\* this section will iterate as long as A is less than B\*/*

}

3) Nested Loop:

while(A < B) {

for in range(B) {

}


```
while ( 1 < 10 )
{
1 + 2 ; // will execute 10 times
}
```
```
for in range ( 5 )
{
1 + 2 ; // will execute 5 times
}
```
```
for in range ( 1 , 10 , 2 )
{
1 + 2 ; // will execute 5 times
}
```
```
for in range ( 5 )
{
while ( 1 < 5 )
{
1 + 2 ; // will execute 5*5 = 25 times
}
}
```

### 6) Decision Making :

I) IF statement:

The if statement of my programming language is done by :

if(condition)
{
/ _*this section will execute if the condition is true*_ /
}

II) IF-ELSE statement :

The if-else statement is done by :

if(condition)
{
_/*this section will execute if the condition is true*_ /
}
else
{
/ _*this section will execute if the condition is not true*_ /
}

III) IF-ELSE IF-ELSE statement :

if(condition1)
{
/ _*this section will execute if the condition1 is true and farther section will not be executed*_ /
}
else if(condition2)
{
/ _*this section will execute if the condition1 is false but condition 2 is true*_ /
}
else
{
/ _*this section will execute if the condition1 and condition2 both are false*_ /
}

IV) Nested IF :

if(condition)
{
if(condition1)
{
/ _* statement *_ /
}
else
{
/ _* statement *_ /


#### }

#### }

#### V) SWITCH :

The switch decision making is done by using the format :

switch(c)
{
case a:
expression;;
break;
case b:
statement;
break;
case c: / _* this section will execute *_ /
statement;
break;
default:
expression;;
break;

}

```
switch ( 1 )
{
case 1 : // this case will execute
```
```
1 + 2 ;; break ;
```
```
case 2 :
```
```
for in range ( 1 , 5 )
{
8 + 7 ;
}
; break ;
```
```
case 3 :
```
```
while ( 1 < 8 )
{
8+9;
}
```
```
; break ;
default :
```

```
7 + 9 ;; break ;
}
```
### 7) Array :

The array in my programming language has the format for declaration :

array_name : size : = { 1, 2, 3, 4, ....}

array_name : -1 : => will print the whole array

array_name : 1, 5 : => will print the elements from index 1 to 4

almost all the operation of an array can be done.

```
int kk1;
```
```
j: 7 : = { 1 , 2 , 3 , 4 , 5 , 61 , 71 };
kk1 = j: 5 :;
print(kk1); // kk1 value is 61
```
```
j: 5 : = 10 ;
kk1 = j: 5 :;
print(kk1); // kk1 value is 10
```
```
j:-1:; // print the whole array
j: 1 , 5 :; // print the elements from index 1 to index 4
```
### 8) Built In functions :

### sin() => gives the sin value of an angle

### cos() => gives the cos value of an angle

### tan() => gives the tan value of an angle

### max(a,b) => gives the max value between a and b

### min(a,b) => gives the min value between a and b

### _gcd(a,b) => gives the GCD of a and b

### _lcm(a,b) => gives the LCM of a and b

