_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ CS-202 PROJECT _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

								By : Aniket Kumar Sahil
								     2022CSB1067

>> The folder contains 5 files : 
	<> cucu.l
	<> cucu.y
	<> Sample1.cu
	<> Sample2.cu
	<> read_me.txt

<o> Sample1.cu : Contains C code with correct syntax
<o> Sample2.cu : Contains C code with incorrect syntax
	{You can modify them as per your wish}

[Note : You can change the input file by changing the filename in line:154 of cucu.y]

>> To run the program, open the terminal in the corresponding directory 
   and Enter the following commands to run the program :
        1. flex cucu.l
        2. bison -d cucu.y
        3. gcc cucu.tab.c lex.yy.c -lfl
        4. ./a.out


>> If the syntax of the code is correct, it will generate 2 files, lexer.txt 
   and parser.txt
		
	<> lexer.txt  : Contains all the tokens present in the code
	<> parser.txt : Contains parsed and printed statements and steps.


>> If the syntac is incorrect, it will display the message "Syntax Error" in
   the terminal. However, it will generate lexer.txt and parser.txt files of
   the corresponding code till its correct.