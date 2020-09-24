#include "Choice.h"
#include <iostream>
using namespace std;
Choice::Choice(int i)
{
   type=i;

}
bool Choice::Verifier(int i)
{
    if(i!=1||i!=2) return 0;
    else return 1;
}

void Choice::lire()
{
  int i;
  cin>>i;
  if(Verifier(i)) type=i;
  else type=1;

}
int Choice::retournerType()
{
    return type;
}
