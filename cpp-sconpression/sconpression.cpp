/*sconpression.cpp*/
/*programmer : Hunter M.*/
/*additional note : praise the Lord for my code*/

#include "sconpression.h"

int g_nSconpressionId = 0;//sconpression count
bool g_bSconpressed = false; //is sconpressed ???
int g_nSconpressedPicHeight = 0;
int g_nSconpressedPicWidth = 0;
bool g_bCompressPic = false;

/*picture file*/
unsgined char ** g_pPic = nullptr;

/*Constructor*/
Sconpression::Sconpression()
{
  g_nSconpressionId = 0;
  g_nSconpressedPicHeight = 0;
  g_nSconpressedPicWidth = 0;
  g_bSconpressed = false;
  g_bCompressPic = false;
}

/*Deconstruction*/
Sconpression::~Sconpression()
{
}

/*running print message*/
const char* SconpressionPrintF(){
  return  "Sconpression Tool Is Running...\n";
}

/*return pic file*/
unsigned char** HandlePic(){
  return g_pPic;
}
