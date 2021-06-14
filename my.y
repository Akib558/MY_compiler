%{
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<math.h>

    int storage[100];
    int s_val = -1;
    int s_def = 0;
    int s_main_val = -1000000;
    float fl_val[10000000];
    int str_val[10000000];
    int chk_type[10000000];
    char get_str[100000][200];
    int set_arr[100][1000];
    int chk_arr[10000000];
    int sz_arr[1000];
    int arr_index = 1;
    int s_cnt = 0;



    int for_loop = 0;
    int while_loop = 0;
    int print = 0;
    int expression = 0;
    int var = 0;



    #define sh if(0)
    #define sh2 if(0)
    #define PI 3.14159265

    int yylex (void);



    int gcd(int n1, int n2) 
    {
        if (n2 != 0)
            return gcd(n2, n1 % n2);
        else
            return n1;
    }


    int lcm(int n1, int n2)
    {
        return (n1*n2)/gcd(n1,n2);
    }




    int get_val(char *name)
    {
        int val,len,i;
        val = 0;
        len = strlen(name);
        int p;
        p = 1;
        for(i = 0; i <len; i++)
        {
            if (name[i] == '1' || name[i] == '2' || name[i] == '3'\
             || name[i] == '4' || name[i] == '5' || name[i] == '6'\
             || name[i] == '7' || name[i] == '8' || name[i] == '9'\
             || name[i] == '0')
             {
                val += (name[i]-'0');
             } 
             else{
                val += (name[i]-'a'+1)*p;
                p *= 26;
             }
            
        }
        return val;
    }




    struct nod {
        int arr[1000];
    } kk;

    
%}

%code requires {
    struct node {
        int arr[1000];
    } ;
}


%union {
    char *ch;
    int IN;  
    float fl;
    struct node st;
}

%start main
%token ML_COMM ARR_VAL TAKEIN GCD LCM MAX MIN CS COMM SIN COS TAN ELSEIF myst INT CHAR FLOAT VAR WHILE NUM BS BE fr in range IF ELSE SWITCH CASE DEAF BREAK VAR_ch VAR_fl PRINT POWER
%left '+' '-'
%left '*' '/'
%left '<' '>' '&' '|'
%type<fl> VAR_fl expression fun
%type<IN> arr arr2 statement switch1 LOOP condition block condition1 caselist caseitem NUM deaf s_id ifelse
%type<ch> VAR VAR1 VARR1 VARR2 VAR_ch expression2 COMM ARR_VAL ML_COMM
%type<struct node> myst
// %left '&' '|'

%%


main: myprogram { printf("\n\n-------------- Program Completed ------------\n"); }

myprogram:
        |myprogram statement
        ;



