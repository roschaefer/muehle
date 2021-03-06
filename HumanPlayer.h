#ifndef _HUMANPLAYER_H
#define _HUMANPLAYER_H

// Define player ID of the human player, default is 1
#define HUMAN_PLAYER_ID 1

#include <iostream>
#include "Player.h"

using namespace std;

class HumanPlayer : public Player {

  public:
  // Constructor
  HumanPlayer();

  // Getters
  int getID();
};

#endif // _HUMANPLAYER_H
