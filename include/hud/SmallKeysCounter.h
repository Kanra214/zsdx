/*
 * Copyright (C) 2009 Christopho, Zelda Solarus - http://www.zelda-solarus.com
 * 
 * Zelda: Mystery of Solarus DX is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Zelda: Mystery of Solarus DX is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef ZSDX_SMALL_KEYS_COUNTER_H
#define ZSDX_SMALL_KEYS_COUNTER_H

#include "Common.h"
#include "hud/HudElement.h"

/**
 * This class displays the small key counter and its icon
 * when the small keys are enabled in the current map.
 */
class SmallKeysCounter: public HudElement {

 private:

  Equipment *equipment;
  
  SDL_Surface *img_icon;
  Counter *counter;
  
 public:

  SmallKeysCounter(Equipment *equipment, int x, int y);
  ~SmallKeysCounter(void);
  
  void update(void);
  void rebuild(void);
};

#endif