statement:';'|
        CS{ s_val = -1; s_def = 0; s_main_val = -1000000; }
        |
        COMM { printf("\n%s\n",$1); }
        |
        ML_COMM{ printf("\n%s\n",$1);}
        |
        myst ';'
        {
            printf("New Line Pinted...executed using \";\" \n");
        }
        |
         declaration ';' {
            sh printf("\nmain dec in stat\n");
        }
        |
        declaration1 ';' {
            sh printf("\nmain dec1 in stat for ch\n");
        }
        |
        declaration2 ';'{
            sh printf("\nmain dec1 in stat for fl\n");
        }
        |
        VAR ';'{
            sh2 printf("\nEnterd single variable statement\n"); 

            int kk;
            kk = get_val($1);
            sh printf("\nget_val is : %d",kk);
            sh printf("\nchk_type is : %d",chk_type[kk]);


            if(chk_type[get_val($1)] == 2)
            {
                int pp;
                pp = get_val($1);
                char ppp[200];
                strcpy(ppp,get_str[pp]);
                sh2 printf("\nSingle variable statement Result is = %s\n",ppp);
            }
            else if(chk_type[get_val($1)] == 1)
            {
                sh printf("\nEnterd only variable\n"); 
                
                int pp;
                pp = get_val($1);
                if(chk_type[pp] != 1)
                    printf("\nNOT DECLARED VARIABLE\n");
                else
                {
                    $$ = str_val[pp];
                    sh2 printf("\nSingle variable statement Result is = %d\n",$$);

                }
            }
            else if(chk_type[get_val($1)] == 3)
            {
                sh printf("\nEnterd only variable for fl\n"); 
                
                int pp;
                pp = get_val($1);
                if(chk_type[pp] != 3)
                    printf("\nNOT DECLARED VARIABLE\n");
                else
                {
                    $$ = (int)fl_val[pp];
                    sh2 printf("\nSingle varible statement Result is = %f\n",fl_val[pp]);

                }
            }
            else
            {
                    printf("\nNOT DECLARED VARIABLE\n");
                
            }


        }
        |
        VAR '=' VAR{

            int pp1,pp2;
            pp1 = chk_type[get_val($1)];
            pp2 = chk_type[get_val($3)];
           sh  printf("PP1 : %d || pp2 : %d",pp1,pp2);

            sh2 printf("\nEntered var = var statement\n");
            if(pp1 != pp2)
            {
                if(pp1+pp2 == 4)
                {
                    if(pp1 == 1)
                        str_val[get_val($1)] = (int)fl_val[get_val($3)];
                    else
                        fl_val[get_val($1)] = (float)str_val[get_val($3)];
                }
                else if(pp1 == 0)
                {
                    printf("\nAssigning in undeclared variable not allowed\n");
                }
                else
                {
                    printf("\nType mismatched..Can only use *char = *char\n");
                }
            }
            else
            {
                int pp;
                pp = chk_type[get_val($1)];
                if(pp1 == 1)
                {
                    str_val[get_val($1)] = str_val[get_val($3)];
                    $$ = str_val[get_val($1)];
                }
                else if(pp1 == 2)
                {
                    strcpy( get_str[get_val($1)],get_str[get_val($3)] );
                    $$ = -1;
                }
                else if(pp1 == 3)
                {
                    fl_val[pp1] = fl_val[pp2];
                    $$ = (int)fl_val[pp1];
                }
                else
                {
                    printf("\nUndeclared variable");
                }
            }
        }
        |
        expression ';' {

            printf("\nExpression statement Result is = %f\n",$1);
            $$ = (int)$1;
        }
        
        |
        VAR '=' expression ';'{
            sh2 printf("\nEnterd var = expression statement");
            int pp;
            pp = get_val($1);
            if(chk_type[pp] == 0)
                printf("\nNOT DECLARED VARIABLE\n");
            else if(chk_type[pp] == 1)
                str_val[pp]=(int)$3;
            else if(chk_type[pp] == 3)
                fl_val[pp] = (float)$3;
        }
        |
        VAR '=' expression2 ';'{
            sh2 printf("\nEnterd var = expression2 statement\n");
            int pp;
            pp = get_val($1);
            if(chk_type[pp] != 2)
                printf("\nVariable not declared (char)\n");
            else
                strcpy(get_str[pp],$3);
        }
        |
        LOOP
        |
        ifelse
        |
        switch1
        |
        PRINT '(' VAR ')' ';'{
            sh2 printf("\nEnter print statemnet\n");
            int pp;
            pp = get_val($3);
            if(chk_type[pp] == 0)
                printf("\nVariable not declared\n");
            else if(chk_type[pp] == 1)
                printf("\nInt variable .. Value is : %d\n",str_val[pp]),$$ = str_val[pp];
            else if(chk_type[pp] == 2)
                printf("\nStrig variable .. Value is : %s\n",get_str[pp]);
            else
                printf("\nFloat variable .. Value is : %f\n",fl_val[pp]),$$ = (int)fl_val[pp];    
            
        }
        |
        VAR'+''+'';'{
            sh2 printf("\nEnter Var increment statemnet\n");
            int pp;
            pp = get_val($1);
            if(chk_type[pp] == 0)
                printf("\nVariable not declared\n");
            else if(chk_type[pp] == 1)
                str_val[pp]++;
            else if(chk_type[pp] == 2)
                printf("\nString value... cannot be incremented\n");
            else
                fl_val[pp]++;
        }
        |
        VAR'-''-'';'{
            sh2 printf("\nEnter Var decrement statemnet\n");
            int pp;
            pp = get_val($1);
            if(chk_type[pp] == 0)
                printf("\nVariable not declared\n");
            else if(chk_type[pp] == 1)
                str_val[pp]--;
            else if(chk_type[pp] == 2)
                printf("\nString value... cannot be decremented\n");
            else
                fl_val[pp]--;
        }
        |
        fun
        |
        arr
        |
        arr2
        
        ;

