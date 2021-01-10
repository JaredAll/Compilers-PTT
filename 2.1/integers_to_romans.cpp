#include <iostream>

using namespace std;

void digit( int input );

void digit_prime( int input );

void parse( int input );

int main()
{
  while( true )
  {
    int input;
    cin >> input;
    parse( input );
  }
}

void parse( int input )
{
  if( input > 0 && input < 10 )
  {
    digit( input );
    cout << endl;
  }
  else if( input >= 10 && input <= 50 )
  {
    digit_prime( input / 10 );
    digit( input % 10 );
    cout << endl;
  }
  else
  {
    cout << "out of bounds";
    cout << endl;
  }
}

void digit( int input )
{
  string output;
  switch( input )
  {
  case 1:
    output = "I";
    break;
  case 2:
    output = "II";
    break;
  case 3:
    output = "III";
    break;
  case 4:
    output = "IV";
    break;
  case 5:
    output = "V";
    break;
  case 6:
    output = "VI";
    break;
  case 7:
    output = "VII";
    break;
  case 8:
    output = "VIII";
    break;
  case 9:
    output = "IX";
    break;
  default:
    output = "";
    break;
  }

  cout << output;
}

void digit_prime( int input )
{
  string output;
  switch( input )
  {
  case 1:
    output = "X";
    break;
  case 2:
    output = "XX";
    break;
  case 3:
    output = "XXX";
    break;
  case 4:
    output = "XL";
    break;
  case 5:
    output = "L";
    break;
  default:
    output = "";
    break;
  }  

  cout << output;
}
