// Ces programmes sont sous licence CeCILL-B V1.
#include "lib_mot_moway.h"             
#include "lib_sen_moway.h"            

void main () {
  Delay10KTCYx(200);
  SEN_CONFIG();
  MOT_CONFIG();
  while(1) {
    if (SEN_LINE_DIG(LINE_L)==0 && SEN_LINE_DIG(LINE_R)==1) {
      MOT_STR(80,FWD,TIME,0);}
    else {
      if (SEN_LINE_DIG(LINE_L)==0 && SEN_LINE_DIG(LINE_R)==0)  {
        MOT_ROT(50,FWD,CENTER,RIGHT,TIME,0);}
      else {
        if (SEN_LINE_DIG(LINE_L)==1 && SEN_LINE_DIG(LINE_R)==1)  {
          MOT_ROT(50,FWD,CENTER,LEFT,TIME,0);}
        else {
          MOT_ROT(50,FWD,CENTER,RIGHT,TIME,0);}}}}}