arr2 : VAR ':' NUM ':' '=' expression{
        if(chk_arr[get_val($1)] == 0)
        {
            printf("\nArray Not Declared\n");
        }
        else
        {
            set_arr[chk_arr[get_val($1)]][$3] = $6;
            sh2 printf("\nArray assign value is : %d\n",(int)$6);
        }
};


arr : VAR ':' NUM ':' '=' ARR_VAL {
    // printf("arr here : %s\n",$6);


    chk_arr[get_val($1)] = arr_index;
    char s[100];
    strcpy(s,$6);
    int cnt_arr = 0;
	int st = 1;
	char p[5],g[5];
	int index = 0;
	for(int i = 1; i < strlen(s); i++)
	{
		if(s[i] != ',' || s[i] == '}')
		{
			if(s[i] == '}')
			{
				set_arr[arr_index][cnt_arr] = atoi(p);
                cnt_arr++;
            	break;
			}
			p[index] = s[i];
			index++;
		}
		else
		{
			int kk = atoi(p);
			set_arr[arr_index][cnt_arr] = kk;
			cnt_arr++;
			index =0;
			for(int j = 0; j < 5; j++)
				p[j] = g[j];
		}
	}

    if(cnt_arr != $3)
    {
        printf("\nArray didnt defined correctly\n");
    }
    sz_arr[arr_index] = $3;
    arr_index++;

};


fun     : POWER '(' expression ',' expression ')' ';'{
            $$ = (int)pow($3,$5);
            sh2 printf("\nPower statement Result is : %f",$$);
        };

switch1 : SWITCH '(' s_id ')' BS block BE {
            //if(s_val == 0)
            s_val = $3;
            s_cnt++;
            sh printf("S_cnt in switch dec : %d\n",s_cnt);
            sh printf("SWITCH value is : %d",s_main_val);
        }
        ;

block   : caselist {$$ = $1;}
        | caselist deaf { $$ = $2;}
        ;

caselist : caseitem { $$ = $1; }
         | caseitem caselist {$$ = $1;}
         ;

caseitem : CASE NUM ':' '[' statement  BREAK ';' ']' {
                 if($2 == s_val) {
                    s_cnt = 2;
                        sh printf("S_cnt in case dec : %d\n",s_cnt);

                        if((s_main_val == -1000000) && (s_cnt%2 == 0)){
                        s_main_val = $5; }
                        sh printf("value setted----NUM is %d\n\n\n",$2); 
                        s_def = 1;
                    } 
         }
         | CASE NUM ':' statement ';' BREAK ';' {
                if($2 == s_val) {
                    s_cnt = 2;
                    if((s_main_val == -1000000) && (s_cnt%2 == 0)){
                    s_main_val = $4; }
                    sh printf("value setted----NUM is %d\n\n\n",$2);
                     s_def = 1;} 
        };


deaf : DEAF ':' statement ';' BREAK ';' { if(!s_def) s_main_val = $3;};


s_id : NUM { $$ = $1; s_val = $1; sh printf("s_id setted : %d",s_val);};

