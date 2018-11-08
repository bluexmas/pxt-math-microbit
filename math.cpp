#include "pxt.h"

//% color=50 weight=80
//% icon="\uf1eb"
namespace MATH { 

  /**
  * button pushed.
  */
  //% blockId=math_sum
  //% block="%sum = %src1 + %src2"
  int sum(int src1, int src2) {
      return src1 + src2;
  }
}