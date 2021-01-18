%{
%}

delim [ \t\n]
ws {delim}+
text [^ \t\n]
%option noyywrap

%%

{ws} { output( " " ); }
{text} { output( yytext ); }

%%

int main()
{
    yylex();
    return 0;
}

void output( char* text )
{
    printf( "%s", text );
}
