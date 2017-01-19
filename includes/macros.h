/*
 * macros.h
 *
 * Created 12 Jan 2017
 *
 * Macros file
 *
 */

#ifndef _MACROS_H_
#define _MACROS_H_

#include <stdio.h>

#ifndef NULL
#define NULL 0
#endif

#define SHOULD_ROBOT_BECOME_SENTIENT false
#define CHANCE_OF_BECOMING_SKYNET 0
#define NUMBER_OF_LASERS LLONG_MAX //note - must be stored in long long

//#ifdef ENABLE_ERROR
//#define log_err(message,...) printf("[ERROR]: (%s,%d) - " message "\n",__FILE__,__LINE__,##__VA_ARGS__)
//#else
//#define log_err(message,...)
//#endif
//
//#ifdef ENABLE_WARN
//#define log_warn(message,...) printf("[WARN]: (%s,%d) - " message "\n",__FILE__,__LINE__,##__VA_ARGS__)
//#else
//#define log_warn(message,...)
//#endif
//
//#ifdef ENABLE_INFO
//#define log_info(message,...) printf("[INFO]: (%s,%d) - " message "\n",__FILE__,__LINE__,##__VA_ARGS__)
//#else
//#define log_info(message,...)
//#endif
//
//#ifdef ENABLE_TEST
//#define log_test(message,...) printf("[TEST]: (%s,%d) - " message "\n",__FILE__,__LINE__,##__VA_ARGS__)
//#else
//#define log_test(message,...)
//#endif

//Commenting out default logging stuff. For now?


#endif /* INCLUDES_MACROS_H_ */
