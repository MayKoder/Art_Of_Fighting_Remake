#ifndef __MODULESCENEJOHN_H__
#define __MODULESCENEJOHN_H__

#include "Module.h"
#include "Globals.h"
#include "Animation.h"

struct Mix_Music;
struct SDL_Texture;
struct SDL_Rect;

class ModuleSceneJohn : public Module {
public:
	SDL_Texture * graphics = nullptr;
	RectSprites rect_background;
	Animation rojoParpadeo;
	Animation rotuloVerde;
	Animation radio;
	Animation szechu;
	Animation morado;
	Animation cuadrado;
	Animation cartelAzul;
	Animation luzAzul;
	Animation blanco;
	bool show = false;
public:
	ModuleSceneJohn();
	~ModuleSceneJohn();
	Mix_Music* lee_music;
	bool Start() override;
	update_status Update()override;
	bool CleanUp();


	//Round variables & stuff
	SDL_Texture* indicator_fight;
	Animation winp2;
	Animation winp1;
	int win_p1 = 0;
	int win_p2 = 0;
	bool first_row;
	int collider_cleaning = 0;
	Animation nthng;
	RectSprites indicator;
	RectSprites timeup;
	Animation *current_animation = nullptr;
	int tick1 = 0, tick2 = 0, tick3 = 0;
	int rounds_counter = 0;

	Collider* BackPanel;
	Collider* FrontPanel;

};

#endif

