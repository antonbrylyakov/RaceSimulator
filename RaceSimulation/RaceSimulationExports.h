﻿#pragma once

#ifndef _linux_
#ifdef  RACESIMULATION_EXPORTS 
#define RACESIMULATION_API __declspec(dllexport)
#else
#define RACESIMULATION_API __declspec(dllimport)
#endif
#else
#define RACESIMULATION_API
#endif
