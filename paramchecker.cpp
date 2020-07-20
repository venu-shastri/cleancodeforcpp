#include "paramchecker.h"

bool isBPMOk(float bpm)
{
  if(bpm < 70 || bpm > 150) {
    return false;
  } else
    return true;
}

bool isspo2Ok(float spo2)
{
  if(spo2 < 80) {
    return false;
  } else
    return true;
}

bool isrespRateOk(float respRate )
{
  if(respRate < 30 || respRate > 60) {
    return false;
  } else
  return true;
}
  
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  //int i;
    auto returnVal = isBPMOk(bpm) && isspo2Ok(spo2) && isrespRateOk(respRate);
      return returnVal;
   
}
