%{

    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    #include"my.tab.h"
%}

commanet [/][/].*
multi_comment [#](.*|[\n]*)*[#]
ID [a-zA-Z][a-zA-z0-9_]*
ran_str ["].+["]
digit [-]?[0-9]+
digit_float [-+]?[0-9]*[.][0-9]+([Ee][-+]?[0-9]+)?
arr_val [{][0-9,]+[}]

%%

[ \t]+
"int"      return(INT);
"char"     return(CHAR);
"float"    return(FLOAT);
"while"    return(WHILE);
"for"      return(fr);
"in"       return(in);
"if"       return(IF);
"else"     return(ELSE);
"else if"  return(ELSEIF);
"range"    return(range);
"{"        return(BS);
"}"        return(BE);
"switch"   return(SWITCH);
"case"     return(CASE);
"break"    return(BREAK);
"default"  return(DEAF);
"print"    return(PRINT);
"poww"     return(POWER);
"sin"      return(SIN);
"cos"      return(COS);
"tan"      return(TAN);
"clswitch" return(CS);
"max"      return(MAX);
"min"      return(MIN);
"_gcd"     return(GCD);
"_lcm"     return(LCM);
"takeint"  return(TAKEIN);


"ll[0] = 1" {
    struct node ss;
    ss.arr[0] = 1;
    yylval.st = ss;
    return myst;
}


[-+/*<>=,()%^&;:|] {return *yytext;};
{digit_float} {yylval.fl = atof(yytext); return VAR_fl;};
{digit}	{yylval.IN = atoi(yytext); return NUM; };
{ID} { yylval.ch = strdup(yytext) ; return VAR;};
{ran_str} { yytext++;
            yytext[strlen(yytext)-1] = 0;
            yylval.ch = strdup(yytext); 
            return VAR_ch;};
{commanet} {yytext++;yylval.ch = strdup(yytext); return COMM;}
{multi_comment} {yytext++;yylval.ch = strdup(yytext); return ML_COMM;}
{arr_val} {yylval.ch = strdup(yytext); 
            return ARR_VAL;};
.
%%


