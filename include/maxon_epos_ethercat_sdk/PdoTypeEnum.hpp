/*
** Copyright (2020-2021) Robotics Systems Lab - ETH Zurich:
** Linghao Zhang, Jonas Junger, Lennart Nachtigall
**
** This file is part of the maxon_epos_ethercat_sdk.
** The maxon_epos_ethercat_sdk is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** The maxon_epos_ethercat_sdk is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with the maxon_epos_ethercat_sdk. If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

#include <cstdint>
#include <ostream>

namespace maxon
{
// different RxPdo Types
enum class RxPdoTypeEnum : int8_t
{
  NA = 0,
  RxPdoStandard,
  RxPdoCSP,
  RxPdoCST,
  RxPdoCSV,
  RxPdoCSTCSP,
  RxPdoCSTCSPCSV,
  RxPdoPVM
};

// different TxPdo Types
enum class TxPdoTypeEnum : int8_t
{
  NA = -128,
  TxPdoStandard,
  TxPdoCSP,
  TxPdoCST,
  TxPdoCSV,
  TxPdoCSTCSP,
  TxPdoCSTCSPCSV,
  TxPdoPVM
};

}  // namespace maxon

std::ostream& operator<<(std::ostream& os, const maxon::TxPdoTypeEnum& txPdoTypeEnum);
std::ostream& operator<<(std::ostream& os, const maxon::RxPdoTypeEnum& rxPdoTypeEnum);