LOOP    :WHILE '(' NUM '<' NUM ')' BS VAR ';' BE{
            printf("\nWhile Entered\n");
            int i;
            int pp;
            pp = get_val($8);

            for(i = $3; i < $5; i++)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),$$ = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),$$ = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),$$ = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),$$ = (int)fl_val[pp];

            }
            //$$ = (int)$8;
            printf("\nWhile Executed\n");
        }
        | WHILE '(' NUM '>' NUM ')' BS VAR ';' BE{
            printf("\nWhile Entered\n");
            int i;
            int pp;
            pp = get_val($8);
            for(i = $3; i > $5; i--)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),$$ = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),$$ = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),$$ = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),$$ = (int)fl_val[pp];
            }
            //$$ = (int)$8;
            printf("\nWhile Executed\n");
        }
        | WHILE '(' NUM '<''=' NUM ')' BS VAR ';' BE{
            printf("\nWhile Entered\n");
            int i;
            int pp;
            pp = get_val($9);
            for(i = $3; i <= $6; i++)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),$$ = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),$$ = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),$$ = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),$$ = (int)fl_val[pp];
            }
            //$$ = (int)$9;
            printf("\nWhile Executed\n");
        }
        | WHILE '(' NUM '>''=' NUM ')' BS VAR ';' BE{
            printf("\nWhile Entered\n");
            int i;
            int pp;
            pp = get_val($9);
            for(i = $3; i >= $6; i--)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),$$ = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),$$ = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),$$ = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),$$ = (int)fl_val[pp];
            }
            //$$ = (int)$9;
            printf("\nWhile Executed\n");
        }
        | fr in range '(' NUM ',' NUM ',' NUM ')' BS VAR ';' BE{
            printf("\nfor Entered\n");
            int i;
            int pp;
            pp = get_val($12);
            for(int i = $5; i < $7; i += $9)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),$$ = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),$$ = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),$$ = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),$$ = (int)fl_val[pp];
            }
            //$$ = $12;
            printf("\nfor Executed\n");
        }
        | fr in range '(' NUM ',' NUM ')' BS VAR ';' BE{
            printf("\nfor Entered\n");
            int i;
            int pp;
            pp = get_val($10);
            for(i = $5; i < $7; i++)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),$$ = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),$$ = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),$$ = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),$$ = (int)fl_val[pp];

            }
            //$$ = $10;
            printf("\nfor Executed\n");

        }
        | fr in range '('NUM')' BS VAR ';' BE{
            printf("\nfor Entered\n");
            int i;
            int pp;
            pp = get_val($8);
            for(i = 0; i < $5; i++)
            {
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n"),$$ = -2;
                else if(chk_type[pp] == 1)
                    printf("Printing  : %d\n",str_val[pp]),$$ = str_val[pp];
                else if(chk_type[pp] == 2)
                    printf("Printing  : %s\n",get_str[pp]),$$ = -1;
                else
                    printf("Printing  : %f\n",fl_val[pp]),$$ = (int)fl_val[pp];
            }
            //$$ = $8;
            printf("\nfor Executed\n");

        }
        |

        WHILE '(' NUM '<' NUM ')' BS statement BE{
            printf("\nWhile Entered\n");
            int i;
            for(i = $3; i < $5; i++)
            {
                printf("Printing  : %d\n",$8);
            }
            $$ = $8;
            printf("\nWhile Executed\n");
        }
        | WHILE '(' NUM '>' NUM ')' BS statement BE{
            printf("\nWhile Entered\n");
            int i;
            for(i = $3; i > $5; i--)
            {
                printf("Printing  : %d\n",$8);
            }
            $$ = $8;
            printf("\nWhile Executed\n");
        }
        | WHILE '(' NUM '<''=' NUM ')' BS statement BE{
            printf("\nWhile Entered\n");
            int i;
            for(i = $3; i <= $6; i++)
            {
                printf("Printing  : %d\n",$9);
            }
            $$ = $9;
            printf("\nWhile Executed\n");
        }
        | WHILE '(' NUM '>''=' NUM ')' BS statement BE{
            printf("\nWhile Entered\n");
            int i;
            for(i = $3; i >= $6; i--)
            {
                printf("Printing  : %d\n",$9);
            }
            $$ = $9;
            printf("\nWhile Executed\n");
        }
        | fr in range '(' NUM ',' NUM ',' NUM ')' BS statement BE{
            printf("\nfor Entered\n");
            int i;
            for(int i = $5; i < $7; i += $9)
            {
                printf("For statement : %d\n", $12);
            }
            $$ = $12;
            printf("\nfor Executed\n");

        }
        | fr in range '(' NUM ',' NUM ')' BS statement BE{
            printf("\nfor Entered\n");
            int i;
            for(i = $5; i < $7; i++)
            {
                printf("For statement : %d\n", $10);
            }
            $$ = $10;
        }
        | fr in range '('NUM')' BS statement BE{
            printf("\nfor Entered\n");
            int i;
            for(i = 0; i < $5; i++)
            {
                printf("For single statemnet : %d\n",$8);
            }
            $$ = $8;
            printf("\nfor Executed\n");

        }
        ;




