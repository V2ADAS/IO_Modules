/* example for Warning module*/
/************************************************************************************/

/* Declare global structs in header file*/
struct WarningData
{
    BackwardTooCloseLimt_mm
    .
    .
    .
    SensorData
}

struct SensorData_mm
{
    FrontDistance_mm
    BackDistance_mm
    .
    .
}

/* define local Variables*/
struct WarningData W_internal_data;
//use map functions to fill W_internal_data

/*Define exported functions*/
W_SetBackwardLimits(TooCloseLimit_mm, closeLimit_mm, SafeLimit)
W_SetForwardLimits(TooCloseLimit_mm, closeLimit_mm, SafeLimit)
W_SetRightLeftLimits(TooCloseLimit_mm, closeLimit_mm, SafeLimit)

W_CheckBackwardDirection(WarningDataPTR*)
W_CheckForwardDirection(WarningDataPTR*)
W_CheckLeftDirection(WarningDataPTR*)
W_CheckRightDirection(WarningDataPTR*)

/*Define local static functions*/
.
.
