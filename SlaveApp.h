/*
 * SlaveApp.h
 *
 *  Created on: Aug 8, 2021
 *  Copy of inet/applications/udpapp/UdpBasicBurst.h
 *
 */

#ifndef __INET_SLAVEAPP_H_
#define __INET_SLAVEAPP_H_

#include <map>
#include <vector>

#include "inet/common/INETDefs.h"

#include "inet/applications/udpapp/UdpBasicBurst.h"

namespace inet {

/**
 * UDP application. See NED for more info.
 */
class SlaveApp : public UdpBasicBurst
{
  public:
    cModule *test;
    void transferSP(double SendProb);
    double SPval;
    static int sseed;

  protected:
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void initialize(int stage) override;
    virtual void generateBurst() override;
    virtual int bernoulli_choice(double p, int &seed);
};
} // namespace inet


#endif /* SLAVEAPP_H_ */
