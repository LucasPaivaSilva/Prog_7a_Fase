#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>				//Our primitive header file

int main(void)
{
	int width = 640;
	int height = 480;
	int x=0,y=0, dir=1;

	ALLEGRO_DISPLAY *display = NULL;

	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(width, height);			//create our display object

	if(!display)										//test display object
		return -1;

	al_init_primitives_addon();

    for(x=0;x<100000;x++){
    if (y>=210 || y<=-210){
        dir=dir*-1;
    }
    y=y+dir;
    al_draw_rectangle(5, 5, 635, 475, al_map_rgb(229, 9, 9), 5);
    al_draw_line(5, 5, width - 0, 475, al_map_rgb(229, 9, 9), 5);
	al_draw_line(635, 0, width - 635, 475, al_map_rgb(229, 9, 9), 5);
	al_draw_filled_circle(320+y, 240, 100, al_map_rgb(255, 244, 99));
	al_draw_filled_triangle(220+y, 200, 420+y, 200, 320+y, 50, al_map_rgb(36, 130, 19));
	al_draw_filled_circle(270+y, 240, 10, al_map_rgb(255, 0, 0));
	al_draw_filled_circle(360+y, 240, 10, al_map_rgb(255, 0, 0));
	al_flip_display();
	al_rest(0.033333);
	al_clear_to_color(al_map_rgb(0, 0, 0));
    }


	al_destroy_display(display);						//destroy our display object

	return 0;
}
