//---- Version
const double    version           = 0.64750;      // changes: WiFiManager
//---- Pin code
const uint16_t  robiPinCode       = 1881;
//---- Debugging settings
const int       baudrate          = 115200;
const byte      debugMode         = 1;            // 0 = off, 1 = moderate debug messages, 2 = all debug messages
const boolean   onBoardLED        = true;         // (de)activates the usage of the onboard LED
//---- Analog value stuff
const double    baseFor1V         = 329.9479166;
const double    faktorBat         = 9.322916;
//---- Rain
const int       rainingDelay      = 20;           // in minutes delay after rain has been detected
//---- Admin values
const short     maxBatHistValues  = 400;          // represents the max width of the statistic svg's
const short     maxLogEntries     = 50;
const short     maxLogLength      = 130;
//---- Static webpage elements
const char      g_cssBody[]       = "body{background-color:#ccc;font-family:Arial,Helvetica,Sans-Serif;Color:#000088;}";
const char      g_cssButton[]     = "button{width:200px;height:48px;border-radius:12px;border:none;font-size:16px;background-color:#008CBA;color:white}.big{height:72px}";
