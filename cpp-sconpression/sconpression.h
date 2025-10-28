/*sconpression.h*/
/*programmer : Hunter M.*/
/*additional note : I praise the Lord for my code, not me*/

#ifndef _SCONPRESSION_H_
#define _SCONPRESSION_H_

#define SCONPRESSION_VERSION "1.0"

class Sconpression {
public:
  Sconpression();
  ~Sconpression();

  /*sconpression version info print, calls the version macro*/
  const auto _scnprs_str_info = SCONPRESSION_VERSION;
};

#endif
