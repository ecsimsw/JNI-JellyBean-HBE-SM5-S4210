/*
 *	
 * S4210 Dev Board key-pad header file 
 *
 */
#ifndef	_S4210_KEYCODE_H_

#define	_S4210_KEYCODE_H_
#if defined(CONFIG_KEYPAD_XXX_S4210) 
#if defined(CONFIG_BOARD_EDKS4210)
#define	MAX_KEYCODE_CNT		5
	
int S4210_Keycode[MAX_KEYCODE_CNT] = {
//JNJ	KEY_VOLUMEUP,	KEY_VOLUMEDOWN,	KEY_POWER, KEY_MENU, KEY_BACK
	KEY_VOLUMEUP,	KEY_VOLUMEDOWN,	KEY_POWER, KEY_VOLUMEUP, KEY_VOLUMEDOWN
};
	
#if defined(DEBUG_MSG)
const char S4210_KeyMapStr[MAX_KEYCODE_CNT][20] = {
//JNJ	"KEY_VOLUMEUP\n","KEY_VOLUMEDOWN\n","KEY_POWER\n","KEY_MENU\n","KEY_BACK\n"
	"KEY_VOLUMEUP\n","KEY_VOLUMEDOWN\n","KEY_POWER\n","KEY_VOLUMEUP\n","KEY_VOLUMEDOWN\n"
};
#endif	// DEBUG_MSG

#else  // defined(CONFIG_BOARD_SM5S4210) 
#define	MAX_KEYCODE_CNT		3
	
int S4210_Keycode[MAX_KEYCODE_CNT] = {
	KEY_VOLUMEUP,	KEY_VOLUMEDOWN,	KEY_POWER
};
	
#if	defined(DEBUG_MSG)
	const char S4210_KeyMapStr[MAX_KEYCODE_CNT][20] = {
		"KEY_VOLUMEUP\n",	"KEY_VOLUMEDOWN\n",	"KEY_POWER\n"
	};
#endif	// DEBUG_MSG
#endif	
#endif	  

#endif		/* _S4210_KEYPAD_H_*/
