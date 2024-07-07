# CS-202 PROJECT

By : Aniket Kumar Sahil<br />
2022CSB1067<br />

 The folder contains 5 main files : <br />
> cucu.l<br />
> cucu.y<br />
> Sample1.cu<br />
> Sample2.cu<br />
> read_me.txt<br />

 Sample1.cu : Contains C code with correct syntax<br />
 Sample2.cu : Contains C code with incorrect syntax<br />
	{You can modify them as per your wish}

>[Note : You can change the input file by changing the filename in line:154 of cucu.y]<br />

 To run the program, open the terminal in the corresponding directory 
   and Enter the following commands to run the program :<br />
> 1. flex cucu.l<br />
> 2. bison -d cucu.y<br />
> 3. gcc cucu.tab.c lex.yy.c -lfl<br />
> 4. ./a.out<br />


If the syntax of the code is correct, it will generate 2 files, lexer.txt 
   and parser.txt
		
 lexer.txt  : Contains all the tokens present in the code
 parser.txt : Contains parsed and printed statements and steps.


 If the syntac is incorrect, it will display the message "Syntax Error" in
   the terminal. However, it will generate lexer.txt and parser.txt files of
   the corresponding code till its correct.
