#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;


void process(string input);

int main(int argc, char* argv[])
{
  string input= argv[1];
  
  process(input);
  

}


void process(string input)
{

  //cout << "input string: " << input << endl;
  for( int i = 0; i < input.size(); i++)
    {
      if(isalpha(input[i]))
      {
	input[i] = '0';
	process(input);

	input[i] ='1';	
      }
	
      
    }
  cout <<  input << endl;

}