ifelse  : IF '(' condition1 ')' BS statement BE ELSEIF '(' condition1 ')' BS statement BE ELSE BS statement BE{

            if($3)
            {
                printf("IF ELSE EXECUTED : IF :==>> %d\n",$3);
                $$ = $6;
            }
            else if($10)
            {
                printf("IF ELSE EXECUTED : ELSE IF :==>> %d",$10);
                $$ = $13;
            }
            else
            {
                printf("IF ELSE EXECUTED : ELSE :==>> %d",$17);
                $$ = $17;
            }


        }
        | IF '(' condition1 ')' BS statement BE ELSE BS statement BE{
            if($3)
            {
                printf("IF ELSE EXECUTED : IF :==>> %d\n",$3);
                $$ = $6;
            }
            else
            {
                printf("IF ELSE EXECUTED : ELSE :==>> %d",$10);
                $$ = $10;
            }
        }
        | IF '(' condition1 ')' BS statement BE{
            if($3){
                printf("IF EXECUTED WITH VALUE : %d and statement value is : %d\n",$3,$6);
            }
            else{
                printf("if not executed\n");
            }
        }
        
        ;


declaration  : INT VAR1 {sh printf("\nStatement of INT\n"); };
declaration1 : CHAR VARR1{sh printf("\nStatement of CHAR"); };
declaration2 : FLOAT VARR2{sh printf("\nStatement of float"); };

condition1 : condition1 '&' condition { $$ = $1 && $3; }
           | condition1 '|' condition { $$ = $1 && $3; }
           | condition
           ;



expression : VAR_fl{sh printf("\nNumber fl:  %f\n",$1 ); $$ = $1;sh printf("\nNumber fl:  %f\n",$$);} 
           | NUM {sh printf("\nNumber in:  %d\n",$1 ); $$ = (float)$1;  }
           | VAR  { 
                sh printf("\nEnterd only variable\n"); 
                int pp;
                pp = get_val($1);
                if(chk_type[pp] == 0)
                    printf("\nNOT DECLARED VARIABLE\n");
                else if(chk_type[pp] == 1)
                    $$ = (float)str_val[pp];
                else if(chk_type[pp] == 3)
                    $$ = fl_val[pp];
           } 
           | expression '+' expression{sh printf("\nenterd exp + exp \n"); $$ = (float)($1 + $3); }
           | expression '-' expression{sh printf("\nenterd exp - exp \n"); $$ = (float)($1 - $3); }
           | expression '*' expression{sh printf("\nenterd exp * exp \n"); $$ = (float)($1 * $3); }
           | expression '/' expression{sh printf("\nenterd exp / exp \n"); ($3 == 0) ?  ($$ = 0) :($$ = (float)($1 / $3)); }
           | expression '%' expression{sh printf("\nenterd exp %% exp\n"); $$ = (int)$1%(int)$3;}
           | SIN '(' expression ')' {sh printf("enterd sin\n"); $$ = sin($3*(PI/180));}
           | COS '(' expression ')' {sh printf("enterd cos\n"); $$ = cos($3*(PI/180));}
           | TAN '(' expression ')' {sh printf("enterd tan\n"); $$ = tan($3*(PI/180));}
           | MAX '(' expression ',' expression ')' { sh printf("enterd max\n"); $$ = $3 >= $5 ? $3 : $5; }
           | MIN '(' expression ',' expression ')' { sh printf("enterd min\n"); $$ = $3 <= $5 ? $3 : $5; }
           | GCD '(' expression ',' expression ')' { sh printf("enterd min\n"); $$ = gcd($3,$5); }
           | LCM '(' expression ',' expression ')' { sh printf("enterd min\n"); $$ = lcm($3,$5); }
           | TAKEIN '('')' { 
                    int mmmmm;
                    scanf("%d",&mmmmm);
                    $$ = mmmmm;
            }
           | '(' expression ')' { $$ = $2; }
           | VAR ':'NUM ':'{
               if(chk_arr[get_val($1)] == 0)
               {
                   printf("\nArray Not Declared\n");
                   $$ = -2;
               }
               else
               {
                   if($3 < 0)
                   {
                        int l = chk_arr[get_val($1)];
                        printf("arr size is : %d\n",sz_arr[l]);
                        printf("Arr : ");

                       for(int i = 0; i < sz_arr[l]; i++)
                       {
                           printf("%d ",set_arr[l][i]);
                       }
                       printf("\n");
                       $$ = -1;
                   }
                   else
                   {
                       int p = set_arr[chk_arr[get_val($1)]][$3];
                        $$ = p;
                        printf("\nArray value is : %d\n",p);

                   }
                 
               }
           }
           | VAR ':' NUM ',' NUM ':'{
               if(chk_arr[get_val($1)] == 0)
               {
                   printf("\nArray Not Declared\n");
                   $$ = -2;
               }
               else
               {
                    int l = chk_arr[get_val($1)];
                    printf("Arr : ");
                    for(int i = $3; i < $5; i++)
                    {
                        printf("%d ",set_arr[l][i]);
                    }
                    printf("\n");
               }
               $$ = -3;
           }
           ;


