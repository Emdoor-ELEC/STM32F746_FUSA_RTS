#include "cmsis_os2.h"                          // CMSIS RTOS header file
#include "Board_LED.h"
/*----------------------------------------------------------------------------
 *      Thread 1 'Thread_Name': Sample thread
 *---------------------------------------------------------------------------*/
 
osThreadId_t tid_Thread;                        // thread id
 
void Thread (void *argument);                   // thread function
 
int Init_Thread (void) {
 
  tid_Thread = osThreadNew(Thread, NULL, NULL);
  if (tid_Thread == NULL) {
    return(-1);
  }
 
  return(0);
}
 
void Thread (void *argument) {
 
  while (1) {
    ; // Insert thread code here...
    LED_Off(0);
		osDelay(1000);
		
		LED_On(0);
		osDelay(1000);
		
		
		osThreadYield();                            // suspend thread
  }
}
