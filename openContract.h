//# include "bits/io/stellar.h"
//# include "bits/io/stellar_smart_contract.h"
//# include <iostream>

#define STRAT_POINT 0
#define STRAT_END_POINT 1

class OpenCall{
    
    public:
      std::string walletAddress;
      std::string contractAddress;
      std::string blockConfirmation;
      int confirmationId;
      unsigned int confirmationRelay;
};