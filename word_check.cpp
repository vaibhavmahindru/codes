#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{

           ifstream f;

           string word;

           string check;

           cout<<"Enter a word to count:";

           cin>>check;

           int counter=0;

           f.open("  ");/*enter the path of file in which you want to 		   check the word*/

           while(f>>word)

           {

                     if(word.compare(check)==0)

                                counter++;

           }

           cout<<"Occurrance : "<<counter<<endl;

           f.close();

           return 0;

}