expression2 : VAR_ch{
                 sh printf("\nENterde variable_ch\n");
                 $$ = $1;
            }
            | 
            VAR {
                printf("\nENtered variable statement ch_var\n");
                int pp;
                pp = get_val($1);
                printf("\nVariable_ch is : %s\n",$1);
                if(chk_type[pp] != 2)
                    printf("\nNOT DECLARED VARIABLE2\n");
                else
                {
                    char *ppp;
                    sh printf("\nstrcpy() entering\n");
                    strcpy(ppp,get_str[pp]);
                    sh printf("\nstrcpy() success\n");
                    $$ = ppp;
                }
            };


 VAR1 : VAR1 ',' VAR { sh printf("\nvar : 1\n"); chk_type[get_val($3)] = 1;}
      | VAR { sh printf("\nvar : 2\n");  chk_type[get_val($1)] = 1; }
      ;

VARR1 : VARR1 ',' VAR { sh printf("\ncharvar : 1\n"); chk_type[get_val($3)] = 2; sh printf("chk_type value is: %d",chk_type[get_val($1)]);}
      | VAR { sh printf("\ncharvar : 2\n");  chk_type[get_val($1)] = 2; sh printf("chk_type value is: %d",chk_type[get_val($1)]);}
      ;

VARR2 : VARR2 ',' VAR { sh printf("\nfloatvar : 1\n"); chk_type[get_val($3)] = 3; sh printf("chk_type value is: %d",chk_type[get_val($1)]); }
      | VAR { sh printf("\nfloatvar : 2\n");  chk_type[get_val($1)] = 3; sh printf("chk_type value is: %d",chk_type[get_val($1)]);}
      ;


condition :'(' condition ')' { $$ = (int)$2; }
          | condition '=''=' condition {if((int)$1 == (int)$4){$$ = 1;}else{$$=0;}}
          | condition '>' condition { $$ = (int)$1 > (int)$3; }
          | condition '>''=' condition { $$ = (int)$1 >= (int)$4; }
          | condition '<' condition { $$ = (int)$1 < (int)$3; }
          | condition '<''=' condition { $$ = (int)$1 <= (int)$4; }
          | condition '&' condition { $$ = (int)$1 && (int)$3; }
          | condition '|' condition { $$ = (int)$1 || (int)$3; }
          | expression '>' expression { $$ = (int)$1 > (int)$3; }
          | expression '>''=' expression { $$ = (int)$1 >= (int)$4; }
          | expression '<' expression { $$ = (int)$1 < (int)$3; }
          | expression '<''=' expression { $$ = (int)$1 <= (int)$4; }
          | expression '&' expression { $$ = (int)$1 && (int)$3; }
          | expression '|' expression { $$ = (int)$1 || (int)$3; }
          | expression { $$ = (int)$1; }
          ;
%%

int yywrap() {return 1;}
int yyerror(char const *s) { fprintf(stderr, "%s\n", s);
    return 0;
}

int main(void)
{
    printf("Started : \n");
    freopen("text","r",stdin);
    freopen("out","w",stdout);
    yyparse();

    fclose(stdout);
    fclose(stdin);
    return 0;
}
