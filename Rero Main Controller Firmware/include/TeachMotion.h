/*******************************************************************************
 * Functions for teaching motion file.
 *
 * Company: Cytron Technologies Sdn Bhd
 * Website: http://www.cytron.com.my
 * Email:   support@cytron.com.my
 *******************************************************************************/

#ifndef TEACHMOTION_H
#define	TEACHMOTION_H



/*******************************************************************************
 * PUBLIC FUNCTION PROTOTYPES
 *******************************************************************************/

void vStartTeaching(void);
void vTeachAddPosition(char *szSelectedFileName);
void vTeachTurnOffServoLed(void);
void vTeachTurnOnSubPcb(void);
void vTeachTurnOffSubPcb(void);



#endif	/* TEACHMOTION_H */
