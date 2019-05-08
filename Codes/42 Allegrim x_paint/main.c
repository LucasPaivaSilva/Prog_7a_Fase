#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>				//Our primitive header file

int main(void)
{
	int width = 640;
	int height = 480;
    int r=255;
    int g=0;
    int b=0;
    int x=30;
    int y=30;
	bool done = false;
	int pos_x = width / 2;
	int pos_y = height / 2;

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;

	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(width, height);			//create our display object

	if(!display)										//test display object
		return -1;

	al_init_primitives_addon();
	al_install_keyboard();

	event_queue = al_create_event_queue();

	al_register_event_source(event_queue, al_get_keyboard_event_source());

	while(!done)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			switch(ev.keyboard.keycode)
			{
				case ALLEGRO_KEY_UP:
					pos_y -= 10;
					break;
				case ALLEGRO_KEY_DOWN:
					pos_y += 10;
					break;
				case ALLEGRO_KEY_RIGHT:
					pos_x += 10;
					break;
				case ALLEGRO_KEY_LEFT:
					pos_x -= 10;
					break;
                case ALLEGRO_KEY_R:
                    r=255;
                    g=0;
                    b=0;
                    break;
                case ALLEGRO_KEY_B:
                    r=0;
                    g=0;
                    b=255;
                    break;
                case ALLEGRO_KEY_G:
                    r=0;
                    g=255;
                    b=0;
                    break;
                case ALLEGRO_KEY_E:
                    r=0;
                    g=0;
                    b=0;
                    break;
                case ALLEGRO_KEY_O:
                    if (x>0){
                    x=x-10;
                    y=y-10;
                    }
                    break;
                case ALLEGRO_KEY_P:
                    if (x<=100){
                    x=x+10;
                    y=y+10;
                    }
                    break;


			}
		}
		else if(ev.type == ALLEGRO_EVENT_KEY_UP)
		{
			if(ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
				done = true;
		}

		al_draw_filled_rectangle(pos_x, pos_y, pos_x + x, pos_y + y, al_map_rgb(r,g,b));
		al_flip_display();
	}
}
