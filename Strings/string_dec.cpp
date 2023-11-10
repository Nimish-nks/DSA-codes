#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
//string is character array with delimiter as '/0' called null character, string terminator, only in C or C++
//In JAva, size of string is known by it's length

char name[5]={'j','o','h','n','\0'};
char name2[]={'j','o','h','n','\0'};
//char inp[5];
char name3[]="John";


printf("%s", name); //note while printing int array u need to use loops

//read string

scanf("%s",name3);
//no need to type /0 from keyboard, can read only one word

//fgets(inp);
//to make it read all words until you hit enter


cout<<endl<<name2;
cout<<endl<<name3;

return 0;
}