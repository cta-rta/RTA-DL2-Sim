/*
 ==========================================================================
 RTA-DL2-Sim C++ https://github.com/ASTRO-EDU/RTA-DL2-Sim

 Copyright (C) 2018 Giancarlo Zollino

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.

 ==========================================================================
*/

#include "HillasParametersGenerator.h"

using namespace std;

HillasParametersGenerator::HillasParametersGenerator()
{

}

double HillasParametersGenerator::randomNumberGenarator() {

  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine generator (seed);

  normal_distribution<double> distribution (5.0,2.0);

  return distribution(generator);;

}
