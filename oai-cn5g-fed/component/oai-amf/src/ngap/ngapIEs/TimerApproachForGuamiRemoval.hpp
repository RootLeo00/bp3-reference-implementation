/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef _TIMER_APPROACH_FOR_GUAMI_REMOVAL_H_
#define _TIMER_APPROACH_FOR_GUAMI_REMOVAL_H_

extern "C" {
#include "Ngap_TimerApproachForGUAMIRemoval.h"
}

namespace ngap {

class TimerApproachForGuamiRemoval {
 public:
  TimerApproachForGuamiRemoval();
  virtual ~TimerApproachForGuamiRemoval();

  void set(e_Ngap_TimerApproachForGUAMIRemoval value);
  bool get(long& value) const;

  bool encode(Ngap_TimerApproachForGUAMIRemoval_t&) const;
  bool decode(Ngap_TimerApproachForGUAMIRemoval_t);

 private:
  long value_;
};

}  // namespace ngap

#endif
