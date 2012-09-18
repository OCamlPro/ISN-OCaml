// Ces programmes sont sous licence CeCILL-B V1.
#include "lib_mot_moway.h"             
#include "lib_sen_moway.h"            

void main() {
  SEN_CONFIG();
  MOT_CONFIG();
  LED_TOP_GREEN_ON_OFF();
  MOT_STR(50,FWD,TIME,0);
  while (1) {
    if (SEN_OBS_DIG(OBS_CENTER_L)){
      LED_FRONT_ON();
      MOT_ROT(25,FWD,CENTER,LEFT,ANGLE,50) ;
      while(!MOT_END){}
      MOT_STR(50,FWD,TIME,0);}       
    else {
      LED_FRONT_OFF();}}}
