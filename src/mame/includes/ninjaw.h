/*************************************************************************

    Taito Triple Screen Games

*************************************************************************/

class ninjaw_state : public driver_data_t
{
public:
	static driver_data_t *alloc(running_machine &machine) { return auto_alloc_clear(&machine, ninjaw_state(machine)); }

	ninjaw_state(running_machine &machine)
		: driver_data_t(machine) { }

	/* memory pointers */
	UINT16 *   spriteram;
	size_t     spriteram_size;

	/* misc */
	UINT16     cpua_ctrl;
	INT32      banknum;
	int        pandata[4];

	/* devices */
	running_device *maincpu;
	running_device *audiocpu;
	running_device *subcpu;
	running_device *tc0140syt;
	running_device *tc0100scn_1;
	running_device *tc0100scn_2;
	running_device *tc0100scn_3;
	running_device *lscreen;
	running_device *mscreen;
	running_device *rscreen;
	running_device *_2610_1l;
	running_device *_2610_1r;
	running_device *_2610_2l;
	running_device *_2610_2r;
};


/*----------- defined in video/ninjaw.c -----------*/

VIDEO_START( ninjaw );
VIDEO_UPDATE( ninjaw );
