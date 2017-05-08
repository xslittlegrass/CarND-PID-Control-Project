#include "PID.h"

//using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double KKp, double KKi, double KKd) {

  Kp = KKp;
  Ki = KKi;
  Kd = KKd;

  p_error = 0.;
  i_error = 0.;
  d_error = 0.;

}

void PID::UpdateError(double cte) {

  p_error = cte;
  i_error += cte;
  d_error = cte - prev_cte;
  prev_cte = cte;

}

double PID::TotalError() {

  return -(Kp*p_error + Ki*i_error + Kd*d_error);
}

