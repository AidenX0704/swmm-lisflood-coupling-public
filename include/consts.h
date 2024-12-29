#ifndef CONSTS_H
#define CONSTS_H

//------------------
// General Constants
//------------------

constexpr int VERSION = 10000;
constexpr int MAGICNUMBER = 516114522;
constexpr int EOFMARK = 0x1A;            // Use 0x04 for UNIX systems
constexpr int MAXTITLE = 3;              // Max. # title lines
constexpr int MAXMSG = 1024;             // Max. # characters in message text
constexpr int MAXLINE = 1024;            // Max. # characters per input line
constexpr int MAXFNAME = 259;            // Max. # characters in file name
constexpr int MAXTOKS = 40;              // Max. items per line of input
constexpr int MAXSTATES = 10;            // Max. # computed hyd. variables
constexpr int MAXODES = 4;               // Max. # ODE's to be solved
constexpr int NA = -1;                   // NOT APPLICABLE code
constexpr int TRUE = 1;                  // Value for TRUE state
constexpr int FALSE = 0;                 // Value for FALSE state
constexpr double BIG = 1.E10;            // Generic large value
constexpr double TINY = 1.E-6;           // Generic small value
constexpr double ZERO = 1.E-10;          // Effective zero value
constexpr double MISSING = -1.E10;       // Missing value code
constexpr double PI = 3.141592654;       // Value of pi
constexpr double GRAVITY = 32.2;         // accel. of gravity in US units
constexpr double SI_GRAVITY = 9.81;      // accel of gravity in SI units

//-----------------------------
// Units factor in Manning Eqn.
//-----------------------------
constexpr double PHI = 1.486;

//----------------------------------------------
// Definition of measureable runoff flow & depth
//----------------------------------------------
constexpr double MIN_RUNOFF_FLOW = 0.001;    // cfs
constexpr double MIN_EXCESS_DEPTH = 0.0001;  // ft, = 0.03 mm  <NOT USED>
constexpr double MIN_TOTAL_DEPTH = 0.004167; // ft, = 0.05 inches
constexpr double MIN_RUNOFF = 2.31481e-8;    // ft/sec = 0.001 in/hr

//----------------------------------------------------------------------
// Minimum flow, depth & volume used to evaluate steady state conditions
//----------------------------------------------------------------------
constexpr double FLOW_TOL = 0.00001;  // cfs
constexpr double DEPTH_TOL = 0.00001; // ft    <NOT USED>
constexpr double VOLUME_TOL = 0.01;   // ft3   <NOT USED>

//---------------------------------------------------
// Minimum depth for reporting non-zero water quality
//---------------------------------------------------
// constexpr double MIN_WQ_DEPTH = 0.01;   // ft (= 3 mm)
// constexpr double MIN_WQ_FLOW = 0.001;   // cfs

//-----------------------------------------------------
// Minimum flow depth and area for dynamic wave routing
//-----------------------------------------------------
constexpr double FUDGE = 0.0001;    // ft or ft2

//---------------------------
// Various conversion factors
//---------------------------
constexpr double GPMperCFS = 448.831;
constexpr double AFDperCFS = 1.9837;
constexpr double MGDperCFS = 0.64632;
constexpr double IMGDperCFS = 0.5382;
constexpr double LPSperCFS = 28.317;
constexpr double LPMperCFS = 1699.0;
constexpr double CMHperCFS = 101.94;
constexpr double CMDperCFS = 2446.6;
constexpr double MLDperCFS = 2.4466;
constexpr double M3perFT3 = 0.028317;
constexpr double LperFT3 = 28.317;
constexpr double MperFT = 0.3048;
constexpr double PSIperFT = 0.4333;
constexpr double KPAperPSI = 6.895;
constexpr double KWperHP = 0.7457;
constexpr double SECperDAY = 86400;
constexpr double MSECperDAY = 8.64e7;
constexpr double MMperINCH = 25.40;

//---------------------------
// Token separator characters
//---------------------------
constexpr const char* SEPSTR = " \t\n\r";

#endif //CONSTS_H
