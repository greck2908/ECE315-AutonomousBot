#include "../include/fonts.h"

/* Character bitmaps for Courier New 10pt */

const uint8_t courierNew_10ptBitmaps[] = 
{
	/* @0 ' ' (10 pixels wide) */
	//           
	//         
	//         
	//         
	//         
	//        
	//       
	//           
	//        
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
	/* @0 '!' (10 pixels wide) */
	//           
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//           
	//     ##    
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @20 '"' (10 pixels wide) */
	//           
	//    # #    
	//    # #    
	//    # #    
	//    # #    
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x00, 0x1E, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @40 '#' (10 pixels wide) */
	//           
	//   ## ##   
	//   ## ##   
	//   ## ##   
	//  #######  
	//   ## ##   
	//  #######  
	//   ## ##   
	//   ## ##   
	//   ## ##   
	//           
	//           
	//           
	0x00, 0x50, 0xFE, 0xFE, 0x50, 0xFE, 0xFE, 0x50, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 

	/* @60 '$' (10 pixels wide) */
	//     #     
	//    #####  
	//   ##   #  
	//   ##      
	//   #####   
	//     ####  
	//   #   ##  
	//   #   ##  
	//   #####   
	//     #     
	//     #     
	//           
	//           
	0x00, 0x00, 0xDC, 0x1E, 0x33, 0x32, 0xF2, 0xE6, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x07, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @80 '%' (10 pixels wide) */
	//           
	//    ##     
	//   #  #    
	//   #  #    
	//    ## ##  
	//   ## ##   
	//     #  #  
	//     #  #  
	//      ##   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x2C, 0x32, 0xD2, 0x2C, 0x30, 0xD0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @100 '&' (10 pixels wide) */
	//           
	//    ####   
	//   ##      
	//   ##      
	//   ##      
	//   ### ##  
	//  ## ###   
	//  ##  ##   
	//   ######  
	//           
	//           
	//           
	//           
	0x00, 0xC0, 0xFC, 0x3E, 0x62, 0xC2, 0xE2, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @120 ''' (10 pixels wide) */
	//           
	//     #     
	//     #     
	//     #     
	//     #     
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @140 '(' (10 pixels wide) */
	//           
	//      #    
	//     ##    
	//     #     
	//    ##     
	//    ##     
	//    ##     
	//    ##     
	//     #     
	//     ##    
	//      #    
	//           
	//           
	0x00, 0x00, 0x00, 0xF0, 0xFC, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 

	/* @160 ')' (10 pixels wide) */
	//           
	//    #      
	//    ##     
	//     #     
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     #     
	//    ##     
	//    #      
	//           
	//           
	0x00, 0x00, 0x00, 0x06, 0xFC, 0xF0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @180 '*' (10 pixels wide) */
	//           
	//     ##    
	//     ##    
	//   ######  
	//    ####   
	//    ####   
	//    #  #   
	//           
	//           
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x08, 0x78, 0x3E, 0x3E, 0x78, 0x08, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @200 '+' (10 pixels wide) */
	//           
	//           
	//     #     
	//     #     
	//     #     
	//  #######  
	//     #     
	//     #     
	//     #     
	//           
	//           
	//           
	//           
	0x00, 0x20, 0x20, 0x20, 0xFC, 0x20, 0x20, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @220 ',' (10 pixels wide) */
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//      ##   
	//      #    
	//     ##    
	//     #     
	//           
	//           
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 

	/* @240 '-' (10 pixels wide) */
	//           
	//           
	//           
	//           
	//           
	//   ######  
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @260 '.' (10 pixels wide) */
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//     ##    
	//     ##    
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @280 '/' (10 pixels wide) */
	//       ##  
	//       ##  
	//      ##   
	//      ##   
	//     ##    
	//     ##    
	//     ##    
	//    ##     
	//    ##     
	//   ##      
	//   ##      
	//           
	//           
	0x00, 0x00, 0x00, 0x80, 0xF0, 0x7C, 0x0F, 0x03, 0x00, 0x00, 
	0x00, 0x00, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @300 '0' (10 pixels wide) */
	//           
	//    ####   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xFC, 0xFE, 0x02, 0x02, 0xFE, 0xFC, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @320 '1' (10 pixels wide) */
	//           
	//     ##    
	//   ####    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//   ######  
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x04, 0x04, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @340 '2' (10 pixels wide) */
	//           
	//    ####   
	//   ##  ##  
	//   ##  ##  
	//       ##  
	//      ##   
	//     ##    
	//    ##     
	//   ######  
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x0C, 0x8E, 0xC2, 0x62, 0x3E, 0x1C, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @360 '3' (10 pixels wide) */
	//           
	//    ####   
	//   #   ##  
	//       ##  
	//     ###   
	//       ##  
	//       ##  
	//   #   ##  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x84, 0x02, 0x12, 0x12, 0xFE, 0xEC, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @380 '4' (10 pixels wide) */
	//           
	//      ##   
	//     ###   
	//     ###   
	//    # ##   
	//   #  ##   
	//   ######  
	//      ##   
	//    #####  
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x60, 0x50, 0x4C, 0xFE, 0xFE, 0x40, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @400 '5' (10 pixels wide) */
	//           
	//    #####  
	//    ##     
	//    ####   
	//    #  ##  
	//       ##  
	//       ##  
	//   #   ##  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x80, 0x1E, 0x0E, 0x0A, 0xFA, 0xF2, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @420 '6' (10 pixels wide) */
	//           
	//     ####  
	//    ##     
	//   ##      
	//   #####   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xF8, 0xFC, 0x16, 0x12, 0xF2, 0xE2, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @440 '7' (10 pixels wide) */
	//           
	//   ######  
	//   #   ##  
	//       ##  
	//      ##   
	//      ##   
	//      ##   
	//     ##    
	//     ##    
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x06, 0x02, 0x82, 0xF2, 0x7E, 0x0E, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @460 '8' (10 pixels wide) */
	//           
	//    ####   
	//   ##  ##  
	//   ##  ##  
	//    ####   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xEC, 0xFE, 0x12, 0x12, 0xFE, 0xEC, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @480 '9' (10 pixels wide) */
	//           
	//    ####   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//    #####  
	//       ##  
	//      ##   
	//   ####    
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x1C, 0x3E, 0x22, 0xA2, 0xFE, 0x7C, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @500 ':' (10 pixels wide) */
	//           
	//           
	//           
	//     ##    
	//     ##    
	//           
	//           
	//     ##    
	//     ##    
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x00, 0x00, 0x98, 0x98, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @520 ';' (10 pixels wide) */
	//           
	//           
	//           
	//      ##   
	//      ##   
	//           
	//           
	//      ##   
	//     ##    
	//     #     
	//           
	//           
	//           
	0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x98, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @540 '<' (10 pixels wide) */
	//           
	//           
	//       ##  
	//      #    
	//    ##     
	//  ##       
	//    ##     
	//      #    
	//       ##  
	//           
	//           
	//           
	//           
	0x00, 0x20, 0x20, 0x50, 0x50, 0x88, 0x04, 0x04, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 

	/* @560 '=' (10 pixels wide) */
	//           
	//           
	//           
	//           
	//  #######  
	//           
	//  #######  
	//           
	//           
	//           
	//           
	//           
	//           
	0x00, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @580 '>' (10 pixels wide) */
	//           
	//           
	//   ##      
	//     #     
	//      ##   
	//        ## 
	//      ##   
	//     #     
	//   ##      
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x04, 0x04, 0x88, 0x50, 0x50, 0x20, 0x20, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @600 '?' (10 pixels wide) */
	//           
	//    ###    
	//   ## ##   
	//      ##   
	//     ###   
	//    ###    
	//    ##     
	//           
	//    ##     
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x04, 0x66, 0x72, 0x3E, 0x1C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @620 '@' (10 pixels wide) */
	//           
	//     ###   
	//    #   #  
	//   #  ###  
	//   # #  #  
	//   # #  #  
	//   #  ###  
	//   #       
	//    #   #  
	//     ###   
	//           
	//           
	//           
	0x00, 0x00, 0xF8, 0x04, 0x32, 0x4A, 0x4A, 0x7C, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 

	/* @640 'A' (10 pixels wide) */
	//           
	//   ####    
	//    ###    
	//   ## ##   
	//   ## ##   
	//   ## ##   
	//  #######  
	//  ##   ##  
	// #### #### 
	//           
	//           
	//           
	//           
	0x00, 0xC0, 0xFA, 0x7E, 0x46, 0x7E, 0xF8, 0xC0, 0x00, 0x00, 
	0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 

	/* @660 'B' (10 pixels wide) */
	//           
	//  ######   
	//   ##  ##  
	//   ##  ##  
	//   #####   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//  ######   
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x12, 0x12, 0xFE, 0xEC, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @680 'C' (10 pixels wide) */
	//           
	//     ####  
	//    ##  #  
	//   ##   #  
	//   ##      
	//   ##      
	//   ##      
	//    ##  #  
	//     ###   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x78, 0xFC, 0x86, 0x02, 0x02, 0x8E, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @700 'D' (10 pixels wide) */
	//           
	//  #####    
	//   ## ##   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ## ##   
	//  #####    
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x02, 0x86, 0xFC, 0x78, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @720 'E' (10 pixels wide) */
	//           
	//  #######  
	//   ##   #  
	//   ## # #  
	//   ####    
	//   ## #    
	//   ##   #  
	//   ##   #  
	//  #######  
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x12, 0x3A, 0x02, 0xCE, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @740 'F' (10 pixels wide) */
	//           
	//  #######  
	//   ##   #  
	//   ## # #  
	//   ####    
	//   ## #    
	//   ##      
	//   ##      
	//  #####    
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x12, 0x3A, 0x02, 0x0E, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @760 'G' (10 pixels wide) */
	//           
	//    #####  
	//   ##   #  
	//   ##   #  
	//   ##      
	//   ## #### 
	//   ##  ##  
	//   ##  ##  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xFC, 0xFE, 0x02, 0x22, 0xE2, 0xEE, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @780 'H' (10 pixels wide) */
	//           
	//  ###  ### 
	//   ##  ##  
	//   ##  ##  
	//   ######  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//  ###  ### 
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x10, 0x10, 0xFE, 0xFE, 0x02, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 

	/* @800 'I' (10 pixels wide) */
	//           
	//   ######  
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//   ######  
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @820 'J' (10 pixels wide) */
	//           
	//   ####### 
	//      ##   
	//      ##   
	//      ##   
	//  ##  ##   
	//  ##  ##   
	//  ##  ##   
	//  #####    
	//           
	//           
	//           
	//           
	0x00, 0xE0, 0xE2, 0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @840 'K' (10 pixels wide) */
	//           
	//  #### ### 
	//   ##  ##  
	//   ## ##   
	//   ####    
	//   #####   
	//   ##  ##  
	//   ##  ##  
	//  ####  ## 
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x32, 0x38, 0xEE, 0xC6, 0x02, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 

	/* @860 'L' (10 pixels wide) */
	//           
	//  ####     
	//   ##      
	//   ##      
	//   ##      
	//   ##      
	//   ##      
	//   ##   #  
	//  #######  
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x02, 0x00, 0x00, 0x80, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @880 'M' (10 pixels wide) */
	//           
	// ###   ### 
	//  ### ###  
	//  ### ###  
	//  ### ###  
	//  ## # ##  
	//  ## # ##  
	//  ##   ##  
	// #### #### 
	//           
	//           
	//           
	//           
	0x02, 0xFE, 0xFE, 0x1C, 0x60, 0x1C, 0xFE, 0xFE, 0x02, 0x00, 
	0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 

	/* @900 'N' (10 pixels wide) */
	//           
	//  ### #### 
	//   ##  ##  
	//   ### ##  
	//   ### ##  
	//   ## ###  
	//   ## ###  
	//   ##  ##  
	//  #### ##  
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x18, 0x62, 0xFE, 0xFE, 0x02, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 

	/* @920 'O' (10 pixels wide) */
	//           
	//    ####   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xFC, 0xFE, 0x02, 0x02, 0xFE, 0xFC, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @940 'P' (10 pixels wide) */
	//           
	//  ######   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   #####   
	//   ##      
	//   ##      
	//  #####    
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x22, 0x22, 0x3E, 0x1C, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @960 'Q' (10 pixels wide) */
	//           
	//    ####   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//    ####   
	//     ## #  
	//     ###   
	//           
	//           
	0x00, 0x00, 0xFC, 0xFE, 0x02, 0x02, 0xFE, 0xFC, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x07, 0x07, 0x05, 0x02, 0x00, 0x00, 

	/* @980 'R' (10 pixels wide) */
	//           
	//  ######   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   #####   
	//   ## ##   
	//   ##  ##  
	//  ####  ## 
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x22, 0x62, 0xFE, 0x9C, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 

	/* @1000 'S' (10 pixels wide) */
	//           
	//    #####  
	//   ##   #  
	//   ##      
	//    ###    
	//     ###   
	//       ##  
	//   #   ##  
	//   #####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x8C, 0x1E, 0x32, 0x32, 0xE2, 0xC6, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1020 'T' (10 pixels wide) */
	//           
	//   ######  
	//   # ## #  
	//   # ## #  
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x0E, 0x02, 0xFE, 0xFE, 0x02, 0x0E, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1040 'U' (10 pixels wide) */
	//           
	//  ###  ### 
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x00, 0x00, 0xFE, 0xFE, 0x02, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1060 'V' (10 pixels wide) */
	//           
	// #### #### 
	//  ##   ##  
	//  ##   ##  
	//   ## ##   
	//   ## ##   
	//   ## ##   
	//    ###    
	//    ###    
	//           
	//           
	//           
	//           
	0x02, 0x0E, 0x7E, 0xF2, 0x80, 0xF2, 0x7E, 0x0E, 0x02, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @1080 'W' (10 pixels wide) */
	//           
	// #### #### 
	//  ##   ##  
	//  ## # ##  
	//  #######  
	//  ### ###  
	//   ## ##   
	//   ## ##   
	//   ## ##   
	//           
	//           
	//           
	//           
	0x02, 0x3E, 0xFE, 0xF2, 0x18, 0xF2, 0xFE, 0x3E, 0x02, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1100 'X' (10 pixels wide) */
	//           
	//  ### #### 
	//   ##  ##  
	//    ####   
	//     ##    
	//     ##    
	//    ####   
	//   ##  ##  
	//  #### ### 
	//           
	//           
	//           
	//           
	0x00, 0x02, 0x86, 0xCE, 0x78, 0x7A, 0xCE, 0x86, 0x02, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 

	/* @1120 'Y' (10 pixels wide) */
	//           
	//  ### #### 
	//   ##  ##  
	//    #  #   
	//    ####   
	//     ##    
	//     ##    
	//     ##    
	//   ######  
	//           
	//           
	//           
	//           
	0x00, 0x02, 0x06, 0x1E, 0xF0, 0xF2, 0x1E, 0x06, 0x02, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @1140 'Z' (10 pixels wide) */
	//           
	//   ######  
	//   #   ##  
	//   #  ##   
	//     ##    
	//     ##    
	//    ##  #  
	//   ##   #  
	//   ######  
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x8E, 0xC2, 0x72, 0x3A, 0x0E, 0xC6, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @1160 '[' (10 pixels wide) */
	//           
	//     ####  
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ####  
	//           
	//           
	0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x04, 0x04, 0x00, 0x00, 

	/* @1180 '\' (10 pixels wide) */
	//   ##      
	//   ##      
	//    ##     
	//    ##     
	//     ##    
	//     ##    
	//     ##    
	//      ##   
	//      ##   
	//       ##  
	//       ##  
	//           
	//           
	0x00, 0x00, 0x03, 0x0F, 0x7C, 0xF0, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x06, 0x00, 0x00, 

	/* @1200 ']' (10 pixels wide) */
	//           
	//   ####    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//   ####    
	//           
	//           
	0x00, 0x00, 0x02, 0x02, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x04, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 

	/* @1220 '^' (10 pixels wide) */
	//     #     
	//     #     
	//    # #    
	//   #   #   
	//   #   #   
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x18, 0x04, 0x03, 0x04, 0x18, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @1240 '_' (10 pixels wide) */
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	// ######### 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 

	/* @1260 '`' (10 pixels wide) */
	//    #      
	//     #     
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @1280 'a' (10 pixels wide) */
	//           
	//           
	//           
	//    ####   
	//       ##  
	//    #####  
	//   ##  ##  
	//   ##  ##  
	//    ###### 
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xC0, 0xE8, 0x28, 0x28, 0xF8, 0xF0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 

	/* @1300 'b' (10 pixels wide) */
	//           
	//  ###      
	//   ##      
	//   ## ##   
	//   ### ##  
	//   ##  ##  
	//   ##  ##  
	//   ### ##  
	//  ### ##   
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x90, 0x08, 0xF8, 0xF0, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1320 'c' (10 pixels wide) */
	//           
	//           
	//           
	//    #####  
	//   ##   #  
	//   ##   #  
	//   ##      
	//   ##   #  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xF0, 0xF8, 0x08, 0x08, 0x08, 0xB8, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1340 'd' (10 pixels wide) */
	//           
	//      ###  
	//       ##  
	//    ## ##  
	//   ## ###  
	//   ##  ##  
	//   ##  ##  
	//   ## ###  
	//    ## ### 
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xF0, 0xF8, 0x08, 0x92, 0xFE, 0xFE, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 

	/* @1360 'e' (10 pixels wide) */
	//           
	//           
	//           
	//    ####   
	//   ##  ##  
	//   ######  
	//   ##      
	//   ##   #  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xF0, 0xF8, 0x28, 0x28, 0x38, 0xB0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1380 'f' (10 pixels wide) */
	//           
	//     ####  
	//    ##     
	//  #######  
	//    ##     
	//    ##     
	//    ##     
	//    ##     
	//  #######  
	//           
	//           
	//           
	//           
	0x00, 0x08, 0x08, 0xFC, 0xFE, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @1400 'g' (10 pixels wide) */
	//           
	//           
	//           
	//    ## ### 
	//   ## ###  
	//   ##  ##  
	//   ##  ##  
	//   ## ###  
	//    ## ##  
	//       ##  
	//    ####   
	//           
	//           
	0x00, 0x00, 0xF0, 0xF8, 0x08, 0x90, 0xF8, 0xF8, 0x08, 0x00, 
	0x00, 0x00, 0x00, 0x05, 0x05, 0x04, 0x07, 0x03, 0x00, 0x00, 

	/* @1420 'h' (10 pixels wide) */
	//           
	//  ###      
	//   ##      
	//   #####   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//  ###  ### 
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x08, 0x08, 0xF8, 0xF0, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 

	/* @1440 'i' (10 pixels wide) */
	//           
	//     ##    
	//           
	//   ####    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//   ######  
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x08, 0x08, 0xFA, 0xFA, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @1460 'j' (10 pixels wide) */
	//           
	//     ##    
	//           
	//  ######   
	//      ##   
	//      ##   
	//      ##   
	//      ##   
	//      ##   
	//      ##   
	//  #####    
	//           
	//           
	0x00, 0x08, 0x08, 0x08, 0x0A, 0xFA, 0xF8, 0x00, 0x00, 0x00, 
	0x00, 0x04, 0x04, 0x04, 0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 

	/* @1480 'k' (10 pixels wide) */
	//           
	//  ###      
	//   ##      
	//   ## ###  
	//   ## ##   
	//   ####    
	//   #####   
	//   ##  ##  
	//  ###  ### 
	//           
	//           
	//           
	//           
	0x00, 0x02, 0xFE, 0xFE, 0x60, 0x78, 0xD8, 0x88, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 

	/* @1500 'l' (10 pixels wide) */
	//           
	//   ####    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//  ######## 
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x02, 0x02, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 

	/* @1520 'm' (10 pixels wide) */
	//           
	//           
	//           
	// ########  
	//  ## ## ## 
	//  ## ## ## 
	//  ## ## ## 
	//  ## ## ## 
	// ### ## ###
	//           
	//           
	//           
	//           
	0x08, 0xF8, 0xF8, 0x08, 0xF8, 0xF8, 0x08, 0xF8, 0xF0, 0x00, 
	0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 

	/* @1540 'n' (10 pixels wide) */
	//           
	//           
	//           
	//  ######   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//  ###  ### 
	//           
	//           
	//           
	//           
	0x00, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0xF8, 0xF0, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 

	/* @1560 'o' (10 pixels wide) */
	//           
	//           
	//           
	//    ####   
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//    ####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xF0, 0xF8, 0x08, 0x08, 0xF8, 0xF0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1580 'p' (10 pixels wide) */
	//           
	//           
	//           
	//  ### ##   
	//   ### ##  
	//   ##  ##  
	//   ##  ##  
	//   ### ##  
	//   ## ##   
	//   ##      
	//  #####    
	//           
	//           
	0x00, 0x08, 0xF8, 0xF8, 0x90, 0x08, 0xF8, 0xF0, 0x00, 0x00, 
	0x00, 0x04, 0x07, 0x07, 0x04, 0x05, 0x01, 0x00, 0x00, 0x00, 

	/* @1600 'q' (10 pixels wide) */
	//           
	//           
	//           
	//    ## ### 
	//   ## ###  
	//   ##  ##  
	//   ##  ##  
	//   ## ###  
	//    ## ##  
	//       ##  
	//     ##### 
	//           
	//           
	0x00, 0x00, 0xF0, 0xF8, 0x08, 0x90, 0xF8, 0xF8, 0x08, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x05, 0x04, 0x07, 0x07, 0x04, 0x00, 

	/* @1620 'r' (10 pixels wide) */
	//           
	//           
	//           
	//   ### ##  
	//    ### #  
	//    ##     
	//    ##     
	//    ##     
	//   #####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x08, 0xF8, 0xF8, 0x10, 0x08, 0x18, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1640 's' (10 pixels wide) */
	//           
	//           
	//           
	//    #####  
	//   ##  ##  
	//   ####    
	//     ####  
	//   ##  ##  
	//   #####   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0xB0, 0xB8, 0x68, 0x68, 0xD8, 0xD8, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1660 't' (10 pixels wide) */
	//           
	//    ##     
	//    ##     
	//   #####   
	//    ##     
	//    ##     
	//    ##     
	//    ##  #  
	//     ###   
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x08, 0xFE, 0xFE, 0x08, 0x08, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1680 'u' (10 pixels wide) */
	//           
	//           
	//           
	//  ### ###  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//   ##  ##  
	//    ###### 
	//           
	//           
	//           
	//           
	0x00, 0x08, 0xF8, 0xF8, 0x00, 0x08, 0xF8, 0xF8, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 

	/* @1700 'v' (10 pixels wide) */
	//           
	//           
	//           
	//  ### ###  
	//   ## ##   
	//   ## ##   
	//    # #    
	//    ###    
	//    ###    
	//           
	//           
	//           
	//           
	0x00, 0x08, 0x38, 0xF8, 0x80, 0xF8, 0x38, 0x08, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 

	/* @1720 'w' (10 pixels wide) */
	//           
	//           
	//           
	// #### #### 
	//  ## # ##  
	//  ## # ##  
	//   ## ##   
	//   ## ##   
	//   ## ##   
	//           
	//           
	//           
	//           
	0x08, 0x38, 0xF8, 0xC8, 0x30, 0xC8, 0xF8, 0x38, 0x08, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 

	/* @1740 'x' (10 pixels wide) */
	//           
	//           
	//           
	//  ###  ### 
	//   ##  ##  
	//    ####   
	//    ####   
	//   ##  ##  
	//  ###  ### 
	//           
	//           
	//           
	//           
	0x00, 0x08, 0x98, 0xF8, 0x60, 0x60, 0xF8, 0x98, 0x08, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 

	/* @1760 'y' (10 pixels wide) */
	//           
	//           
	//           
	//  #### ### 
	//   ##  ##  
	//   ## ##   
	//    # ##   
	//    ###    
	//     ##    
	//    ##     
	//  #####    
	//           
	//           
	0x00, 0x08, 0x38, 0xF8, 0x88, 0xE0, 0x78, 0x18, 0x08, 0x00, 
	0x00, 0x04, 0x04, 0x06, 0x07, 0x05, 0x00, 0x00, 0x00, 0x00, 

	/* @1780 'z' (10 pixels wide) */
	//           
	//           
	//           
	//   ######  
	//   #  ##   
	//     ##    
	//    ##     
	//   ##   #  
	//   ######  
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x98, 0xC8, 0x68, 0x38, 0x18, 0x88, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 

	/* @1800 '{' (10 pixels wide) */
	//           
	//      ##   
	//     ##    
	//     ##    
	//     ##    
	//    ##     
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//      ##   
	//           
	//           
	0x00, 0x00, 0x00, 0x20, 0xFC, 0xDE, 0x02, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x04, 0x00, 0x00, 0x00, 

	/* @1820 '|' (10 pixels wide) */
	//           
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//           
	//           
	0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 

	/* @1840 '}' (10 pixels wide) */
	//           
	//    ##     
	//     ##    
	//     ##    
	//     ##    
	//      ##   
	//     ##    
	//     ##    
	//     ##    
	//     ##    
	//    ##     
	//           
	//           
	0x00, 0x00, 0x00, 0x02, 0xDE, 0xFC, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 

	/* @1860 '~' (10 pixels wide) */
	//           
	//           
	//           
	//           
	//    #      
	//   # # #   
	//      #    
	//           
	//           
	//           
	//           
	//           
	//           
	0x00, 0x00, 0x20, 0x10, 0x20, 0x40, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};


const uint8_t motionW[] =
{
	//                                     #  #################
	//                              #######   #################
	//                          ###########  ##################
	//                       ############## ###################
	//                   #   ############## ###################
	//                ####  ############### ###################
	//              ###### ################ ###################
	//            ######## ################ ###################
	//           ######### ################ ################## 
	//         ########### ################ ################## 
	//        ############ ################ ################## 
	//      ############## ###############  ################## 
	//     ############### ###############  ################## 
	//     ############### ############### ################### 
	//    ###############  ############### ################### 
	//   ################ ################ #################   
	//   ################ ###############   ###############    
	//   ################ ###############    ##############    
	//   ################ ###############   ###############    
	//   ################ ###############   ##############     
	//  ################   ##############   ##############     
	//  ###############    ##############   ##############     
	//  ###############    ##############  ##############      
	//  ###############    ############### ##############      
	//  ################   ############### ##############      
	//  ################  ###############################      
	//  ################  ##############################       
	//  ################  ##############################       
	//  ################  ##############################       
	// ################################################        
	// #  #############################################        
	//     ############################################        
	//     ###########################################         
	//     ###########################################         
	//      ##########################################         
	//      ##########################################         
	//       ##################### ##################          
	//       ####################  ##################          
	//       ####################  ##################          
	//        ###################  #################           
	//        ###################  #################           
	//        ###################   ################           
	//        ##################    ###############            
	//         ################                 ## ###         
	//         ##############                                  
	//         ############                                    
	//          #########                                      
	//          #######                                        
	//          ######                                         
	//           ####                                          
	//           ###                                           
	//            #                                            
	//            #                                            
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xF0, 0x00, 0xC0, 0xE0, 0xF8, 0xF8, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x01, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x00, 
	0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x0F, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0xC0, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 
	0x60, 0x3F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x01, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x0F, 0x07, 0x0B, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
