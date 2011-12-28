#ifndef __CONSTANTS_H
#define __CONSTANTS_H

#define CONTROLLER_COUNT 2
#define CONTROLLER_FIND_SECONDS 5

#define DEFAULT_ABOVE_TV 0
#define DEFAULT_ASPECT 4.0/3.0
#define DEFAULT_NEAR_PLANE 0.05
#define DEFAULT_FAR_PLANE 100.0

#define PI 3.14159265

// (PI / 4) / 1024
#define RADIANS_PER_PIXEL 0.00076699039306640625

// Sensor bar width in mm
// Wireless
//#define DOT_DISTANCE 260
// Goggles
#define DOT_DISTANCE 175

// Screen height in mm
// 37" Vizio
//#define HT_SCREEN_HEIGHT 470
// Toshiba M400
#define HT_SCREEN_HEIGHT 185

#define HT_X_SCALING 2
#define HT_Y_SCALING 2

#define HT_MAX_FOVX 160.0f
#define HT_MAX_FOVY 160.0f

#endif
