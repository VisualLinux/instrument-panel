#include <stdio.h>
#include "simvarDefs.h"

const char* SimVarDefs[][2] = {
    { "Plane Altitude", "feet" },
    { "Kohlsman Setting Hg", "inHg" },
    { "Attitude Indicator Pitch Degrees", "degrees" },
    { "Attitude Indicator Bank Degrees", "degrees" },
    { "Airspeed Indicated", "knots" },
    { "Airspeed Mach", "mach" },
    { "Airspeed True Calibrate", "degrees" },
    { "Plane Heading Degrees Magnetic", "degrees" },
    { "Vertical Speed", "feet per second" },
    { "Turn Indicator Rate", "radians per second" },
    { "Turn Coordinator Ball", "position" },
    { "Elevator Trim Position", "degrees" },
    { "Flaps Num Handle Positions", "number" },
    { "Flaps Handle Index", "number" },
    { "Zulu Time", "seconds" },
    { "Local Time", "seconds" },
    { "Absolute Time", "seconds" },
    { "Electrical Battery Bus Voltage", "volts" },
    { "Ambient Temperature", "celsius" },
    { "General Eng Rpm:1", "rpm" },
    { "Eng Rpm Animation Percent:1", "percent" },
    { "General Eng Elapsed Time:1", "hours" },
    { "Fuel Tank Left Main Level", "percent" },
    { "Fuel Tank Right Main Level", "percent" },
    { "Nav Obs:1", "degrees" },
    { "Nav Radial Error:1", "degrees" },
    { "Nav Glide Slope Error:1", "degrees" },
    { "Nav ToFrom:1", "enum" },
    { "Nav Gs Flag:1", "bool" },
    { "Nav Obs:2", "degrees" },
    { "Nav Radial Error:2", "degrees" },
    { "Nav ToFrom:2", "enum" },
    { "Adf Radial:1", "degrees" },
    { "Adf Card", "degrees" },
    { "Com Active Frequency:1", "mhz" },
    { "Com Standby Frequency:1", "mhz" },
    { "Nav Active Frequency:1", "mhz" },
    { "Nav Standby Frequency:1", "mhz" },
    { "Com Active Frequency:2", "mhz" },
    { "Com Standby Frequency:2", "mhz" },
    { "Nav Active Frequency:2", "mhz" },
    { "Nav Standby Frequency:2", "mhz" },
    { "Adf Active Frequency:1", "khz" },
    { "Adf Standby Frequency:1", "khz" },
    { "Atc Id", "string64" },
    { "Atc Airline", "string64" },
    { "Atc Flight Number", "string8" },
    { "Atc Heavy", "bool" },
    { "Title", "string256" },
    { NULL, NULL }
};

WriteDef WriteDefs[] = {
    { DEF_WRITE_TRIM_FLAPS, "Elevator Trim Position" },
    { DEF_WRITE_TRIM_FLAPS, "Flaps Handle Index" },
    { DEF_READ_ALL, NULL }
};
