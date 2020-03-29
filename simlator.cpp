#include <dummy.h>
String SerialPart= "KTE00017020701";
#define  BOTtoken "298704009:AAHnCd7AAdmzDG6RpwVaAB-VgLe5iqftW0s" 
#define  Update_Bot_interval 3500
#define STOR_DATA "/data/data.bin"
#define DeviceInfo "/data/device.inf"
#define UserData "/data/user.dat"

#define UpdateLink "http://iot.keyno-gc.com/update.php" 
#define UpdateBOT "http://iot.keyno-gc.com/esp.php" 
#define RegiterBOTLink "http://iot.keyno-gc.com/reg.php" 


//#define DEBUG_Serial  // Switch debug output on and off by 1 or 0
#define DEBUG_Serial1
#if defined DEBUG_Serial
  #define PRINT(s)     Serial.print(s)  
  #define PRINTS(s,v)  { Serial.print(s); Serial.println(v); }
  #define PRINTLN(s)   Serial.println(s)   
  #define PRINTF(...) Serial.printf( __VA_ARGS__ )
#elif defined DEBUG_Serial1
  #define PRINT(s)     Serial1.print(s)  
  #define PRINTS(s,v)  { Serial1.print(s); Serial1.println(v); }
  #define PRINTLN(s)   Serial1.println(s)   
  #define PRINTF(...) Serial1.printf( __VA_ARGS__ )  
#else  
  #define PRINT(s)
  #define PRINTS(s,v)
  #define PRINTLN(s)
  #define PRINTF(...)
#endif



#include "app_ini.h"


